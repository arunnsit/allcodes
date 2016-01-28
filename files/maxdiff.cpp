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
                                            node yp[100];

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
                                for(p=0;p<n;p++){
                                   
                                    yp[p].val=a[cp[n-1].pos][p];
                                    yp[p].pos=p;
                                 }
                                  std::sort(yp,yp+n,cmp);
     
                                if(ma<=a[i][j]-cp[n-1].val+yp[n-1].val&&a[i][j]!=0){
                                    ma=a[i][j]-cp[n-1].val+yp[n-1].val;
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
                        int u;
                        int k=0;
                        for(j=0;j<n;j++){
                            if(i!=j){
                                u=a[i][j];

                                 for(p=0;p<n;p++){
                                   
                                    cp[p].val=a[j][p];
                                    cp[p].pos=p;
                                 }
                                 std::sort(cp,cp+n,cmp);

                                 for(p=0;p<n;p++){
                                   
                                    yp[p].val=a[cp[n-1].pos][p];
                                    yp[p].pos=p;
                                 }
                                  std::sort(yp,yp+n,cmp);
     
                                if(ma<=a[i][j]-cp[n-1].val+yp[n-1].val&&a[i][j]!=0){
                                    ma=a[i][j]-cp[n-1].val+yp[n-1].val;
                                    x=i;
                                    y=j;
         
                                } 
                             }
         
                            } 
                        if(y==-1){int uo=0;
                            for(j=0;j<n;j++){
                            for(p=0;p<n;p++)if(a[j][p])break;
                            if(p==n&&a[i][j]>uo){
                                uo=a[i][j];
                                y=j;
                            }    
                            }
                        }


                        if(y==-1){for(j=0;j<n;j++){
                            if(a[x][j]){y=j;break;}}if(y==-1)break;}         
                    a[x][y]=0;
                    printf("%d %d\n",x+1,y+1);
                    for(j=0;j<n;j++)if(a[y][j]!=0)break;
                    fflush(stdout);
                    scanf("%d %d",&b,&c);
                                a[b-1][c-1]=0;
         
                 
                    }
                            
                 
                 
                }    