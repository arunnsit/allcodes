#include<stdio.h>
char a[1000003]={0};
long long int c[1000003]={0};
long long  int h[1000003]={0};
long long  int e[1000003]={0};
long long  int f[1000003]={0};
long long int csol[1000003][3]={0};
long long int hsol[1000003][3]={0};
long long int esol[1000003][3]={0};
long long int fsol[1000003][3]={0};
int main(){
    int i,q,l,j,r;char ch1[2],ch2[2];
    scanf("%s",&a);
    for(j=0;a[j]!='\0';j++){i=j+1;
        if(a[j]=='c'){
                c[i]=c[i-1]+1;}
        else {c[i]=c[i-1];}
        if(a[j]=='f'){
                f[i]=f[i-1]+1;
        }
                else {f[i]=f[i-1];
                }
                if(a[j]=='h'){
                h[i]=h[i-1]+1;
        }
                    else {h[i]=h[i-1];}
                    if(a[j]=='e'){
                e[i]=e[i-1]+1;

        }
                else {e[i]=e[i-1];
               }
        if(a[j]=='c'){
                hsol[i][0]=hsol[i-1][0]+h[i];
                esol[i][0]=esol[i-1][0]+e[i];
                fsol[i][0]=fsol[i-1][0]+f[i];
        }
        else {  hsol[i][0]=hsol[i-1][0];
                esol[i][0]=esol[i-1][0];
                fsol[i][0]=fsol[i-1][0];}


                if(a[j]=='h'){
                csol[i][0]=csol[i-1][0]+c[i];
                esol[i][1]=esol[i-1][1]+e[i];
                fsol[i][1]=fsol[i-1][1]+f[i];
        }
                    else {
                csol[i][0]=csol[i-1][0];
                esol[i][1]=esol[i-1][1];
                fsol[i][1]=fsol[i-1][1];}

        if(a[j]=='e'){

                csol[i][1]=csol[i-1][1]+c[i];
                hsol[i][1]=hsol[i-1][1]+h[i];
                fsol[i][2]=fsol[i-1][2]+f[i];
        }
        else {
                 csol[i][1]=csol[i-1][1];
                hsol[i][1]=hsol[i-1][1];
                fsol[i][2]=fsol[i-1][2];}

    if(a[j]=='f'){

                 csol[i][2]=csol[i-1][2]+c[i];
                hsol[i][2]=hsol[i-1][2]+h[i];
                esol[i][2]=esol[i-1][2]+e[i];
        }
                else {
                csol[i][2]=csol[i-1][2];
                hsol[i][2]=hsol[i-1][2];
                esol[i][2]=esol[i-1][2];}
    }
    printf("c:");
for(j=0;a[j]!='\0';j++)printf("%d ",c[j+1]);printf("\n");
    printf("h:");
for(j=0;a[j]!='\0';j++)printf("%d ",h[j+1]);printf("\n");
printf("e:");
for(j=0;a[j]!='\0';j++)printf("%d ",e[j+1]);printf("\n");
printf("f:");
for(j=0;a[j]!='\0';j++)printf("%d ",f[j+1]);printf("\n");
printf("ch:");
for(j=0;a[j]!='\0';j++)printf("%d ",csol[j+1][0]);printf("\n");
printf("ce:");
for(j=0;a[j]!='\0';j++)printf("%d ",csol[j+1][1]);printf("\n");
printf("cf:");
for(j=0;a[j]!='\0';j++)printf("%d ",csol[j+1][2]);printf("\n");
printf("hc:");
for(j=0;a[j]!='\0';j++)printf("%d ",hsol[j+1][0]);printf("\n");
printf("he:");
for(j=0;a[j]!='\0';j++)printf("%d ",hsol[j+1][1]);printf("\n");
printf("hf:");

for(j=0;a[j]!='\0';j++)printf("%d ",hsol[j+1][2]);printf("\n");
printf("ec:");

for(j=0;a[j]!='\0';j++)printf("%d ",esol[j+1][0]);printf("\n");
printf("eh:");

for(j=0;a[j]!='\0';j++)printf("%d ",esol[j+1][1]);printf("\n");
printf("ef:");

for(j=0;a[j]!='\0';j++)printf("%d ",esol[j+1][2]);printf("\n");
printf("fc:");

for(j=0;a[j]!='\0';j++)printf("%d ",fsol[j+1][0]);printf("\n");
printf("fh:");

for(j=0;a[j]!='\0';j++)printf("%d ",fsol[j+1][1]);printf("\n");
printf("fe:");

for(j=0;a[j]!='\0';j++)printf("%d ",fsol[j+1][2]);printf("\n");



    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%s %s %d %d",&ch1,&ch2,&l,&r);
        if(ch1[0]=='c'){
             if(ch2[0]=='h'){
                printf("%lld\n",csol[r][0]-csol[l-1][0]-c[l-1]*(h[r]-h[l-1]));
             }
             if(ch2[0]=='e'){
                printf("%lld\n",csol[r][1]-csol[l-1][1]-c[l-1]*(e[r]-e[l-1]));
             }
             if(ch2[0]=='f'){
                printf("%lld\n",csol[r][2]-csol[l-1][2]-c[l-1]*(f[r]-f[l-1]));
             }
        }
        if(ch1[0]=='h'){
             if(ch2[0]=='c'){
                printf("%lld\n",hsol[r][0]-hsol[l-1][0]-h[l-1]*(c[r]-c[l-1]));
             }
             if(ch2[0]=='e'){
                printf("%lld\n",hsol[r][1]-hsol[l-1][1]-h[l-1]*(e[r]-e[l-1]));
             }
             if(ch2[0]=='f'){
                printf("%lld\n",hsol[r][2]-hsol[l-1][2]-h[l-1]*(f[r]-f[l-1]));
             }
        }
        if(ch1[0]=='e'){
             if(ch2[0]=='c'){
                printf("%lld\n",esol[r][0]-esol[l-1][0]-e[l-1]*(c[r]-c[l-1]));
             }
             if(ch2[0]=='h'){
                printf("%lld\n",esol[r][1]-esol[l-1][1]-e[l-1]*(h[r]-h[l-1]));
             }
             if(ch2[0]=='f'){
                printf("%lld\n",esol[r][2]-esol[l-1][2]-e[l-1]*(f[r]-f[l-1]));
             }

        }
        if(ch1[0]=='f'){
             if(ch2[0]=='c'){
                printf("%lld\n",fsol[r][0]-fsol[l-1][0]-f[l-1]*(c[r]-c[l-1]));
             }
             if(ch2[0]=='h'){
                printf("%lld\n",fsol[r][1]-fsol[l-1][1]-f[l-1]*(h[r]-h[l-1]));
             }
             if(ch2[0]=='e'){
                printf("%lld\n",fsol[r][2]-fsol[l-1][2]-f[l-1]*(e[r]-e[l-1]));
             }

        }

    }

}
