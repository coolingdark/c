/*
# include <stdio.h>
int main(void)
{
    int a, b;
	float d, e;
	char c1, c2;
	double f, g;
	long m, n;
	unsigned int p, q;
	a = 51, b = 62;
	c1 = 'a', c2 = 'b';
	d = 3.56, e = -6.87;
	f = 3157.890121;
	g = 0.123456789;
    m = 50000, n = -60000;
	p =32768, q = 40000;
	printf("a = %d, b = %d, \nc1 = %c, c2 = %c\nd = %6.2f,e = %6.2f\n ",a, b, c1, c2, d, e); 
	printf("f = %15.6f, g = %15.12f, \nm = %ld, n = %ld\np = %u,q = %u\n ",f, g, m, n, p, q);
	printf("%d %d %d %d %d\n",sizeof(a),sizeof(d),sizeof(c1),sizeof(f),sizeof(m),sizeof(p));
	
    return 0;
}*/

# include <stdio.h>
int main(void)
{
    int a, b;
	float d, e;
	char c1, c2;
	double f, g;
	long m, n;
	unsigned int p, q;
	a = 51, b = 62;
	c1 = a, c2 = b;

	f = 3157.890121;
	g = 0.123456789;
    d=f;e=g;
	p=a=m=5000;q=b=n=-60000;
	p =32768, q = 40000;
	printf("a = %d, b = %d, \nc1 = %c, c2 = %c\nd = %6.2f,e = %6.2f\n ",a, b, c1, c2, d, e); 
	printf("f = %15.6f, g = %15.12f, \nm = %ld, n = %ld\np = %u,q = %u\n ",f, g, m, n, p, q);	
    return 0;
}
