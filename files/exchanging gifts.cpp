#include<stdio.h>
#include<math.h>
int grp[100009][2]={0},a[100009]={0};
int main()
{int n,k,gr,x,y,i,coun=1,t,mod=1000000007,l;
scanf("%d %d",&n,&k);gr=1;
for(i=0;i<k;i++){scanf("%d %d",&x,&y);if(grp[x][0]!=0){grp[y][0]=grp[x][0];a[grp[x][0]]++;}
else if(grp[y][0]!=0){grp[x][0]=grp[y][0];a[grp[y][0]]++;}
else {
    grp[x][0]=gr;grp[y][0]=gr;a[gr]+=2;gr++;
}}

for(i=0;i<gr;i++){l=(pow(2,a[i])-a[i]);
        coun=(coun*l)%mod;
}
if(n==1){printf("0\n");}
else{t=pow(2,n-2*k)-n+2*k;
if(t){coun=(coun*t)%mod;}
printf("%d\n",k*k);
}

}

