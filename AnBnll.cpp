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
    int i,k,l=0,n; node *b,*prev=NULL,*head=NULL,*p,*cur=NULL,*f=NULL;
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
                   p=head;
                   cur=head->ptr;
                   f=cur->ptr;

            for(i=1;i<l-1;i++){
                  cur->ptr=p;
                  p=cur;
                  cur=f;
                  f=f->ptr;
            }cur->ptr=p;

      while(l--){k=cur->value;
                    cur=cur->ptr;
                    cout<<k<<"->";

}
cout<<"NULL";


}
