# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <windows.h>
# include <time.h>
const int type_live=1;
const int type_dead=0;
const int map_size=20;
const int map_size2=40;
int map[20][20];
int getlivingnum(int x, int y)
{ int i,j;
int num=0;
for(i=x-1;i<=x+1;i++)
{  
	if(i<0||i>=map_size)
	{ 
		continue; 
	}
	for(j=y-1;j<=y+1;j++)
	{   
		if(j<0 || j>=map_size2)
		{           
			continue; 
		}
		if(map[i][j]==type_live)
		{ 	
			num++; 
		}
	}
} 
if(map[x][y]==type_live)
{
	num--;
}
return num;
}
void run()
{
	int i, j, num;
	for(i=0;i<map_size;++i)
		for(j=0;j<map_size2;++j)
		{
			num=getlivingnum(i,j);
			if(3==num)
				map[i][j]=type_live;
			else if(num!=2)
				map[i][j]=type_dead;	
		}
}
void show_map(int x)
{
	int i, j;
	for(i=0;i<map_size;++i)
	{
		for(j=0;j<map_size2;++j)
	
	/*	{
			if(map[i][j]==type_live)
		{
			switch(x)
				{
				case 1:
					printf("⌒");
				case 2:
					printf("1");
				case 3:
					printf("*");
				case 4:
					printf("∣");
				}
			}
		else if(map[i][j]==type_dead)
		{
				switch(x)
			{
		  case 1:
			  printf(" ");
		  case 2:
			  printf("0");
		  case 3:
			  printf(" ");
		  case 4:
			  printf("－");
			} 
		}
	
	}
	*/ 
	switch(x)
		{
		case 1:
		if(map[i][j]==type_live)
		{
		printf("⌒");
		}
		else if(map[i][j]==type_dead)
		{
		printf(" ");
		}
		break;
		case 2:
		if(map[i][j]==type_live)
		{
		printf("1");
		}
		else if(map[i][j]==type_dead)
		{
		printf("0");
		}
		break;
	    case 3:
		  if(map[i][j]==type_live)
		  {
		  printf("*");
		  }
		  else if(map[i][j]==type_dead)
		  {
		  printf(" ");
		  }
		  break;
		case 4:
		  if(map[i][j]==type_live)
		  {
		  printf("∣");
		  }
		  else if(map[i][j]==type_dead)
		  {
		  printf("－");
		  }
		break;	
		}	
putchar('\n');	
	}
}
void initgame()
{
		  int i,j;
		  srand((unsigned) time(NULL));
		  for(i=0;i<map_size;++i)
			  for(j=0;j<map_size2;++j)
				  map[i][j]=rand()%2;
}
void getpassword(char password[],int len)
{
    char ch;
	int i=0;
    do
	{
		ch=getch();
		if(ch==' ')
			continue;
		if(ch=='\b')
		{
			if(i==0)
				continue;
			printf("\b \b");
			i--;
			continue;
		}
		if(ch=='\r')
			break;
		if(i>=len)
			continue;
		password[i]=ch;
		printf("*");
		i++;
	}while(ch!='\r');
	password[i]='\0';
}
int main()
{
	char c[4];
    int x,t=0;
	system("color 1D");
	system("title 炫动");
	printf("用户名：小骚年\n密码：");
	getpassword(c,4);
	if(c[0]=1,c[2]=1,c[3]=1,c[4]=1)
	{
		printf("\n欢迎进入我的世界\n");
		Sleep(500);
		initgame();
		while(1>0)
		{
			t++;
			x = (t/10) % 4+1;
				run();
			show_map(x);
			Sleep(50);
			system("cls");		
		}
		system("pause");
	}
	return 0;
}