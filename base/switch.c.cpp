# include <stdio.h>
main()
{   
    int year;
	float x, sum;
	printf("������������ͱ����ÿո��������\n");
	scanf("%d %f", &year, &x);
	switch (year)
	{
		case 1:
			sum =(x * 0.0225) + x;
			break;
	    case 2:
	    	sum =(2 * x * 0.0243) + x;
	    	break;
		case 3:
		    sum =(3 * x * 0.0270) + x;
			break;
		case 5:
		    sum =(5 * x * 0.0288) + x;
			break;
		case 8:
		    sum =(8 * x * 0.0300) + x;
			break;
		default:
		printf("�������!\n");
			break;	
	}
	printf("�ܽ��Ϊ��%f\n", sum);
		
 } 
