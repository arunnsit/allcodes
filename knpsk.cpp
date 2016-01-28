#include<iostream>
#include<algorithm>
using namespace std;
long long int one[300009],two[300009],sol[300009];
bool cmp(long long int a,long long int b){
	return a>b;
}
int main()
{
	int n,w,c,x=0,y=0,tmp,s=0,i;
	cin>>n;
	while(n--){
		cin>>tmp>>w;
		if(tmp==1)one[x++]=w;
		if(tmp==2)two[y++]=w;
		s+=tmp;
	}
	sort(one,one+x,cmp);
	sort(two,two+y,cmp);
    int a=-1,b=-1;
	for(i=2;i<=s;i+=2){
		if(a+1<x){
			if(b+1<y){
				if(a+1<x-1){
					if(one[a+1]+one[a+2]<two[b+1]){
						sol[i]=sol[i-2]+two[b+1];
						b++;
					}
					else{
						sol[i]=sol[i-2]+one[a+1]+one[a+2];
						a+=2;
					}
				}
				else{
					if(one[a+1]<two[b+1]){
						sol[i]=sol[i-2]+two[b+1];
						b++;
					}
					else{
						sol[i]=sol[i-2]+one[a+1];
						a+=1;
					}

				}
			}
		 else if(a+2<x){
		 	sol[i]=sol[i-2]+one[a+1]+one[a+2];
						a+=2;
		 }
		 else{
		 	sol[i]=sol[i-2]+one[a+1];
						a+=1;

		 }	
		}
	else if(b+1<y){
		sol[i]=sol[i-2]+two[b+1];
						b++;
	}	

		
	}
	a=0,b=-1;
	sol[1]=one[0];
for(i=3;i<=s;i+=2){
			if(a+1<x){
			if(b+1<y){
				if(a+1<x-1){
					if(one[a+1]+one[a+2]<two[b+1]){
						sol[i]=sol[i-2]+two[b+1];
						b++;
					}
					else{
						sol[i]=sol[i-2]+one[a+1]+one[a+2];
						a+=2;
					}
				}
				else{
					if(one[a+1]<two[b+1]){
						sol[i]=sol[i-2]+two[b+1];
						b++;
					}
					else{
						sol[i]=sol[i-2]+one[a+1];
						a+=1;
					}

				}
			}
		 else if(a+2<x){
		 	sol[i]=sol[i-2]+one[a+1]+one[a+2];
						a+=2;
		 }
		 else{
		 	sol[i]=sol[i-2]+one[a+1];
						a+=1;

		 }	
		}
	else if(b+1<y){
		sol[i]=sol[i-2]+two[b+1];
						b++;
	}	

			}
for(i=1;i<=s;i+=1)cout<<sol[i]<<" ";
cout<<"\n";

}