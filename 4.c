#include <stdio.h>

int swap (int *a, int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;

}

int second (int c, int d, int e)

{
	if (c>=d&&d>=e)
	return d;
	else if (d>=c&&c>=e)
	return c;
	else
	return e;
}
	int main()
{
	int n1, n2, n3, n4, n5, sec_num;
	scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
	printf("before swap %d%d\n", nl,n2);
	swap (&n1, &n2);
	printf("after swap %d%d\n", nl,n2);
	sec_num=second (n3, n4, n5);
	printf("second large %d\n", sec_num);
	
	return 0;
}
