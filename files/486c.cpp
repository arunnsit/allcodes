#include<stdio.h>
#include<algorithm>
int main(){
    int l,p,i,j;char a[100009];
    scanf("%d %d",&l,&p);
    scanf("%s",&a);
    p--;
    if(l%2==0){
        int so=0,minc=-1,maxc=-1,c=0;
        for(i=0;i<l/2;i++){
                if(a[i]!=a[l-1-i]){
                        if(c==0){minc=i;c++;}
                        maxc=i;
                        so+=std::min(abs(a[i]-a[l-1-i]),abs(122-abs(a[i]-a[l-1-i])+1-97));
                        }
                        }if(minc!=-1){
                        if(p<l/2){
                            so+=maxc-minc+std::min(abs(p-maxc),abs(p-minc));
                        }
                        else{
                            p=l-1-p;
                            so+=maxc-minc+std::min(abs(p-maxc),abs(p-minc));
                        }}
                        printf("%d\n",so);
    }
     if(l%2!=0){
        int so=0,minc=-1,maxc=-1,c=0;
        for(i=0;i<l/2;i++){
                if(a[i]!=a[l-1-i]){
                        if(c==0){minc=i;c++;}
                        maxc=i;
                        so+=std::min(abs(a[i]-a[l-1-i]),abs(122-abs(a[i]-a[l-1-i])+1-97));
                        }
                        }if(minc!=-1){
                        if(p<l/2){
                            so+=maxc-minc+std::min(abs(p-maxc),abs(p-minc));
                        }
                        else{
                            p=l-1-p;
                            so+=maxc-minc+std::min(abs(p-maxc),abs(p-minc));
                        }}
                        printf("%d\n",so);
    }



}
