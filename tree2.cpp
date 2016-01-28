#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
struct node{
    int child_count;
    int data;
    node *parent;
    node **children;
};
int printtree(node *root){
        if (root == NULL) {
            return 0;
        }
        cout << root->data << " ";
        node **ch= root->children;
        for (int i = 0; i < root->child_count; i++) {
            printtree(ch[i]);
        }
        return 0;
    }

    node * maxsearch(node *root){
        if (root == NULL) {
            return NULL;
        }
        node *max=root;
        node **ch=root->children;
        for(int i = 0; i < root->child_count; i++){
            node * temp = maxsearch(ch[i]);
            if (temp->data > max->data) {
                max = temp;
            }
        }
        return max;
    }
    node * createTree(node *root) {

        int value, count;
        cout << "Enter data for root node";
        cin >> value;
        root->data=value;
        root->children=NULL;
        queue<node *> q;
        q.push(root);
        while(!q.empty()){
            node * temp = q.front();
            q.pop();
            cout << "Enter child count for node with data - " << temp->data << endl;
            cin >> count;
            temp->child_count=count;
            if (count > 0){
                node ** children = new node * [count];
                temp->children=children;
                for(int i =0; i < count; i++) {
                    cout << "Enter data for child " << i << " ";
                    cin >> value;
                    children[i] = new node;
                    children[i]->data=value;
                    children[i]->parent=temp;
                    q.push(children[i]);
                }
            }
        }
return root;
        }
int maxsumnode(node *root,int &sum){
    if (root == NULL) {
            return 0;
        }
        int ma=root->data;
        node **ch=root->children;
        int temp=0,temp2=0,temp3=0,j;
        temp3=ma;
        for(int i = 0; i < root->child_count; i++)
        {temp+=ch[i]->data;
        cout<<" "<<ch[i]->data;
        }        sum=std::max(sum,ma+temp);cout<<"\n";

        for(j=0;j<root->child_count;j++){
            maxsumnode(ch[j],sum);
        }
        return 0;
}


struct tree{
    node *root;
    };
int print level

int main(){
    tree *t=new tree;
    node *y=new node;
    t->root=y;
    createTree(y);
    printtree(y);
    node* max = maxsearch(y);
    cout<<"\n";
    int sum=0,k;
    cout<<" "<<y->data<<endl;
    k=maxsumnode(y,sum);
    cout<<"maxsum "<<sum<<"\n";
    cout << max->data << endl;
    return 0;
}



