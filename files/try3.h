#ifndef binary_tree
#define binary_tree
#include <iostream>
#include <queue>
#include "binarytreenode.h"
using namespace std;
template <typename T>
class binarytree
{
    binarytree_node<T> * root;
    static void printpreorderhelper(binarytree_node<T> * root);
    static int getheighthelper(binarytree_node<T> * root);
    static int getsumhelper(binarytree_node<T> *root);
    static bool balancecheckhelper(binarytree_node<T> * root);
    static void treemirrorhelper(binarytree_node<T> * rooto);
public:
    binarytree():root(NULL){}
    void createbinarytree();
    void printpreorder();
    int getheight()
    {
        return getheighthelper(root);
    }
    int getsum()
    {
        return getsumhelper(root);
    }
    bool balancecheck()
    {
        return balancecheckhelper(root);
    }
    binarytree<T> treemirror()
    {
        binarytree<T> z;
        z.treemirrorhelper(root);
        return z;
    }
};
template <typename T>
void binarytree<T>::createbinarytree()
{
    if(root!=NULL)
    {
        return;
    }
    root=new binarytree_node<T>;
    cout<<"enter the data for the root "<<endl;
    int value;
    cin>>value;
    root->setdata(value);
    queue<binarytree_node<T> *> q;
    q.push(root);
    while(!q.empty())
    {
        binarytree_node<T> * temp=q.front();
        q.pop();
        cout<<"does left child exist for the node having data "<<temp->getdata()<<endl;
        char a;
        cin>>a;
        if(a=='y')
        {
            binarytree_node<T> * ch=new binarytree_node<T>;
            temp->setleftchild(ch);
            cout<<"enter data for the left child "<<endl;
            cin>>value;
            ch->setdata(value);
            q.push(ch);
        }
        cout<<"does right child exist for the node having data "<<temp->getdata()<<endl;
        cin>>a;
        if(a=='y')
        {
            binarytree_node<T> * ch=new binarytree_node<T>;
            temp->setrightchild(ch);
            cout<<"enter data for the right child "<<endl;
            cin>>value;
            ch->setdata(value);
            q.push(ch);
        }
    }
}
template <typename T>
void binarytree<T>::printpreorder()
{
    printpreorderhelper(root);
}
template <typename T>
void binarytree<T>::printpreorderhelper(binarytree_node<T> * root)
    {
        if(root==NULL)
            return;
        cout<<root->getdata()<<endl;
        printpreorderhelper(root->getleftchild());
        printpreorderhelper(root->getrightchild());
    }
template <typename T>
int binarytree<T>::getheighthelper(binarytree_node<T> * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lheight=getheighthelper(root->getleftchild());
    int rheight=getheighthelper(root->getrightchild());
    return lheight>rheight?lheight+1:rheight+1;
}
template <typename T>
int binarytree<T>::getsumhelper(binarytree_node<T> *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftsum=getsumhelper(root->getleftchild());
    int rightsum=getsumhelper(root->getrightchild());
    return leftsum+rightsum+root->getdata();
}
template <typename T>
bool binarytree<T>::balancecheckhelper(binarytree_node<T> * root)
{
    int left=getheighthelper(root->getleftchild());
    int right=getheighthelper(root->getrightchild());
    return (left-right <=1) && (left-right >=(-1));
}
template <typename T>
void binarytree<T>::treemirrorhelper(binarytree_node<T> * rooto)
{
    if(rooto==NULL)
        return;
    root=rooto;
    queue<binarytree_node *> q;
    q.push(rooto);
    queue<binarytree_node *> t;
    t.push(root);
    while(!q.empty())
    {
    binarytree_node<T> *temp=q.front();
    binarytree_node<T> *temp1=t.front();
    q.pop();
    t.pop();
        if(temp->getrightchild()!=NULL)
        {
            binarytree_node<T> *ch=new binarytree_node<T>;
            ch=temp->getrightchild();
            temp1->setleftchild(ch);
            q.push(temp->getrightchild());
            t.push(ch);
        }
        if(temp->getleftchild()!=NULL)
        {
            binarytree_node<T> *ch1=new binarytree_node<T>;
            ch1=temp->getleftchild();
            temp1->setrightchild(ch1);
            q.push(temp->getleftchild());
            t.push(ch1);
        }
}
#endif // binary_tree
