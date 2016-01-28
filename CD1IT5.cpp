#include<stdio.h>
int main(){
    int n,q,a[100006][2],x,y,z,i,j,end;
    scanf("%d %d",&n,&q);end=0;
    for(i=0;i<q;i++){
        scanf("%d %d %d",&z,&x,&y);
        if(z==0){
            a[end][0]=x;
            a[end][1]=y;
            end++;
        }
        if(z==1){int o=0;
            for(j=0;j<end;j++){
                if((a[j][0]==x&&a[j][1]==y)||(a[j][0]==y&&a[j][1]==x))
                {o=1;break;
                }
            }
            if(o)printf("Yes\n");
            else printf("No\n");

        }
    }
}
