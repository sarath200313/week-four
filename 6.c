#include <stdio.h>

int sum(int a)
{
	int sum=0;
	int i;
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
		return sum;

}
	int main()
{
	int nl, R;
	scanf("%d", &nl);
	R=sum (nl);
	printf("sum of numbers=%d", R);
	return 0;
}
