#include <stdio.h>
void second_fun()
{
	int i,j=0,n,a[100];
	for(i=1;i<=100;i++)
		if(((i%7==0)&&(i%11!=0))||((i%7!=0)&&(i%11==0))) a[j++]=i;
	printf("1到100之内能被7或者11整除，但不能同时被7和11整除的所有整数有%d个.\n",n=j+1);
	printf("它们分别是:");
	for(i=0;a[i]!=0;i++) printf("%d ",a[i]);
	printf("\n");
	wait();
}
void second_question() {second_fun();}
