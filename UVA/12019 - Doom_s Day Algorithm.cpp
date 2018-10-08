#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cctype>
#include <stack>
#include <queue>
#include <deque>
#include <map>

#define pf printf
#define sf scanf

using namespace std;

int jan[6][7],feb[6][7],mar[6][7],apr[6][7],may[6][7],jun[6][7],jul[6][7],aug[6][7],sep[6][7],octo[6][7],novm[6][7],decm[6][7];

int main()
{
	int tes,d,m;
	int i,j,k;
	bool find;

	for(i=0; i<6; i++)
		for(j=0; j<7; j++)
		{
			if((j>=6 && i==0) || (i>0))
				jan[i][j]=jan[i][j-1]+1;
			if((j>=2 && i==0) || (i>0))
				feb[i][j]=feb[i][j-1]+1;
			if((j>=2 && i==0) || (i>0))
				mar[i][j]=mar[i][j-1]+1;
			if((j>=5 && i==0) || (i>0))
				apr[i][j]=apr[i][j-1]+1;
			if((j>=0 && i==0) || (i>0))
				may[i][j]=may[i][j-1]+1;
			if((j>=3 && i==0) || (i>0))
				jun[i][j]=jun[i][j-1]+1;
			if((j>=5 && i==0) || (i>0))
				jul[i][j]=jul[i][j-1]+1;
			if((j>=1 && i==0) || (i>0))
				aug[i][j]=aug[i][j-1]+1;
			if((j>=4 && i==0) || (i>0))
				sep[i][j]=sep[i][j-1]+1;
			if((j>=6 && i==0) || (i>0))
				octo[i][j]=octo[i][j-1]+1;
			if((j>=2 && i==0) || (i>0))
				novm[i][j]=novm[i][j-1]+1;
			if((j>=4 && i==0) || (i>0))
				decm[i][j]=decm[i][j-1]+1;
		}

	sf("%d",&tes);
	for(i=1; i<=tes; i++)
	{
		find=false;
		sf("%d%d",&m,&d);
		for(j=0; j<6; j++){
			for(k=0; k<7; k++)
			{
				if(m==1){
					if(jan[j][k]==d){
						find=true;break;}}
				else if(m==2){
					if(feb[j][k]==d){
						find=true;break;}}
				else if(m==3){
					if(mar[j][k]==d){
						find=true;break;}}
				else if(m==4){
					if(apr[j][k]==d){
						find=true;break;}}
				else if(m==5){
					if(may[j][k]==d){
						find=true;break;}}
				else if(m==6){
					if(jun[j][k]==d){
						find=true;break;}}
				else if(m==7){
					if(jul[j][k]==d){
						find=true;break;}}
				else if(m==8){
					if(aug[j][k]==d){
						find=true;break;}}
				else if(m==9){
					if(sep[j][k]==d){
						find=true;break;}}
				else if(m==10){
					if(octo[j][k]==d){
						find=true;break;}}
				else if(m==11){
					if(novm[j][k]==d){
						find=true;break;}}
				else if(m==12){
					if(decm[j][k]==d){
						find=true;break;}}
			}
			if(find==true)
				break;
	}
			if(k==0)
				pf("Sunday\n");
			else if(k==1)
				pf("Monday\n");
			else if(k==2)
				pf("Tuesday\n");
			else if(k==3)
				pf("Wednesday\n");
			else if(k==4)
				pf("Thursday\n");
			else if(k==5)
				pf("Friday\n");
			else if(k==6)
				pf("Saturday\n");
	}

	return 0;
}