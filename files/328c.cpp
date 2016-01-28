#include<stdio.h>
#include<algorithm>
int a[100009];
int main(){
    int n,y;
    scanf("%d",&n);
    if(n==1){scanf("%d",&y);printf("-1\n");}
    else if(n==2){
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        std::sort(a,a+n);
        int d=a[1]-a[0];
        if((a[1]-a[0])%2==0){
            if((a[1]-a[0])==0)printf("1\n%d\n",a[1]);
            else {printf("3\n%d %d %d\n",a[0]-d,a[0]+d/2,a[1]+d);
        }

    }
    else {printf("2\n%d %d",a[0]-d,a[1]+d);
    }
    }
    else{
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        std::sort(a,a+n);int temp;
        int d=100000009,d2=100000009,pos=0,c=0,c1=0,c2=0;
        for(int i=1;i<n;i++){
            temp=a[i]-a[i-1];

            if(d==100000009){d=temp;d2=temp;pos=i;}
            if(d!=temp&&((d2==d)||(d2==100000009))){if(temp==d/2){d2=d;d=d/2;c2+=c1;c1=0;}
                        else if(temp==d*2){d2=temp;pos=i;}
                         else c=1;}
             else if(d!=temp)c=1;
              if(temp==d)c1++;
            if(temp==d2&&d!=d2)c2++;
        }
        if(c||c2>1)printf("0\n");
        else if(d==0&&d2==0)printf("1\n%d\n",a[0]);
        else if(2*d==d2){printf("1\n%d\n",a[pos-1]+d);}
        else if(d==d2)printf("2\n%d %d\n",a[0]-d,a[n-1]+d);
        else if(d!=d2)printf("0\n");

    }
}
