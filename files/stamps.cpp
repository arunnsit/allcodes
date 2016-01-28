#include<stdio.h>
#include<algorithm>
int e[1000000];
using namespace std;
int main()
{int a,b,c,d,f,g,t;
scanf("%d",&t);
for(g=1;g<=t;g++){scanf("%d %d",&a,&b);d=0;f=0;
for(c=0;c<b;c++){scanf("%d",&e[c]);}
sort(e,e+b);
for(c=b-1;c>=0;c--){d+=e[c];f++;if(d>=a){break;}}
if(d>=a){printf("Scenario #%d:\n%d\n",g,f);}
else{printf("Scenario #%d:\nimpossible\n",g);}
printf("\n");
}

}
