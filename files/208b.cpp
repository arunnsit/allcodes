#include<stdio.h>
#include<stack>
#include<string>
using namespace std;
stack<string> s[70];
int main()
{   char a[10],c[10];
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",a);
		s[i].push(a);

	}
	int ch=0;
	for(i=t-1;i>=1;i--)
	{   while(!s[i].empty()){
		if(i-3>=0&&(s[i].top()[0]==s[i-3].top()[0])||(s[i].top()[1]==s[i-3].top()[1])){
			c[0]=s[i].top()[0];
			c[1]=s[i].top()[1];
			c[2]=s[i].top()[2];
			s[i].pop();
			s[i-3].push(c);
		}
		else if(i-1>=0&&((s[i].top()[0]==s[i-1].top()[0])||(s[i].top()[1]==s[i-1].top()[1]))){
			c[0]=s[i].top()[0];
			c[1]=s[i].top()[1];
			c[2]=s[i].top()[2];
			s[i].pop();
			s[i-1].push(c);
		}
		else {
			ch=1;
			break;
		}
					printf("yo");

	}
	if(!ch)break;
	}
	if(!ch)printf("NO\n");
	else printf("YES\n");


}