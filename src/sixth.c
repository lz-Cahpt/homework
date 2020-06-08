#include <stdio.h>
void sixth_fun(char a[],char b[],int n)
{
	int i;
	for(i=0;i<n;i++) b[i]=a[i];
	for(i=n;a[i]!=NULL;i++) b[i]=a[i+1];
}
void sixth_question()
{
	char a[100]={NULL},b[100]={NULL};
	int n;
	printf("请输入字符串:");
	scanf("%s",a);
	printf("删除第几个字符:");
	scanf("%d",&n);
	sixth_fun(a,b,n-1);
	printf("删除指定字符后:%s\n",b);
	wait();
}
