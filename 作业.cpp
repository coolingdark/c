# include <stdio.h>
# include <math.h>

int main(void)
{
	float deposit;
	int n = 3,capital;
	printf("«Î ‰»Îcapital£∫\n");
	scanf("%d", &capital);
	deposit = capital * pow(1.0225, n);
	printf("%f\n", deposit);
}