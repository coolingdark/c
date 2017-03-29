//寻找正确坐标游戏 
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
	system("color 2C");
    int map[2][2];
	int i, j, m, n,x,y;
	srand(time(NULL));
	x=rand()%2+1;
	y=rand()%2+1;
	printf("请输入一个坐标如2 2\n");
	for(i=0;i<2;++i)
	{
		for(j=1;j<=2;++j)
			printf("■");
		putchar('\n');
	}
	scanf("%d %d",&m,&n);
	for(j=1;j<=2;++j)
	{
		map[0][j]=j;
		map[1][j]=j;   
	}
	if(x!=m||y!=n)
	{
		printf("猜错了傻逼，再猜！\n");
		
		scanf("%d %d",&m,&n);
	}
	
	system("cls");

	printf("你猜对了\n");
	for(i=1;i<=2;++i)
	{
		for(j=1;j<=2;++j)
		{
			if(m==map[0][i]&&n==map[1][j])
				
				printf("☆");
			else
				printf("■");
		}
		putchar('\n');
	}
	
	
	return 0;
}
