#include <stdio.h>
void fifth_fun(int m,int k,int xx[])
{
	int i,j,p,q;
	for(i=0;i<k;i++) xx[i]=0;
	for(i=0;i<k;i++)
	{
		for(j=m+1;;j++)
		{
			for(p=2,q=0;p<j;p++)
			{
				if(j%p==0) break;
				else q++;
			}
			if(q==j-2) 
			{
				m=j;
				break;
			}
		}
		xx[i]=j;
	}
}
void fifth_question()
{
	int i,m,k;
	printf("请输入m:");
	scanf("%d",&m);
	printf("请输入k:");
	scanf("%d",&k);
	int xx[k];
	fifth_fun(m,k,xx);
	for(i=0;i<k;i++) printf("靠近%d的第%d位素数是:%d\n",m,i+1,xx[i]);
	wait();
}
