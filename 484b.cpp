#include <iostream>
#include <algorithm>
using namespace std;

int arr[200008];
int main()
{
	int n,i,j,k,l;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
    sort(arr,arr+n);
    int range=arr[n-1];
    int sol=0;
	for(i=0;i<n;i++)
	{
		if(i&&arr[i]==arr[i-1])
			continue;
        int low=arr[i];
        range=arr[n-1]/arr[i];
        range=arr[i]*(range+1);

        while(low<=range)
        {   low+=arr[i];
        	sol=max(sol,(arr[lower_bound(arr,arr+n,low)-arr-1])%arr[i]);
        	
        }
	}
	cout<<sol<<endl;


}