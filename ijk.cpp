#include<stdio.h>
int main()
{
int i,j,k,n;

for(i=1;i<10;i++)
for(j=0;j<10;j++)
for(k=0;k<10;k++)
{
n=i*100+j*10+k;
if((i*100+j*10+k)==((i*i*i)+(j*j*j)+(k*k*k)))
printf("ˮ�ɻ���Ϊ:%d\n",n);
}
}
/*ˮ�ɻ���Ϊ:153
ˮ�ɻ���Ϊ:370
ˮ�ɻ���Ϊ:371
ˮ�ɻ���Ϊ:407

--------------------------------
Process exited after 3.12 seconds with return value 0
�밴���������. . .
*/

