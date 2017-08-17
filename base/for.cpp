# include <stdio.h>

int main(void)
/* 
{
    int i, j;
	for (i = 1; i <= 5; ++i)
        for (j = 1; j < 3; ++j)
			printf("¹þ¹þ\n");
		    printf("ÎûÎû\n");
    return 0;
}*/
{
  int i=3,k;
  printf("%d,%d\n", (i++)+(i++)+(i++),i);
  i=3;
  printf("%d,%d\n",i,++i+(++i)+(++i));
  i=3;
  k= (i++)+(i++)+(i++);
  printf("%d,%d\n",k,i);
  return 0;

} 
