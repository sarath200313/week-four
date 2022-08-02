#include <stdio.h>
int sum (int nl, int n2)
{
	int c=nl+n2;
	return c;
}
int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	int add=sum (a,b);
	printf("%d\n", add);
	return 0;
}
