#include <stdio.h>
char english[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void fourth_fun(char *tt,int pp[])
{
	int i,j;
	for(i=0;i<26;i++)
		for(j=0;j<100;j++)
			if(*(tt+j)==english[i]) pp[i]++;
}
void fourth_question()
{
	char str[1000]={0};
	int i,pp[26]={0};
	printf("请输入字符串:");
	scanf("%s",str);
	fourth_fun(str,pp);
	for(i=0;i<26;i++) printf("%c的个数为%d\n",english[i],pp[i]);
	wait();
}
