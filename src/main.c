#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>
#include "noob.h"
void wait()
{
	printf("\n请按回车键继续......");
	while(getchar()!='\n');
	printf("\n");
	main();
}
void read_txt(char filename[])
{
	printf("\n");
	char word;
	FILE *fp=fopen(filename,"r");
	while((word=fgetc(fp))!=EOF) printf("%c",word);
	printf("\n");
	wait();
}
void input_C()
{
	int number;
	printf("请选择题目序号:");
	scanf("%d",&number);
	getchar();
	printf("\n");
	while(number==8)
	{
		printf("这个......好像不是作业呢,请重新输入:\n");
		input_C();
	}
	switch(number)
	{
		case 1:first_question();break;
		case 2:second_question();break;
		case 3:third_question();break;
		case 4:fourth_question();break;
		case 5:fifth_question();break;
		case 6:sixth_question();break;
		case 7:seventh_question();break;
		default:
		{
			printf("非法序号,请重新输入:\n");
			input_C();
		}
	}
}
void input_R()
{
	int number;
	printf("请选择题目序号:");
	scanf("%d",&number);
	getchar();
	printf("\n");
	switch(number)
	{
		case 1:read_txt("first.c");break;
		case 2:read_txt("second.c");break;
		case 3:read_txt("third.c");break;
		case 4:read_txt("fourth.c");break;
		case 5:read_txt("fifth.c");break;
		case 6:read_txt("sixth.c");break;
		case 7:read_txt("seventh.c");break;
		case 8:read_txt("main.c");break;
		default:
		{
			printf("非法序号,请重新输入:\n");
			input_R();
		}
	}
}
int main()
{
	printf("\n");
	printf("\t\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t\t┃                     C语言作业                     ┃\n");
	printf("\t\t┣━━━━━━━━━━━━┳━━━━━━━━━━━━┳━━━━━━━━━━━━┳━━━━━━━━━━━━┫\n");
	printf("\t\t┃  1,第一题  ┃  2,第二题  ┃  3,第三题  ┃  4,第四题  ┃\n");
	printf("\t\t┣━━━━━━━━━━━━╋━━━━━━━━━━━━╋━━━━━━━━━━━━╋━━━━━━━━━━━━┫\n");
	printf("\t\t┃  5,第五题  ┃  6,第六题  ┃  7,第七题  ┃  8,main.c  ┃\n");
	printf("\t\t┗━━━━━━━━━━━━┻━━━━━━━━━━━━┻━━━━━━━━━━━━┻━━━━━━━━━━━━┛\n");
	printf("\t\t   C检查作业    R读源代码    E退出程序	  Q查看声明  \n");
	printf("\n");
	printf("请键入字母选择功能:");
	char input=getchar();
	switch(input)
	{
		case 'C':case 'c':input_C();break;
		case 'R':case 'r':input_R();break;
		case 'E':case 'e':return 0;
		case 'Q':case 'q':read_txt("README.md");break;
		default:
		{
			printf("非法字母,请重新输入:");
			return main();
		}
	}
}
