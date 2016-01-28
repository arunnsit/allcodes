#include<stdio.h>
long long count_split(int a[],int start,int mid,int end)
{
	int i,j,k,temp[200005];long long count;
	i=k=start;j=mid;count=0;
	 while ((i <= mid - 1) && (j <= end))
	  {
	    if (a[i] <= a[j])
	    {
	      temp[k++] = a[i++];
	    }
	    else
	    {
	      temp[k++] = a[j++];

	     count = count + (mid - i);
	    }
	  }
	  while (i <= mid - 1)
	    temp[k++] = a[i++];

	  while (j <= end)
	    temp[k++] = a[j++];
	  for (i=start; i <= end; i++)
	    a[i] = temp[i];
	return count;
}
long long count_ans(int a[],int start,int end)
{
	long long count;
	int mid=(start+end)/2;
	if(start>=end)
	return 0;
	count= count_ans(a,start,mid);
	count+= count_ans(a,mid+1,end);
	count+= count_split(a,start,mid+1,end);
	return count;
}
int create(int board[102][102],int n,int c,int p[100],int sol[2],int fil[102]){
    int i;
    if(c==n+1){
    //for(int i=1;i<=n;i++)printf("%d",p[i]);printf("\n");
    int temp[100]={0};
    for(int i=1;i<=n;i++)temp[i]=p[i];
    int u=count_ans(temp,1,n);
    if(u%2==0)sol[0]++;
    else sol[1]++;
    return 0;
    }
    for(i=1;i<=n;i++){
        if(fil[i]!=1&&board[c][i]){
            p[c]=i;
            fil[i]=1;
        create(board,n,c+1,p,sol,fil);
        fil[i]=0;
        }
    }

    return 0;

}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int board[102][102]={0},n,l,r,i,j,p[100]={0},sol[2]={0},fil[102]={0};
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d %d",&l,&r);
            for(j=l;j<=r;j++)board[i][j]=1;
        }
        create(board,n,1,p,sol,fil);
        if(sol[0]==sol[1])printf("Draw\n");
        else if(sol[0]>sol[1])printf("Alex\n");
        else printf("Fedor\n");
    }

}
