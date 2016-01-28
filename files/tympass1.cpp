int func(node * head){
    node *headc=NULL,*cop=NULL,*cop2=NULL;
    node *prev=NULL;
    node yoyo[1000];
    cop=head;
while(head!=NULL){
    node *temp=new node;
    temp->value=head->value;
    temp->nxt=NULL;
    head->random=NULL;
    yoyo[head->random->value]=;
    if(headc==NULL){
        headc=temp;
        cop2=temp;
    }
    else{
    prev->nxt=temp;
}    prev=temp;
head=head->nxt;
}
while(cop2!=NULL){
    cop2->random=yoyo[cop2->value];
cop2=cop2->nxt;
}
