#include <stdio.h>
float below(float score[],int n) {return score[n-1];}
int first_fun(float score[],int m,int i)
{
	int noob[m],j,k=0;
	float sum=0;
	for(j=0;j<m;j++) sum=sum+score[j];
	float average=sum/m;
	for(j=0;j<m;j++)
	  if(score[j]<average) noob[k++]=j+1;
	if(i<k) return noob[i];
	else return -1;
}
void first_question()
{
	int i,m;
	printf("有多少个人:");
	scanf("%d",&m);
	float score[m];
	for(i=0;i<m;i++)
	{
		printf("请输入第%d个人的成绩:",i+1);
		scanf("%f",&score[i]);
	}
	for(i=0;first_fun(score,m,i)!=-1;i++) printf("第%d个人的成绩低于平均分,他的成绩是%g\n",first_fun(score,m,i),below(score,first_fun(score,m,i)));
	wait();
}
