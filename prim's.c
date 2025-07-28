#include<stdio.h>
int visited[10]={0}, cost[10][10], min, mincost=0;

void prims(int num)
{
	int i, j, ne=1, a, b, u, v;
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			if(cost[i][j]==0)
			cost[i][j]=999;
		}
	}
	visited[1]=1;
	while(ne < num)
	{
		for(i=1,min=999;i<=num;i++)
		for(j=1;j<=num;j++)
		if(cost[i][j]< min)
		if(visited[i]!=0)
		{
			min=cost[i][j];
			a=i;
			b=j;
		}
		printf("\n Edge %d:(%d - %d) cost:%d",ne++,a,b,min);
		mincost=mincost+min;
		visited[b]=1;
		cost[a][b]=cost[b][a]=999;
	}
	printf("\n\n\n Minimun cost=%d",mincost);
}
int main()
{
	int num,i,j;
	printf("\n\t\t\tPrim's Algorithm");
	printf("\n\nEnter the number of nodes= ");
	scanf("%d", &num);
	printf("\nEnter the cost of each edge:\n\n");
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			printf("value of cost[%d][%d] : ",i,j);
			scanf("%d", &cost[i][j]);
		}
	}
		printf("\nThe cost of adjacency matrix\n\n");
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			printf("%d", cost[i][j]);
			printf("\t");
		}
		printf("\n");
	}

	prims(num);
	return 0;
}
