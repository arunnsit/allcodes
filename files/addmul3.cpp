//alpha coder ! segment trees !
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
#include<math.h>
 
int mod=1000000007;
 
struct node{
    long long int sum;
    long long int lazymul;
    long long int lazyadd;
    long long int lazyeq;
};
 
node tree[5000000];
 
node mergenode(node a,node b){
    node c;
    c.sum=(a.sum+b.sum)%mod;
    return c;
}
node null(int x){
    node c;
    c.sum=0;
    c.lazyeq=-1;
    c.lazymul=-1;
    c.lazyadd=0;
    return c;
}
void flushdown(long long int curr,long long int low ,long long int high){
    //printf("flushdowncall\nlow:%lld high:%lld eq:%lld add:%lld mul:%lld sum:%lld\n",low,high,tree[curr].lazyeq,tree[curr].lazyadd,tree[curr].lazymul,tree[curr].sum);
    
    if(tree[curr].lazyeq!=-1){
        tree[curr].sum=(high-low+1)*tree[curr].lazyeq;
        tree[2*curr+1].lazyeq=tree[curr].lazyeq;
        tree[2*curr+2].lazyeq=tree[curr].lazyeq;
        tree[curr].sum=tree[curr].sum%mod;
        tree[2*curr+1].lazyadd=0;
        tree[2*curr+1].lazymul=-1;
        tree[2*curr+2].lazyadd=0;
        tree[2*curr+2].lazymul=-1;
        //printf("yo1\n");
    }
    else if(tree[curr].lazyadd&&tree[curr].lazymul!=-1){
       // printf("yo2\n");
        tree[curr].sum=tree[curr].sum*tree[curr].lazymul+(high-low+1)*tree[curr].lazyadd;
        tree[curr].sum=tree[curr].sum%mod;
        if(tree[2*curr+1].lazyeq!=-1){
            tree[2*curr+1].lazyeq=tree[2*curr+1].lazyeq*tree[curr].lazymul+tree[curr].lazyadd;
            tree[2*curr+1].lazyeq%=mod;
        }
        else if(tree[2*curr+1].lazyadd&&tree[2*curr+1].lazymul!=-1){
            tree[2*curr+1].lazyadd=tree[2*curr+1].lazyadd*tree[curr].lazymul+tree[curr].lazyadd;
            tree[2*curr+1].lazymul=tree[2*curr+1].lazymul*tree[curr].lazymul;
            tree[2*curr+1].lazyadd%=mod;
            tree[2*curr+1].lazymul%=mod;
 
        }
        else if(tree[2*curr+1].lazyadd){
            tree[2*curr+1].lazyadd=tree[2*curr+1].lazyadd*tree[curr].lazymul+tree[curr].lazyadd;
            tree[2*curr+1].lazymul=tree[curr].lazymul;
            tree[2*curr+1].lazyadd%=mod;
            tree[2*curr+1].lazymul%=mod;
 
        }
        else if(tree[2*curr+1].lazymul!=-1){
            tree[2*curr+1].lazymul=tree[2*curr+1].lazymul*tree[curr].lazymul;
            tree[2*curr+1].lazyadd=tree[curr].lazyadd;
            tree[2*curr+1].lazymul%=mod;
            tree[2*curr+1].lazyadd%=mod;
        }
        else{
            tree[2*curr+1].lazyadd=tree[curr].lazyadd%mod;
            tree[2*curr+1].lazymul=tree[curr].lazymul%mod;
        }
        if(tree[2*curr+2].lazyeq!=-1){
            tree[2*curr+2].lazyeq=tree[2*curr+2].lazyeq*tree[curr].lazymul+tree[curr].lazyadd;
            tree[2*curr+2].lazyeq%=mod;
        }
        else if(tree[2*curr+2].lazyadd&&tree[2*curr+2].lazymul!=-1){
            tree[2*curr+2].lazyadd=tree[2*curr+2].lazyadd*tree[curr].lazymul+tree[curr].lazyadd;
            tree[2*curr+2].lazymul=tree[2*curr+2].lazymul*tree[curr].lazymul;
            tree[2*curr+2].lazymul%=mod;
            tree[2*curr+2].lazyadd%=mod;
        }
        else if(tree[2*curr+2].lazyadd!=-1){
            tree[2*curr+2].lazyadd=tree[2*curr+2].lazyadd*tree[curr].lazymul+tree[curr].lazyadd;
            tree[2*curr+2].lazymul=tree[curr].lazymul%mod;
        }
        else if(tree[2*curr+2].lazymul!=-1){
            tree[2*curr+2].lazymul=tree[2*curr+2].lazymul*tree[curr].lazymul;
            tree[2*curr+2].lazyadd=tree[curr].lazyadd;
            tree[2*curr+2].lazyadd%=mod;
        }
        else{
            tree[2*curr+2].lazyadd=tree[curr].lazyadd%mod;
            tree[2*curr+2].lazymul=tree[curr].lazymul%mod;
        }
    }
    else if(tree[curr].lazyadd){
        //printf("yo3\n");
        tree[curr].sum=tree[curr].sum+(high-low+1)*tree[curr].lazyadd;
        tree[curr].sum=tree[curr].sum%mod;
        if(tree[2*curr+1].lazyeq!=-1){
            tree[2*curr+1].lazyeq+=tree[curr].lazyadd;
            tree[2*curr+1].lazyeq%=mod;
        }
        else tree[2*curr+1].lazyadd=(tree[2*curr+1].lazyadd+tree[curr].lazyadd)%mod;
        if(tree[2*curr+2].lazyeq!=-1){
            tree[2*curr+2].lazyeq+=tree[curr].lazyadd;
            tree[2*curr+2].lazyeq%=mod;
        }
        else tree[2*curr+2].lazyadd=(tree[curr].lazyadd+tree[2*curr+2].lazyadd)%mod;
    }
    else if(tree[curr].lazymul!=-1){
       // printf("yo4\n");
        tree[curr].sum=tree[curr].sum*tree[curr].lazymul;
        tree[curr].sum=tree[curr].sum%mod;
        if(tree[2*curr+1].lazyeq!=-1){
            tree[2*curr+1].lazyeq*=tree[curr].lazymul;
            tree[2*curr+1].lazyeq%=mod;
        }
        else if(tree[2*curr+1].lazymul!=-1){
            tree[2*curr+1].lazyadd=tree[2*curr+1].lazyadd*tree[curr].lazymul;
            tree[2*curr+1].lazymul=tree[2*curr+1].lazymul*tree[curr].lazymul;
            tree[2*curr+1].lazyadd%=mod;
            tree[2*curr+1].lazymul%=mod;
        }
        else{
            tree[2*curr+1].lazyadd=tree[2*curr+1].lazyadd*tree[curr].lazymul;
            tree[2*curr+1].lazymul+=tree[curr].lazymul;
            tree[2*curr+1].lazyadd%=mod;
            tree[2*curr+1].lazymul%=mod;
        }
        if(tree[2*curr+2].lazyeq!=-1){
            tree[2*curr+2].lazyeq*=tree[curr].lazymul;
            tree[2*curr+2].lazyeq%=mod;
        }
        else if(tree[2*curr+2].lazymul!=-1){
            tree[2*curr+2].lazyadd=tree[2*curr+2].lazyadd*tree[curr].lazymul;
            tree[2*curr+2].lazymul=tree[2*curr+2].lazymul*tree[curr].lazymul;
            tree[2*curr+2].lazyadd%=mod;
            tree[2*curr+2].lazymul%=mod;
        }
        else{
            tree[2*curr+2].lazyadd=tree[2*curr+2].lazyadd*tree[curr].lazymul;
            tree[2*curr+2].lazymul=tree[curr].lazymul;
            tree[2*curr+2].lazyadd%=mod;
            tree[2*curr+2].lazymul%=mod;
        }
 
    }
    tree[curr].lazyeq=-1;
    tree[curr].lazyadd=0;
    tree[curr].lazymul=-1;
    tree[curr].sum=tree[curr].sum%mod;
}
 
