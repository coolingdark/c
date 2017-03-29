//输出字符串元音字母的个数 
# include <stdio.h>
void fun(char *s,int num[5])
{
  int k,i=5;
  for(k=0;k<i;k++)//数组初始化 
	  num[k]=0;
  for(;*s;s++)
  {
  i=-1;
  switch(*s)
  {
  case 'a':case 'A':{i=0;break;}
  case 'e':case 'E':{i=1;break;}
  case 'i':case 'I':{i=2;break;}
  case 'o':case 'O':{i=3;break;}
  case 'u':case 'U':{i=4;break;}
  }
  if(i>=0)
  num[i]++; 
  }
}
int main()
{
	int i=-1;
	int num[5];
  	char s[100];
  	scanf("%s",s);
  	fun(s,num);
for (i=0;i<5;++i)
  printf("%d,",num[i]);
putchar('\n');
}
