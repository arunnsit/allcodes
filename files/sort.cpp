#include<iostream>
using namespace std;
struct node{
    int value;
    node *ptr;
};
/*node createnode(){
    node a;
    a->ptr=null;
    return a;
}*/

int main(){
    int i,k,l=0,n; node *b,*prev=NULL,*head=NULL,*p,*cur=NULL,*tail,*f=NULL;
        cin>>k;
      while(k!=-1){
                        node *a=new node;
                        a->value=k;
                        a->ptr=NULL;
                        if(head==NULL){
                                head=a;

                        }
                        else{
                              prev->ptr=a;
                        }
                              prev=a;
                              cin>>k;
                              l++;}



            for(i=1;i<l;i++){
            p=head->ptr;
            for(i=1;i<l-1;i++){
                    cur=p->ptr;
                    if(cur->value > cur->ptr->value){
                     {p->ptr=cur->ptr;
                     tail=cur->ptr->ptr;
                     cur->ptr->ptr=cur;
                     cur->ptr=tail;
                  }
                    p=p->ptr;

            }
            }
            }
            cur=head;

      while(l--){k=cur->value;
                    cur=cur->ptr;
                    cout<<k<<"->";

}
cout<<"NULL";
}
