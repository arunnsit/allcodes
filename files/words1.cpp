#include<stdio.h>
#include<string.h>
int v[26],edge[26][26];

void traverse(int a){
	v[a]=0;
	int j;
	for(j=0;j<26;j++){
		if(v[j]==1&&((edge[a][j]==1)||(edge[j][a]==1))){
			traverse(j);
		}
	}

}

int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		int in[26]={0},out[26]={0},l,i,j,nk,yo=0;
		char a[1009];
		scanf("%d",&n);
		nk=n;
		for(l=0;l<26;l++){
			for(i=0;i<26;i++){
				edge[l][i]=0;
			}
			v[l]=0;
		}
		while(n--){
			scanf("%s",a);
			in[a[0]-'a']++;
			l=strlen(a);
			out[a[l-1]-'a']++;
			edge[a[0]-'a'][a[l-1]-'a']=1;
			edge[a[l-1]-'a'][a[0]-'a']=1;
			v[a[0]-'a']=1;
			v[a[l-1]-'a']=1;
			yo=a[l-1]-'a';
		}
		int start=-1,end=-1,con=0;
		for(i=0;i<26;i++){
			if(in[i]==out[i]+1&&start==-1)start=i;
			else if(in[i]+1==out[i]&&end==-1)end=i;
			else if(in[i]==out[i]){}
			else con=1;	
		}
		if(start!=-1)traverse(start);
		else traverse(yo);
		for(i=0;i<26;i++)if(v[i])con=1;

		if((start!=-1&&end!=-1&&!con)||nk==1||(start==-1&&end==-1&&!con))printf("Ordering is possible.\n");
		else printf("The door cannot be opened.\n");
	
	}

}