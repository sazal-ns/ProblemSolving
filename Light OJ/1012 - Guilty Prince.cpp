#include <cstdio>
#include <string>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <map>

using namespace std;

#define max 22
#define eps 1e-7
#define pf printf
#define sf scanf
#define pi 2*acos(0.0)
#define elf else if
#define ll long long
#define tes(z) for(ll x=1; x<=z; x++)
#define pause system("pause");

int ctrl[8]={0,1,0,-1,1,0,-1,0};
queue <int> que;
char grd[max][max];
int res;

void bfs(int n, int w)
{
	res=1;
	int	a,b;
	while (!que.empty())
	{
		a=que.front();
		que.pop();
		b=que.front();
		que.pop();
		for(int i=0; i<8; i+=2)
		{
			if((grd[a+ctrl[i]][b+ctrl[i+1]]!='#') && (b+ctrl[i+1]<w && b+ctrl[i+1]>=0) && (a+ctrl[i]<n && a+ctrl[i]>=0) && grd[a+ctrl[i]][b+ctrl[i+1]]!='D')
			{
				res++;
				que.push(a+ctrl[i]);
				que.push(b+ctrl[i+1]);
				grd[a+ctrl[i]][b+ctrl[i+1]]='D';
			}

		}
	}

}

int main()
{
	int kes,w,n;
	int i,j,k;
	bool flag;

	sf("%d",&kes);
	tes(kes)
	{
		sf("%d%d%*c",&w,&n);
		for(i=0; i<n; i++)
		{
			for(j=0; j<w; j++)
			{
				sf("%c",&grd[i][j]);
				if(grd[i][j]=='@')
				{
					que.push(i);
					que.push(j);
					grd[i][j]='D';
				}
			}
			sf("%*c");
		}
		
		bfs(n,w);

		printf("Case %lld: %d\n",x,res);

	}
	return 0;
}