# include <stdio.h>

int main(void)
{
    int val;
    printf("请输入层数：");
	scanf("%d", &val);
	
	switch (val)
	{
	case 1:
		printf("第一层开!\n");
		break;
	case 2:
		printf("第二层开!\n");
		break;
	case 3:
		printf("第三层开!\n");
		break;
	default:
		printf("还没盖到这一层!\n");
		break;
					
					
					
					
					
	}
	
	
}