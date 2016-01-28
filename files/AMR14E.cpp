#include<stdio.h>
#include<math.h>
int  p=31631;
int s[31632]={0};]
void sieve(){
    int i,j;
    for(i=2;i<=p;i++){
    for(j=i*i;j<=p;j+=i)
        s[j]++;
    }
}
int main(){
    sieve();
    int t,a,b,i,x,y,j,c,h,o;
    scanf("%d",&t);
    while(t){c=0;
        int p[200002]={0};
        scanf("%d %d",&a,&b);
        y=sqrt(b);
        for(i=2;i<=y;i++){

            {
                int k=a%i;
                if(k==0)k=i;
                k=a+i-k;
                for(j=k;j<=b;j+=i){h=sqrt(j);
                    if(i<=h)
                    {p[j-a]++;}
                }
            }
        }
        for(i=a;i<=b;i++){h=sqrt(i);
            if(p[i-a]==0&&i!=1){c++;}
            else if(s[2*p[i-a]+1]==0&&h*h==i&&i!=1){c++;}
        }
        printf("%d\n",c);
    t--;}
}
