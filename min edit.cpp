#include<stdio.h>
#include<algorithm>
#include<string.h>
int LevenshteinDistance(char s[2009], int len_s, char t[2009], int len_t)
{int cost;
  if (len_s == 0) return len_t;
  if (len_t == 0) return len_s;


  if (s[len_s-1] == t[len_t-1])
      cost = 0;
  else
      cost = 1;
   return std::min(std::min(LevenshteinDistance(s, len_s - 1, t, len_t    ) + 1,
                 LevenshteinDistance(s, len_s    , t, len_t - 1) + 1),
                 LevenshteinDistance(s, len_s - 1, t, len_t - 1) + cost);
}
int main()
{int t=10,l,d;char a[2009],b[2009];long long u;
scanf("%d",&t);
while(t){scanf("%s %s",&a,&b);l=strlen(a);d=strlen(b);
u=LevenshteinDistance(a,l,b,d);
printf("%lld\n",u);
t--;}}
