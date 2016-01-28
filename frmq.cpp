#include<stdio.h>
#include<math.h>
int N;
int M[20][100009]={0};int A[100009]={0};

  int main(){
      int q,x,y,a,b,i,j,k,p,u,prev=1;long long int sum=0;
      scanf("%d",&N);
int lo[100009];lo[1]=0;
      for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        if(i+2==prev*2){
            prev=i+2;
            lo[i+2]=lo[i+1]+1;
        }
        else lo[i+2]=lo[i+1];
      }

      for (i = 0; i < N; i++)
          M[0][i] = A[i];
            for (j = 1; (1 << j) <= N; j++)
          for (i = 0; i + (1 << j) - 1 < N; i++)
             {if (M[j - 1][i] >=M[j-1][i + (1 << (j - 1))])
                  M[j][i] = M[j-1][i];
              else
                  M[j][i] = M[j-1][i + (1 << (j - 1))];
             }

      scanf("%d %d %d",&q,&x,&y);
      for(int i=0;i<q;i++){
        a=(x<y)?x:y;
        b=(x>y)?x:y;
        k=lo[b-a+1];
        p=1<<k;
        sum+=(M[k][a]>=M[k][b-p+1])?M[k][a]:M[k][b-p+1];
        x=x+7;
        y=y+11;
        while(x>=N-1)x-=N-1;
        while(y>=N)y-=N;
      }
printf("%lld\n",sum);
  }
