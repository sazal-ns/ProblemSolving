#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <deque>

using namespace std;

#define sf scanf
#define pf printf
#define eif else if

int main()
{
	int kas,n,m,len,rem,cunt;
	int i,j,k;
	char com[155][155];
	deque<int>stor;
	bool flag;

	sf("%d",&kas);
	for(i=1; i<=kas; i++){
		stor.clear();
		sf("%d%d%*c",&n,&m);
		for(j=0; j<m; j++){
			gets(com[j]);
		}
		pf("Case %d:\n",i);
		for(j=0; j<m; j++){
			len=strlen(com[j]);
			rem=0;
			flag=false;
			for(k=7; k<len ; k++)
			{
				if(isdigit(com[j][k])){
					rem=(rem*10)+(com[j][k]-'0');
				}
				if(com[j][k]=='-')
					flag=true;
			}
			if(flag==true)
				rem*=-1;
			if(strncmp(com[j],"pushLeft",8)==0){
				if(n!=0)
				{
					stor.push_front(rem);
					n--;
					pf("Pushed in left: %d\n",rem);
				}
				else
					puts("The queue is full");
				
			}
			eif(strncmp(com[j],"pushRight",9)==0)
			{
				if(n!=0)
				{
					stor.push_back(rem);
					n--;
					pf("Pushed in right: %d\n",rem);
				}
				else
					puts("The queue is full");
			}
			eif(strncmp(com[j],"popLeft",7)==0)
			{
				if(!stor.empty())
				{
					rem=stor.front();
					stor.pop_front();
					n++;
					pf("Popped from left: %d\n",rem);
				}
				else
					puts("The queue is empty");
			}
			eif(strncmp(com[j],"popRight",8)==0)
			{
				if(!stor.empty())
				{
					rem=stor.back();
					stor.pop_back();
					n++;
					pf("Popped from right: %d\n",rem);
				}
				else
					puts("The queue is empty");
			}
		}

	}

	return 0;
}