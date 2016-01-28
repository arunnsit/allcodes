#include<iostream>
using namespace std;
int l=0;
struct node{
    int val;
    node *ptr;
};
node sort(node *(head)){
    int k=1,j,k;node *prev=NULL,*cur=NULL,*nxt=NULL,*prev2=NULL,*nxt2=NULL,*cur2=NULL,*headc=NULL;
    headc=head;
    for(i=0;i<l;i++){head=headc;
    for(j=0;j<l;j++){

        if(head->val>head->ptr->val){
            if(j==0){
                nxt=head->ptr->ptr;
                head->ptr->ptr=head->ptr;
                head->ptr=nxt;

            }
            nxt=head->ptr->ptr;
            head->ptr=nxt;

            prev->ptr=head->ptr;


        }
    prev=head;
    head=head->ptr;
    }

    }


    while(headc!=NULL){
        cout<<headc->val<<"-->";
        headc=headc->ptr;
    }
    cout<<"NULL";




}

node *createll(){
    int k;node *head=NULL,*tail=NULL,*headc;
    cin>>k;l=1;
    while(k!=-1){
    node *cur=new node;
    cur->val=k;l++;
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
sort(head);
}
