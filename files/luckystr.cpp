#include<stdio.h>
#include<string.h>

int main()
{int k,n,i,l,l2,j,p,ch,pc;char a[60][60],b[60];
scanf("%d %d",&k,&n);
for(i=0;i<k;i++){scanf("%s",&a[i]);}
while(n)
{scanf("%s",&b);l=strlen(b);
if(l>=47){printf("Good\n");}
else{ch=1;
for(i=0;i<k;i++){l2=strlen(a[i]);
for(p=0;p<l;p++){j=0;pc=p;if(b[p]==a[i][j]){while(b[pc]==a[i][j]&&j<l2){j++;pc++;if(j==l2){ch=0;printf("Good\n");break;}}}if(ch==0){break;}}
if(ch==0){break;}
}
if(ch){printf("Bad\n");}}
n--;}

}
