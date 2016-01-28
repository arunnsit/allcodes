#include<iostream>
using namespace std;
struct node{
    int val;
    node *ptr;
};
node swap(int i ,int j,node *(head)){
    int k=1;node *prev=NULL,*cur=NULL,*nxt=NULL,*prev2=NULL,*nxt2=NULL,*cur2=NULL,*headc=NULL;
    headc=head;
    while(k!=i){
        prev=head;
        head=head->ptr;

    k++;   }
    cur=head;
    nxt=head->ptr;
    while(k!=j){
    prev2=head;
    head=head->ptr;
        k++;
    }
    cout<<"l\n";
    cur2=head;
    nxt2=head->ptr;
    if(i!=1)prev->ptr=cur2;
    if(i==1){headc=cur2;headc->ptr=nxt;}
    cur2->ptr=nxt;
    prev2->ptr=cur;
    cur->ptr=nxt2;

    while(headc!=NULL){
        cout<<headc->val<<"-->";
        headc=headc->ptr;
    }
    cout<<"NULL";




}

node *createll(){
    int k;node *head=NULL,*tail=NULL,*headc;
    cin>>k;
    while(k!=-1){
    node *cur=new node;
    cur->val=k;
    cur->ptr=NULL;
    if(head==NULL){
        head=cur;
        tail=cur;
    }
    cin>>k;
    tail->ptr=cur;
    tail=cur;
 }headc=head;
    while(head!=NULL){
        cout<<head->val<<"-->";
        head=head->ptr;
    }
    cout<<"NULL";
return headc;
}
int main(){
int i ,j;node *head;
head=createll();
cout<<"\n";
cin>>i>>j;
swap(i,j,head);
}
