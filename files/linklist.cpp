#include<iostream>
using namespace std;
struct node{
    int value;
    node *ptr;
};


int main(){
    int n=5,i,*tail,k;
    node *b,*prev,*head;
    for(i=0;i<5;i++){
                        node *a=new node;
                        cin>>k;
                        a->value=k;
                        a->ptr=NULL;
                        if(i==0){
                                head=a;

                        }
                        else{
b->ptr=a;
                        }
b=a;

}
for(i=0;i<5;i++){
            cout<<head->value<<"->";
    head=head->ptr;
}



}
