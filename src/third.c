#include <stdio.h>
void third_fun(int x,int pp[],int *n)
{
	int i=0,j;
	for(j=1;j<x;j=j+2)
	{
		if(x%j==0) 
		{
			pp[i]=j;
			i++;
		}
	}
	*n=i+1;
}		
void third_question()
{
	int i,x,n,pp[100]={NULL};
	printf("请输入x:");
	scanf("%d",&x);
	third_fun(x,pp,&n);
	printf("符合要求的数有:");
	for(i=0;pp[i]!=NULL;i++) printf("%d ",pp[i]);
	printf("\n");
	wait();
}
