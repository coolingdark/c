# include <stdio.h>

int main(void)
{
	int i;
	char ch;
	do{
		scanf("%d", &i);
		printf("i = %d\n", i);	
		continue;//������������ 
		printf("no see"); 
	}while ((ch == getchar()) != '\n');
	return 0;
}
