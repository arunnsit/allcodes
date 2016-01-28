#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t,n,i;
    scanf("%d",&t);
    while(t){char a[100],a2[100][100],b2[100][100],b[100];
    scanf("%d",&n);i=0;
    while(i<n){
        scanf("%s",&a);
        cin.getline(b,100);
if(i==n-1){if(a[0]=='R'){strcpy(a2[1],"Left");}
else if(a[0]=='L'){strcpy(a2[1],"Right");}}
if(i==n-1){strcpy(a2[n-1-i],"Begin");}
else if(a[0]=='R'){strcpy(a2[n-i],"Left");}
else if(a[0]=='L'){strcpy(a2[n-i],"Right");}
strcpy(b2[n-1-i],b);

    i++;}
   for(i=0;i<n;i++){printf("%s%s\n",a2[i],b2[i]);}


    t--;}
}
