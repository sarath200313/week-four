#include <stdio.h>
#include <math.h>
float facsum(int x)
{
	int i=1,j,n=1;
	float h=0;
	for(;i<=x;i++)
	{
		for(j=1;j<=i;j++)
		{
			n=n*j;
		}
		h=h+pow(i,i)/n;
	}
	return h;
}
int main()
{
	int a;
	float k;
	scanf("%d",&a);
	k=facsum(a);
	printf("the sum of the series is: %f",k);
	return 0;
}
