#ifndef GENERIC_TREE_NODE_H
#define GENERIC_TREE_NODE_H
template <typename T>
class GenricTreeNode{
    T data;
    GenricTreeNode <T> **children;
    unsigned int child_count;
    GenericTreeNode<T> *parent;
    public:
        unsigned int getChildcount
        GenericTreeNode<T> **getChildren()const{
        return children;
   }


};
