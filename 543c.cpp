#include<stdio.h>
#include<math.h>
int main()
{
 int t,k,l;
 scanf("%d",&t);
 while(t)
 { int q=0,w=0,j,i,p=0,n,a[35],b[35];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       scanf("%d",&b[i]);
   }
   k=a[0];
   l=b[0];
   for(i=1;i<n;i++)
     {for(j=1;i<n;i++)
            {
               if(a[j]>k)
                   {k=a[j];
                    q=j;
                   }
               if(b[j]>l)
                   {l=b[j];
                    w=j;
                   }

            }
       if(l>=k)
       {p++;
       a[q]=0;
       b[w]=0;


       }}
       printf("%d",p);


     t--;
 }
 return(0);
}
