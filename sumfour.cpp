#include<stdio.h>
#include<algorithm>
int cont[16000009],cont2[16000009],f[16000009][2]={0},v[16000009][2]={0};
int main(){
    int n,a[4004],b[4004],c[4004],d[4004],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
    int k=0,o=0;
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++){
        cont[k++]=a[i]+b[j];
     }

    }
    std::sort(cont,cont+k);
    f[0][0]=cont[0];
    f[0][1]=1;
    j=1;
    for(i=1;i<k;i++){
       if(cont[i]==cont[i-1]){f[j-1][1]++;}
       else {f[j][0]=cont[i];f[j][1]=1;j++;}
    }
    k=j;
    //for(i=0;i<k;i++)printf("%d %d\n",f[i][0],f[i][1]);
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++){
         cont2[o++]=-1*(c[i]+d[j]);}
    }
     std::sort(cont2,cont2+o);
    v[0][0]=cont2[0];
    v[0][1]=1;
    j=1;
        for(i=1;i<o;i++){
       if(cont2[i]==cont2[i-1])v[j-1][1]++;
       else {v[j][0]=cont2[i];v[j][1]=1;j++;}
    }
    o=j;

    int coun=0;
    i=0;
    j=0;
    while(i!=k&&j!=o){
        if(f[i][0]>v[j][0])j++;
        else if(f[i][0]<v[j][0])i++;
        else {coun+=f[i][1]*v[j][1];i++;j++;}
    }
    printf("%d\n",coun);

}
