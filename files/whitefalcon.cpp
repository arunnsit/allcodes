#include<stdio.h>
int a[3005][3005];
int main(){
int t,n,i,j,in[3005];
scanf("%d",&n);

for(i=0;i<n;i++)scanf("%d",&in[i]);
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		a[n-i-1][j]=in[i]*in[j];
	}

}
int x=0,y=0,max_so_far = 0;
for(i=0;i<n;i++){
	x=i;
	y=0;
	int  max_ending_here = 0;
	while(x+y<n){
         max_ending_here = max_ending_here + a[y][x];
         if(max_ending_here < 0)
            max_ending_here = 0;
         if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        x++;
        y++;
        }
	}
for(i=0;i<n;i++){
	x=i;
	y=0;
	int  max_ending_here = 0;
	while(x+y<n){
         max_ending_here = max_ending_here + a[x][y];
         if(max_ending_here < 0)
            max_ending_here = 0;
         if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        x++;
        y++;
        }
	}	


printf("%d\n",max_so_far);
}


