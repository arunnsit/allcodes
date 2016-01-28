#include<stdio.h>
#define gc getchar_unlocked
inline void fastRead_int(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main(){
	int t,n,tmp,i;
fastRead_int(t);
	while(t--){
		fastRead_int(n);
		int a[2000009]={0},ma=0,sol=0;
		while(n--){
			fastRead_int(tmp);
			for(i=1;i*i<tmp;i++){
				if(tmp==(tmp/i)*i){
				a[i]++;
				a[tmp/i]++;
				if(a[i]>=2&&ma<i){
					ma=i;
				}
				if(a[tmp/i]>=2&&ma<tmp/i){
					ma=tmp/i;
				}

			}
			}
			if(i*i==tmp){
				a[i]++;
				if(a[i]>=2&&ma<i){
					ma=i;
				}

		}

	}
	printf("%d\n",ma);
}}