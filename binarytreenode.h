#ifndef binary_treenode
#define binary_treenode
#include <iostream>
using namespace std;
template <typename T>
class binarytree_node
{
    binarytree_node <T> * parent;
    binarytree_node<T> *leftchild;
    binarytree_node<T> *rightchild;
    T data;
public:
    binarytree_node():parent(NULL),leftchild(NULL),rightchild(NULL),data(0){}
    void setparent(binarytree_node<T> * temp)
    {
        parent=temp;
    }
    void setleftchild(binarytree_node<T> * temp)
    {
        leftchild=temp;
    }
    void setrightchild(binarytree_node<T> * temp)
    {
        rightchild=temp;
    }
    void setdata(T d)
    {
        data=d;
    }
    T getdata()
    {
        return data;
    }
    binarytree_node<T> * getparent()
    {
        return parent;
    }
    binarytree_node<T> * getleftchild()
    {
        return leftchild;
    }
    binarytree_node<T> * getrightchild()
    {
        return rightchild;
    }
};
#endif // binary_treenode
