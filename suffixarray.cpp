#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAXN 100009
#define MAXLG 20

char A[MAXN];
int s[100009]={0};
struct entry
{
    int nr[2];
    int p;
} L[MAXN];

int P[MAXLG][MAXN];
int N,i;
int stp, cnt;

int cmp(struct entry a, struct entry b)
{
    return a.nr[0]==b.nr[0] ?(a.nr[1]<b.nr[1] ?1: 0): (a.nr[0]<b.nr[0] ?1: 0);
}

int main()
{
    gets(A);
    for(N=strlen(A), i = 0; i < N; i++)
        P[0][i] = A[i] - 'a';

    for(stp=1, cnt = 1; cnt < N; stp++, cnt *= 2)
    {
        for(i=0; i < N; i++)
        {
            L[i].nr[0]=P[stp- 1][i];
            L[i].nr[1]=i +cnt <N? P[stp -1][i+ cnt]:-1;
            L[i].p= i;
        }
        sort(L, L+N, cmp);
        for(i=0; i < N; i++)
            P[stp][L[i].p] =i> 0 && L[i].nr[0]==L[i-1].nr[0] && L[i].nr[1] == L[i- 1].nr[1] ? P[stp][L[i-1].p] : i;
    }
    int j;
    for(i=0;i<N;i++)
        {
         s[L[i].p+1]=i+1;
         printf("%d\n",L[i].p);
        }
    int q;
    scanf("%d",&q);
    int x,y;
    while(q--){
        scanf("%d %d",&x,&y);
        printf("%d\n",s[x+1]);
    }
    return 0;
}
