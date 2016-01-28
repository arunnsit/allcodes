#include<stdio.h>
#include<string.h>
int main(){
    int t,i,j,c,k,p;char a[10000],b[10000];
    scanf("%d",&t);
    while(t){int m=1;
            scanf("%s",&a);strcpy(b,a);
            for(i=0;a[i]!='\0';i++){c=0;m=1;int y=10;
                    for(j=i;a[j]!='\0';j++)if(a[j]=='?'){c++;}else {if((a[j]=='C'&&c==0)||(a[j]=='H'&&c==1)||(a[j]=='E'&&c==2)||(a[j]=='F'&&c==3))m=0;
                    if(a[j]=='C')y=0;
                    if(a[j]=='H')y=1;
                    if(a[j]=='E')y=2;
                    if(a[j]=='F')y=3;

                            break;}
            if(m){if(c>y)c=y+1;
                    for(j=i;j<i+c%4;j++){b[j]='A';}i+=c%4;}

     if((a[i]=='C'||a[i]=='?')&&(a[i+1]=='H'||a[i+1]=='?')&&(a[i+2]=='E'||a[i+2]=='?')&&(a[i+3]=='F'||a[i+3]=='?')){
        b[i]='C';
        b[i+1]='H';
        b[i+2]='E';
        b[i+3]='F';
        i+=3;
    }
  else{

  }

            }
    printf("%s\n",b);

    t--;}
}
