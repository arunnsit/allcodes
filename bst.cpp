#include<iostream>
using namespace std;
struct node {
    int data;
    node * left;
    node * right;
};

node * findMin(node * root) {
    while(root->left) {
        root = root->left;
    }
    return root;
}
node * findElement(node * root, int data) {
    while(root) {
        if (root->data == data) {
            return root;
        } else if (root->data < data) {
            root = root->right;
        } else {
            root = root->left;
        }
    }
    return NULL;
}
void insert(node ** root, int data) {
    node * new_node = new node;
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    if (*root == NULL) {
        *root = new_node;
        return;
    }
    node * prev = 0, *temp = *root;
    while(temp) {
        prev = temp;
        if (temp->data < data) {
            temp = temp->right;
        } else {
            temp = temp->left;
        }
    }
    if (prev->data < data) {
        prev->right = new_node;
    } else {
        prev->left = new_node;
    }
    return;
}
node * deletedata(node * root, int data) {
    if (!root) return NULL;
    if (root->data > data) {
        root->left = deletedata(root->left, data);
    } else if (root->data < data) {
        root->right = deletedata(root->right, data);
    } else {
        if (!root->left && !root->right) {
            delete root;
            return NULL;
        } else if (root->left && !root->right) {
            node * temp = root->left;
            delete root;
            return temp;
        } else if (!root->left && root->right) {
            node * temp = root->right;
            delete root;
            return temp;
        } else {
            node * min = findMin(root->right);
            root->data = min->data;
            root->right = deletedata(root->right, root->data);
            return root;
        }
    }
    return root;
}
node *formation(int a[]){

}
node *constructformpre(int arr[])
void printInOrder(node * root) {
    if (!root) return;
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
    return;
}
void printinrange(node *root,int k1,int k2){
    if(root->data>k2){
        printinrange(root->left,k1,k2);
    }
    else if(root->data<k1){
        printinrange(root->right,k1,k2);
    }
    else {
        cout<<root->data<<" ";
        printinrange(root->left,k1,k2);
        printinrange(root->right,k1,k2);
    }
}
int main() {
    node * root = NULL;
    int value;
    cin >> value;
    while (value != -1) {
        insert(&root, value);
        cin >> value;
    }
    printInOrder(root);
    cout << endl;
    root = deletedata(root, 10);
    printInOrder(root);
    return 0;
}
