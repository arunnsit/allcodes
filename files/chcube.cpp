#include<stdio.h>
#include<unordered_map>
int main(){
	int t,i,k;
	char a[10][10];
	scanf("%d",&t);
	while(t--){
		unordered_map<string,int>map1;
		k=1;
		int b[10];
		for(i=0;i<6;i++){
			scanf("%s",a[i]);
			if(map1[a[i]]==0){
				map1[a[i]]=k++;
				b[i]=k-1;
		}
		else{
			b[i]=map1[a[i]];
		}

	}
	k=1;
	if(b[0]==b[3]&&b[3]==b[4]){k=0;}
	if(b[0]==b[2]&&b[2]==b[4]){k=0;}
	if(b[0]==b[5]&&b[3]==b[5]){k=0;}
	if(b[0]==b[2]&&b[2]==b[5]){k=0;}
	if(b[1]==b[3]&&b[3]==b[4]){k=0;}
	if(b[1]==b[2]&&b[2]==b[4]){k=0;}
	if(b[1]==b[2]&&b[2]==b[5]){k=0;}
    if(b[1]==b[5]&&b[5]==b[3]){k=0;}
    if(k==0)printf("YES\n");
    else printf("NO\n");

	
}
}