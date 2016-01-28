#include<stdio.h>
#include<string.h>
int ma[10001][2]={0},ye[100]={0};
int main()
{long long a,b,c;char p[1000],q[10]="BYE";int z,i,j,w,temp,ky;
ma[10][0]=1;ma[93][0]=2;ma[79][0]=3;ma[106][0]=4,ma[103][0]=5,ma[119][0]=6,ma[11][0]=7,ma[127][0]=8,ma[107][0]=9;ma[63][0]=0;
ma[1][0]=10;ma[2][0]=93;ma[3][0]=79;ma[4][0]=106,ma[5][0]=103,ma[6][0]=119,ma[7][0]=11,ma[8][0]=127,ma[9][0]=107;ma[0][0]=63;
ma[1][1]=2;ma[2][1]=2;ma[3][1]=2;ma[4][1]=3,ma[5][1]=3,ma[6][1]=3,ma[7][1]=2,ma[8][1]=3,ma[9][1]=3;ma[0][1]=2;
scanf("%s",&p);z=strcmp(q,p);
while(z)
{a=0;b=0;char r[1000];
for(i=2;p[i]!='+';i+=3)
{temp=0;
temp=(p[i-2]-48)*100+(p[i-1]-48)*10+p[i]-48;
a=a*10+ma[temp][0];
if(p[i+1]=='+'){break;}
}
i++;i=i+3;

for(i=i;p[i]!='=';i+=3)
{temp=0;
temp=(p[i-2]-48)*100+(p[i-1]-48)*10+p[i]-48;
b=b*10+ma[temp][0];if(p[i+1]=='='){break;}
}c=a+b;w=0;

while(c>0){ye[w]=c%10;c=c/10;w++;}w--;
for(i=0;p[i]!='\0';i++){r[i]=p[i];}
while(w>=0){if(ma[ye[w]][1]==2){r[i]='0';i++;r[i]=(ma[ye[w]][0]/10)+'0';i++;r[i]=ma[ye[w]][0]%10+'0';i++;}
if(ma[ye[w]][1]==3){r[i]=(ma[ye[w]][0]/100)+'0';i++;ky=ma[ye[w]][0]%100;r[i]=(ky/10)+'0';i++;r[i]=ma[ye[w]][0]%10+'0';i++;}w--;
}
for(j=0;j<i;j++){printf("%c",r[j]);}printf("\n");


scanf("%s",&p);z=strcmp(q,p);

}


}
