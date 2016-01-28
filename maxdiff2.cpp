                #include<stdio.h>
                #include<algorithm>
                struct node{
                    int val;
                    int pos;
         
                };
                using namespace std;
                bool cmp(node a,node b){
                    return a.val<b.val;
                }
                int main(){
                    int n,a[100][100],i,j,x=0,y=0,ma=0,b,c,p;
                    node cp[100];
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                        for(j=0;j<n;j++)scanf("%d",&a[i][j]);
                    ma=0;
                    for(i=0;i<n;i++)
                        for(j=0;j<n;j++){
                            if(i!=j){
                                 for(p=0;p<n;p++){
                                   
                                    cp[p].val=a[j][p];
                                    cp[p].pos=p;
                                 }
                                 std::sort(cp,cp+n,cmp);
                                if(ma<=a[i][j]-cp[n-1].val&&a[i][j]!=0){
                                    ma=a[i][j]-cp[n-1].val;
                                    x=i;
                                    y=j;
         
                                } 
                             }
         
                            }        
         
                    a[x][y]=0;
                    printf("%d %d\n",x+1,y+1);
                    fflush(stdout);
                    scanf("%d %d",&b,&c);
                    a[b-1][c-1]=0;
                while(1){
                        ma=0;
                        i=c-1;
                        x=c-1;
                        y=-1;
                        int m,ko[30],pos[35][2];

                        node yp[100];
                        int k=0,tot=0;
                        for(j=0;j<n;j++){
                            if(i!=j){
                                tot=a[i][j];
                                k=j;
                                ko[0]=a[i][j];
                                pos[0][0]=i;
                                pos[0][1]=j;
                                a[i][j]=0;
                                 for(m=0;m<20;m++){
                                    int top=0,pop=0;
                                 for(p=0;p<n;p++){
                                   if(a[k][p]>top){
                                    top=a[k][p];
                                    pop=p;
                                   }
                                 }
                                 ko[m+1]=a[k][pop];
                                 pos[m+1][0]=k;
                                 pos[m+1][1]=pop;
                                 a[k][pop]=0;
                                 k=pop;
                                 if(m%2==0)tot-=top;
                                 else tot+=top;
                                 }
                                 for(m=1;m<=20;m++){
                                    a[pos[m][0]][pos[m][1]]=ko[m];

                                 }
                                 a[i][j]=ko[0];     
     
                                if(ma<tot&&a[i][j]!=0){
                                    ma=tot;
                                    x=i;
                                    y=j;
         
                                } 
                             }
         
                            }
                            if(y==-1){int uo=0;
                            for(j=0;j<n;j++){
                            for(p=0;p<n;p++)
                            if(p==n&&a[i][j]-a[j][p]>uo&&j!=p){
                                uo=a[i][j];
                                y=j;
                            }    
                            }
                        }
 
                        if(y==-1){int uo=0;
                            for(j=0;j<n;j++){if(uo<a[x][j]){y=j;uo=a[x][j];}}if(y==-1)break;}    
                    a[x][y]=0;
                    printf("%d %d\n",x+1,y+1);
                    for(j=0;j<n;j++)if(a[y][j]!=0)break;
                    fflush(stdout);
                    scanf("%d %d",&b,&c);
                                a[b-1][c-1]=0;
         
                 
                    }
                            
                 
                 
                }    