#include <stdio.h>
#include <math.h>

int digi(int x)
{
	int i=0;
	for (;x>0;x/=10)
	{
		if (i<x%10)
		i=x%10;
	}
	return i;
}
int main()
{
	int a, k;
	scanf("%d", &a);
	k=digi (a);
	printf(" largest digit =%d", k);
	return 0;
}
