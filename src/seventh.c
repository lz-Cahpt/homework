#include <stdio.h>
void seventh_fun(int *s,int t,int *k)
{
	int i,j,x=0;
	for(i=0;i<t;i++)
	{
		for(j=0,x=0;j<t;j++)
		{
			if(*(s+i)>=*(s+j)) x++;
			else break;
		}
		if(x==t) 
		{
			*k=i;
			break;
		}
	}
}
void seventh_question()
{
	int o,p;
	printf("该数组中有几个数:");
	scanf("%d",&o);
	int q[o];
	for(p=0;p<o;p++)
	{
		 printf("请输入第%d个数:",p+1);
		 scanf("%d",&q[p]);
	}
	seventh_fun(q,o,&p);
	printf("该数组中最大元素是%d,其在数组中的下标为%d\n",q[p],p);
	wait();
}
