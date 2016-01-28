#include<bits/stdc++.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
using namespace std;
int trie[50000000][2],trie2[50000000][2];
//faster i/o taken fron some old online submission on codechef
class FastInput {
    public:
        FastInput() {
                        m_dataOffset = 0;
                        m_dataSize = 0;
                        m_v = 0x80000000;
                }
                uint32_t ReadNext() {
                        if (m_dataOffset == m_dataSize) {
                                int r = read(0, m_buffer, sizeof(m_buffer));
                                if (r <= 0) return m_v;
                                m_dataOffset = 0;
                                m_dataSize = 0;
                                int i = 0;
                                if (m_buffer[0] < '0') {
                                        if (m_v != 0x80000000) {
                                                m_data[m_dataSize++] = m_v;
                                                m_v = 0x80000000;
                                        }
                                        for (; (i < r) && (m_buffer[i] < '0'); ++i);
                                }
                                for (; i < r;) {
                                        if (m_buffer[i] >= '0') {
                                                m_v = m_v * 10 + m_buffer[i] - 48;
                                                ++i;
                                        } else {
                                                m_data[m_dataSize++] = m_v;
                                                m_v = 0x80000000;
                                                for (i = i + 1; (i < r) && (m_buffer[i] < '0'); ++i);
                                        }
                                }
                        }
                        return m_data[m_dataOffset++];
                }
        public:
                uint8_t m_buffer[32768];
                uint32_t m_data[16384];
                size_t m_dataOffset, m_dataSize;
                uint32_t m_v;
};
class FastOutput {
        public:
                FastOutput() {
                        m_dataOffset = 0;
                }
                ~FastOutput() {
                }
                void Flush() {
                        if (m_dataOffset) {
                                if (write(1, m_data, m_dataOffset));
                                m_dataOffset = 0;
                        }
                }
                void PrintUint(uint32_t v, char d) {
                        if (m_dataOffset + 11 > sizeof(m_data)) Flush();
                        if (v < 100000) {
                                if (v < 1000) {
                                        if (v < 10) {
                                                m_data[m_dataOffset + 0] = v + 48;
                                                m_dataOffset += 1;
                                        } else if (v < 100) {
                                                m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48; v /= 10;
                                                m_data[m_dataOffset + 0] = v + 48;
                                                m_dataOffset += 2;
                                        } else {
                                                m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48; v /= 10;
                                                m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48; v /= 10;
                                                m_data[m_dataOffset + 0] = v + 48;
                                                m_dataOffset += 3;
                                        }
                                } else {
                                        if (v < 10000) {
                                                m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 0] = v + 48;
 
                                                m_dataOffset += 4;
 
                                        } else {
 
                                                m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 0] = v + 48;
 
                                                m_dataOffset += 5;
 
                                        }
 
                                }
 
                        } else {
 
                                if (v < 100000000) {
 
                                        if (v < 1000000) {
 
                                                m_data[m_dataOffset + 5] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 0] = v + 48;
 
                                                m_dataOffset += 6;
 
                                        } else if (v < 10000000) {
 
                                                m_data[m_dataOffset + 6] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 5] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 0] = v + 48;
 
                                                m_dataOffset += 7;
 
                                        } else {
 
                                                m_data[m_dataOffset + 7] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 6] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 5] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 0] = v + 48;
 
                                                m_dataOffset += 8;
 
                                        }
 
                                } else {
 
                                        if (v < 1000000000) {
 
                                                m_data[m_dataOffset + 8] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 7] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 6] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 5] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 0] = v + 48;
 
                                                m_dataOffset += 9;
 
                                        } else {
 
                                                m_data[m_dataOffset + 9] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 8] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 7] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 6] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 5] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48; v /= 10;
 
                                                m_data[m_dataOffset + 0] = v + 48;
 
                                                m_dataOffset += 10;
 
                                        }
 
                                }
 
                        }
 
                        m_data[m_dataOffset++] = d;
 
                }
 
                void PrintChar(char d) {
 
                        if (m_dataOffset + 1 > sizeof(m_data)) Flush();
 
                        m_data[m_dataOffset++] = d;
 
                }
 
                void ReplaceChar(int offset, char d) {
 
                        m_data[m_dataOffset + offset] = d;
 
                }
 
 
 
        public:
 
                uint8_t m_data[32768];
 
                size_t m_dataOffset;
 
};
 
 
 
FastInput g_fi;
 
FastOutput g_fo;
 
 
int n=1,n2=1;
void insert(int x)
{
	int i,y,node=0;
	for(i=31;i>=0;i--)
	{ y=((x>>i)&1);
 
	   if(trie[node][y]==-1)
	   {
	   	trie[node][y]=n;
	   	trie[n][0]=trie[n][1]=-1;
	   	n++;
	   }
	   node=trie[node][y];
	}
}
void insert2(int x)
{
	int i,y,node=0;
	for(i=31;i>=0;i--)
	{ y=((x>>i)&1);
 
	   if(trie2[node][y]==-1)
	   {
	   	trie2[node][y]=n2;
	   	trie2[n2][0]=trie2[n2][1]=-1;
	   	n2++;
	   }
	   node=trie2[node][y];
	}
}
 
 int query( int x)
{
	 int  i,y,o=x,node=0;
	for(i=31;i>=0;i--)
	{
		y=(x>>i)&1;
		if(y==0)y=1;
		else y=0;
 
		if(trie[node][y]!=-1)
		{
			x=x|(1<<i);
			node=trie[node][y];
		}
		else
		{
			node=trie[node][(x>>i)&1];
            x&= ~(1 << i);
		}
		if(o>x)break;
	}
	return  x;
}
 int query2( int x)
{
	 int  i,y,o=x,node=0;
	for(i=31;i>=0;i--)
	{
		y=(x>>i)&1;
		if(y==0)y=1;
		else y=0;
 
		if(trie2[node][y]!=-1)
		{
			x=x|(1<<i);
			node=trie2[node][y];
		}
		else
		{
			node=trie2[node][(x>>i)&1];
            x&= ~(1 << i);
		}
		if(o>x)break;
	}
	return  x;
}
 
 
 int a[400009]={0},e[400009],b[400009]={0};
int main(){
    trie[0][0]=-1;
    trie[0][1]=-1;
    trie2[0][0]=-1;
    trie2[0][1]=-1;
	 int n,i,ma=0,x;
	n=g_fi.ReadNext();;
	a[0]=0;
	a[n+1]=0;
	insert(0);
	for(i=1;i<=n;i++)
	{	a[i]=g_fi.ReadNext();
		e[i]=a[i]^e[i-1];
		insert(e[i]);
		x=query(e[i]);
		ma=max(ma,x);
		b[i]=ma;
	}
	ma=0;
	int p=0;
	insert2(0);
	insert2(a[n]);
    ma=a[n];
 
	for(i=n-1;i>=0;i--)
	{	a[i]=a[i+1]^a[i];
	p=p>b[i]+ma?p:b[i]+ma;
	   insert2(a[i]);
		x=query2(a[i]);
		ma=max(ma,x);		
	}
 
 g_fo.PrintUint(p,'\n');
     g_fo.Flush();
 
 }
 