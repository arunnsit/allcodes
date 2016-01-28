#include<stdio.h>
struct node{
    char a[20];
    int roll;
    struct node *nxt;
};
createll(struct node *b){
    struct node a;
    int data,i;
    for( i=0;i<3;i++){
        struct  node *h=(int *)malloc(sizeof(a)*2);
        scanf("%d",&data);
        b->nxt=h;
        b->roll=data;
        scanf("%s",&b->a);
        b=b->nxt;
        printf("yo\n");
    }
    b->nxt=NULL;
}
struct node *reverse(struct node *b,struct node *prev){
    if(b->nxt==NULL )return b;
    else {
       // b->
    }
}
int main(){
  struct node a;
  struct  node *head=(struct node *)malloc(sizeof(a)*2),*y=(struct node *)malloc(sizeof(a)*2);
  createll(head);
  head=reverse(head,NULL);
  while(head->nxt!=NULL){
    printf("%d %s\n",head->roll,head->a);
    head=head->nxt;
  }
}
