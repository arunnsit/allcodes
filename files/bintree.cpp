#include<stdio.h>
#include<math.h>
int main(){
int t,i,j,ans;
scanf("%d",&t);
while(t){ans=0;
        scanf("%d %d",&i,&j);

while(i!=j){

        if(i>j){i=i>>1;
        }else{j=j>>1;
        }ans++;

}
printf("%d\n",ans);

t--;}

}
