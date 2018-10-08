#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>

int main()
{
	char ch, out[999][100];
	int tes;
	int i,j,k,l;

	scanf("%d%*c",&tes);
	for(i=1; i<=tes; i++)
	{
		j=k=0;

		while(ch= getchar())
			{
				in:
				if(ch>='0' && ch<='9')
				{
					if(ch=='0')
						out[k][j++]='O';
					else if(ch=='1')
						out[k][j++]='I';
					else if(ch=='2')
						out[k][j++]='Z';
					else if(ch=='3')
						out[k][j++]='E';
					else if(ch=='4')
						out[k][j++]='A';
					else if(ch=='5')
						out[k][j++]='S';
					else if(ch=='6')
						out[k][j++]='G';
					else if(ch=='7')
						out[k][j++]='T';
					else if(ch=='8')
						out[k][j++]='B';
					else if(ch=='9')
						out[k][j++]='P';
				}
				else
				{
					out[k][j++]=ch;
				}
				if(ch=='\n')
				{
					out[k][--j]=NULL;
					break;
				}
					

			}
			k++;
			if(i<tes)
			ch=getchar();
			else
			{
				goto pr;
			}
			if(ch!='\n')
			{
				j=0;
				goto in;
			}
			else
			{
				pr:
				for(l=0; l<k; l++)
					puts(out[l]);
				if(i<tes)
					printf("\n");
			}
		
	}

	return 0;
}