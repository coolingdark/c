# include <stdio.h>

bool Isprime(int j)
{
	int i;
	for (i = 2; i < j; ++i)
	{
		if (0 == j%i)
			break;
	} 
	if (i == j)
		return true;
	else 
		return false;	
}
int main(void)
{
    int i;
	int val;
	
	scanf("%d", &val);//���val���������� 
	for (i = 1; i < val; ++i)
	{
		if (Isprime(i))
			printf("%d\n", i);		
	}
	return 0; 
}
