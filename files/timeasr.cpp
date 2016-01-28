#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
struct ti{
	int hr,min;
};
ti a[9000];
bool cmp(ti a,ti b)
{
	if(a.hr==b.hr)return a.min<b.min;
	else return a.hr<b.hr;
}
long double ab(long double a){
	return a>=0?a:-a;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int x,u=0,i,j;
		long double k,p,o=(long double)1/120;
		cin>>k;
		int h[70][70]={0};
        for(x=0;x<12;x++){
        	long double y[4],thi[12];
        	int y2[12];
        	y[0]=(long double)2*(k+30*x)/11;
        	y[1]=(long double)2*(30*x-k)/11;
        	y[2]=(long double)2*(360-k+30*x)/11;
        	y[3]=(long double)2*(30*x-360+k)/11;
           
            y2[0]=y[0];
            y2[1]=y[1];
            y2[2]=y[2];
            y2[3]=y[3];
            y2[4]=y[0]+1;
            y2[5]=y[1]+1;
            y2[6]=y[2]+1;
            y2[7]=y[3]+1;
            y2[8]=y[0]-1;
            y2[9]=y[1]-1;
            y2[10]=y[2]-1;
            y2[11]=y[3]-1;

            thi[0]=(long double)(11*y2[0]-60*x)/2;
            thi[1]=(long double)(-11*y2[1]+60*x)/2;
            thi[2]=(long double)(720-11*y2[2]+60*x)/2;
            thi[3]=(long double)(720+11*y2[3]-60*x)/2;
            thi[4]=(long double)(11*y2[4]-60*x)/2;
            thi[5]=(long double)(-11*y2[5]+60*x)/2;
            thi[6]=(long double)(720-11*y2[6]+60*x)/2;
            thi[7]=(long double)(720+11*y2[7]-60*x)/2;
            thi[8]=(long double)(11*y2[8]-60*x)/2;
            thi[9]=(long double)(-11*y2[9]+60*x)/2;
            thi[10]=(long double)(720-11*y2[10]+60*x)/2;
            thi[11]=(long double)(720+11*y2[11]-60*x)/2;
            //printf("%lf %lf %lf %lf\n %d %d %d %d\n",thi[0],thi[1],thi[2],thi[3],y2[0],y2[1],y2[2],y2[3]);
            for(j=0;j<12;j++)
            if(thi[j]>=-1&&thi[j]<=181&&ab(thi[j]-k)<o&&y2[j]>=0&&y2[j]<=59&&h[x][y2[j]]==0)
            {   
            	a[u].hr=x;
            	a[u].min=y2[j];
            	u++;
            	h[x][y2[j]]=1;
            }
        }
        //printf("u:%d \n",u);
        sort(a,a+u,cmp);
        for(i=0;i<u;i++){
        	if(ab(11*a[i].min-60*a[i].hr)/2-k<o||360-ab(11*a[i].min-60*a[i].hr)/2-k<o){
        	if(a[i].hr<10)
        	cout<<"0"<<a[i].hr;
            else cout<<a[i].hr;
            printf(":");
            if(a[i].min<10)
        	cout<<"0"<<a[i].min;
            else cout<<a[i].min;
printf("\n");
 
 
 }
}
	}
} 