node constructor( long long int  arr[], long long int  low, long long int  high, long long int  curr){
    if(low==high){
        tree[curr].sum=arr[low];
        tree[curr].lazymul=-1;
        tree[curr].lazyadd=0;
        tree[curr].lazyeq=-1;
        return tree[curr];
    }
     long long int  mid=low+(high-low)/2;
    tree[curr]=mergenode(constructor(arr,low,mid,2*curr+1),constructor(arr,mid+1,high,2*curr+2));
     tree[curr].lazymul=-1;
        tree[curr].lazyadd=0;
        tree[curr].lazyeq=-1;
    return tree[curr];
}
 
void createtree( long long int  arr[], long long int  n)
{
 constructor(arr,0,n-1,0);
}
 
node queryadd( long long int  curr, long long int  left, long long int  right, long long int  low, long long int  high, long long int  add){
    flushdown(curr,low,high);
    if(left<=low&&right>=high){
        tree[curr].lazyadd=add;
        flushdown(curr,low,high);
        tree[curr].sum=tree[curr].sum%mod;
        //printf("left:%lld right:%lld sum:%lld\n",low,high,tree[curr].sum);
 
        return tree[curr];
    }
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null(0);return temp;}
    long long int  mid=low+(high-low)/2;
    queryadd(2*curr+1,left,right,low,mid,add);
    flushdown(2*curr+1,low,mid);
    queryadd(2*curr+2,left,right,mid+1,high,add);
    flushdown(2*curr+2,mid+1,high);
    tree[curr].sum=(tree[2*curr+1].sum+tree[2*curr+2].sum)%mod;
    //printf("left:%lld right:%lld sum:%lld\n",low,high,tree[curr].sum);
    return tree[curr];
}
node querymul( long long int  curr, long long int  left, long long int  right, long long int  low, long long int  high, long long int  mul){
    flushdown(curr,low,high);
    if(left<=low&&right>=high){
        tree[curr].lazymul=mul;
        //printf("multiplti%lld\n",tree[curr].lazymul);
        flushdown(curr,low,high);
        tree[
            curr].sum=tree[curr].sum%mod;
            //printf("cleft:%lld right:%lld sum:%lld\n",low,high,tree[curr].sum);
 
        return tree[curr];
    }
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null(0);return temp;}
    long long int  mid=low+(high-low)/2;
    querymul(2*curr+1,left,right,low,mid,mul);
    flushdown(2*curr+1,low,mid);
    querymul(2*curr+2,left,right,mid+1,high,mul);
    flushdown(2*curr+2,mid+1,high);
    tree[curr].sum=(tree[2*curr+1].sum+tree[2*curr+2].sum)%mod;
    //printf("left:%lld right:%lld sum:%lld\n",low,high,tree[curr].sum);
    return tree[curr];
}
node queryeq( long long int  curr, long long int  left, long long int  right, long long int  low, long long int  high, long long int  eq){
    flushdown(curr,low,high);
    if(left<=low&&right>=high){
        tree[curr].lazyeq=eq;
        flushdown(curr,low,high);
        tree[curr].sum=tree[curr].sum%mod;
        return tree[curr];
    }
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null(0);return temp;}
    long long int  mid=low+(high-low)/2;
    queryeq(2*curr+1,left,right,low,mid,eq);
        flushdown(2*curr+1,low,mid);
 
    queryeq(2*curr+2,left,right,mid+1,high,eq);
        flushdown(2*curr+2,mid+1,high);
 
    tree[curr].sum=(tree[2*curr+1].sum+tree[2*curr+2].sum)%mod;
    //printf("left:%d right:%d sum:%d\n",low,high,tree[curr].sum);
    return tree[curr];
}
node solution( long long int  curr, long long int  left, long long int  right, long long int  low, long long int  high){
    //pr long long int f("low:%d high:%d add:%d\n",low,high,add);
    flushdown(curr,low,high);
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null(0);return temp;}
    if(left<=low&&right>=high){return tree[curr];}
    // pr long long int f("low:%d high:%d sum:%d\n",low,high,b.sum);
    long long int  mid=low+(high-low)/2;
    node result=mergenode(solution(2*curr+1,left,right,low,mid),solution(2*curr+2,left,right,mid+1,high));
    return result;
}
 
int main(){
    long long int a[100005]={0},n=8,i,j,q,type,x,y,v;
    scanf("%lld %lld",&n,&q);
    for(i=0;i<n;i++)scanf("%lld",&a[i]);
    createtree(a,n);
    while(q--){
scanf("%lld",&type);
if(type==1){
    scanf("%lld %lld %lld",&x,&y,&v);
    x--;
    y--;
    queryadd(0,x,y,0,n-1,v);
}
else if(type==2){
    scanf("%lld %lld %lld",&x,&y,&v);
    x--;
    y--;
    querymul(0,x,y,0,n-1,v);
}
else if(type==3){
    scanf("%lld %lld %lld",&x,&y,&v);
    x--;
    y--;
    queryeq(0,x,y,0,n-1,v);
}
else if(type==4){
    scanf("%lld %lld",&x,&y);
    x--;
    y--;
    printf("%lld\n",solution(0,x,y,0,n-1).sum);
}
}
}
 
 
 