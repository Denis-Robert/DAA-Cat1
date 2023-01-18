// For the given testcase, Prim's works because the 1st iteration is the optimal one and hence it stops there before running into problems
int g[5][5]={{0,4,2,0,0},{0,0,3,2,3},{0,1,0,4,5},{0,0,0,0,0},{0,0,0,-5,0}};
#include<stdio.h>
int mincost(int edgevalue[],int visit[])
{
	int k;
	int edhukku=100000;
	for(int i=1;i<5;i++)
	{
		if(visit[i]==0)
		{
			if(edhukku>edgevalue[i])
			{
				edhukku=edgevalue[i];
				k=i;
			}
		}
	}
	return k+1;
}

int main()
{
	int edgevalue[5],visit[5],munnadi[5];
	for(int i=0;i<5;i++)
	{
		visit[i]=0;
		edgevalue[i]=1000;
		munnadi[i]=0;
	}
	edgevalue[0]=0; munnadi[0]=0; visit[0]=1;
	loop:
	for(int i=0;i<5;i++)
	{
		if(g[0][i]<0)
			{g[0][i]==100-(g[0][i]);}
		if(g[0][i]>0 && g[0][i]<edgevalue[i] && visit[i]==0)
		{
			edgevalue[i]=g[0][i];
			munnadi[i]=s;
		}
	}
	s=mincost(edgevalue,visit);
	visit[s-1]=1;
	for(int i=0;i<5;i++)
	{
		if(visit[i]==0)
			{goto loop;}
	}
	printf("vertex\t\tbefore vertex\t\t edgecost");
	for(int i=0;i<5;i++)
		{printf("\5%d\t\t %d\t\t\t %d",i+1,munnadi[i],edgevalue[i]);}
}
