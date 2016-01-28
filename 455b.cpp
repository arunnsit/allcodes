#include<iostream>
using namespace std;
#include<string.h>
struct node{
	int val;
	int sol;
	int l;
	node *nxt[26];
};
int sol[26][2]={0};
node *trie=new node();
void add(string a){
	int i,l=strlen(a),j=1;
	while(a[i]!='\0')
	{
		if(trie->nxt[a[i]-97]==NULL){
			node *temp=new node();
			trie->nxt[a[i]-97]=temp;
		}
		


	i++;
}


}
int main(){
	int n,k,i,j;
	string a;
	for(i=0;i<26;i++)sol[i][0]=-1;
    cin>>n>>k;
    while(n--){
    	cin>>a;
    	add(a);
    }


}