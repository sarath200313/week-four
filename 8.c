#include <stdio.h>

int factorial (int a)
{
	int fact=1;
	for (int i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
}
	int main()
{
	int nl;
	scanf("%d", &nl);
	int R=factorial (nl);
	printf("factorial of number=%d", R);
	return 0;
}
