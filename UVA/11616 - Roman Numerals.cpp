#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <string>
#include <cstdlib>
#include <stack>
#include <queue>
#include <deque>
#include <map>

#define pf printf
#define sf scanf
#define vlong long long
#define elf else if

using namespace std;

int main()
{
	vlong res,n,m;
	vlong i,j,k;
	bool alpha;
	char arr[1000000];

	while(gets(arr)!=NULL)
	{
		res=0;
		alpha=false;
		for(i=0; arr[i]!=NULL; i++){
			if(isalpha(arr[i]))
			{
				alpha=true;
				if(arr[i]=='M')
					res+=1000;
				elf(arr[i]=='D')
					res+=500;
				elf(arr[i]=='C' && (arr[i+1]!='D' && arr[i+1]!='M'))
					res+=100;
				elf(arr[i]=='C' && arr[i+1]=='D'){
					res+=400;i++;}
				elf(arr[i]=='C' && arr[i+1]=='M'){
					res+=900;i++;}
				elf(arr[i]=='L')
					res+=50;
				elf(arr[i]=='X' && (arr[i+1]!='C' && arr[i+1]!='L'))
					res+=10;
				elf(arr[i]=='X' && arr[i+1]=='C'){
					res+=90;i++;}
				elf(arr[i]=='X' && arr[i+1]=='L'){
					res+=40;i++;}
				elf(arr[i]=='V')
					res+=5;
				elf(arr[i]=='I' && arr[i+1]=='V' ){
					res+=4;i++;}
				elf(arr[i]=='I' && (arr[i+1]!='V' && arr[i+1]!='X'))
					res+=1;
				elf(arr[i]=='I' && arr[i+1]=='X'){
					res+=9;i++;}
			}
			else
			{
				alpha=false;
				break;
			}
			
		}
		n=0;
		if(alpha==false){
		for(i=0; arr[i]!=NULL; i++)
		{
			n=n*10+arr[i]-'0';
		}
		j=0;
		 m=n;
		while(n>0)
		{
			if(n>=1000)
			{
				k=n/1000;
				n-=k*1000;
				for(i=1; i<=k; i++)
					arr[j++]='M';
				arr[j]=NULL;
			}
			elf(n>=900)
			{
				arr[j++]='C';
				arr[j++]='M';
				arr[j]=NULL;
				n-=900;
			}
			elf(n>=500)
			{
				arr[j++]='D';
				arr[j]=NULL;
				n-=500;
			}
			elf(n>=400)
			{
				arr[j++]='C';
				arr[j++]='D';
				arr[j]=NULL;
				n-=400;
			}
			elf(n>=100)
			{
				
				k=n/100;
				for(i=1; i<=k; i++)
					arr[j++]='C';
				arr[j]=NULL;
				n-=k*100;
			}
			elf(n>=90)
			{
				arr[j++]='X';
				arr[j++]='C';
				arr[j]=NULL;
				n-=90;
			}
			elf(n>=50)
			{
				arr[j++]='L';
				arr[j]=NULL;
				n-=50;
			}
			elf(n>=40)
			{
				arr[j++]='X';
				arr[j++]='L';
				arr[j]=NULL;
				n-=40;
			}
			elf(n>=10)
			{
				
				k=n/10;
				for(i=1; i<=k; i++)
					arr[j++]='X';
				arr[j]=NULL;
				n-=k*10;
			}
			elf(n>=9)
			{
				arr[j++]='I';
				arr[j++]='X';
				arr[j]=NULL;
				n-=9;

			}
			elf(n>=5)
			{
				arr[j++]='V';
				arr[j]=NULL;
				n-=5;
			}
			elf(n>=4)
			{
				arr[j++]='I';
				arr[j++]='V';
				arr[j]=NULL;
				n-=4;
			}
			elf(n>=1)
			{
				k=n/1;
				for(i=1; i<=k; i++)
					arr[j++]='I';
				arr[j]=NULL;
				n-=k*1;
			}
		}
		}
		if(alpha==true)
			pf("%d\n",res);
		else
		{
			if(m<=0 ||m>=4000)
				pf("\n");
			else
			puts(arr);
		}
	}

	return 0;
}