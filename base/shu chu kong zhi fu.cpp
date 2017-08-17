# include <stdio.h>
main()
{ 
    
	double a = 22.45352827;
	double b = 2245.352827;
	long int c = 22453;
	printf("%e\n%E\n%g\n", a, a, a);
	printf("-----------------\n");
	printf("%e\n%E\n%g\n", b, b, b);
	printf("-----------------\n");
	printf("%.4lf\n%.5lf\n%.3lf\n", b, b, b);
	printf("-----------------\n");
	printf("%6d\n%9d\n%-8d\n", c, c, c);

}//½âÊÍ¿Î±¾50Ãæ 
