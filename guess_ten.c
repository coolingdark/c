  //猜数10次 
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
	int guess, magic, count = 0;
	int ret;
	char ch;
	srand(time(NULL));
	magic = rand()%100+1;
	printf("请输入猜测的值：\n");
	do 
	{
		do
		{
			ret = scanf("%d", &guess);//输入数据的个数 
			while(ret != 1)
			{
			while(getchar()!='\n')
				printf("输入错误，请重新输入：\n");
			ret = scanf("%d", &guess);
			}//限制输入数据的形式 
			count++;
			
			if (guess > magic)
				printf("wrong,too big请重新输入：\n");
			else if(guess < magic)
				printf("wrong,too small请重新输入：\n");
			else
			{
				printf("right\n");
				break;	
			}
		}while(count<10);
		if(count<10)
			{
			printf("猜测次数为%d次\n", count);
			break;
			}
		else
		{ 
			printf("你已经猜测了10次，如果想继续猜测请冲10元到1543257419:y/n\n");
			scanf(" %c", &ch);//空格
			if(ch=='y') 
			{
			printf("充值成功\n"); 
		 	count = 0;
			} 
			else
				break;
		} 
	}while('y' == ch);
    return 0;
}
