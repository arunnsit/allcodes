//alpha coder
#include <stdio.h>
#include<algorithm>
int n,c;
int pifier(int num,int input[])
{
    int cars=1,p=input[0];
    for (int i=1; i<n; i++)
    {
        if (input[i]-p>=num)
        {
            p=input[i];
            cars++;
            if (cars==c)
                return 1;
        }
    }
    return 0;
}
int bs(int input[])
{
    int ini=0,last=input[n-1],ma=-1;
    while (last>ini)
    {
        //cout<<last<<" "<<ini<<endl;
        int mid=(ini+last)/2;
        if (pifier(mid,input)==1)
        {
            //cout<<mid<<endl;
            if (mid>ma)
                ma=mid;
            ini=mid+1;
        }
        else
            last=mid;
    }
    return ma;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&n,&c);
        int input[n];
        for (int i=0; i<n; i++)
            scanf("%d",&input[i]);
        std::sort(input,input+n);
        //cout<<" dfsa \n";
        int k=bs(input);
        printf("%d\n",k);
    }
    return 0;
}
