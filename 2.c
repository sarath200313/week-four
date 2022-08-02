#include <stdio.h>
void swap(int *n1,int *n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
int main()
{
	int n1=15,n2=20;
	printf("Befor Swapping\n");
	printf("n1:%d\n",n1);
	printf("n2:%d\n",n2);
	swap(&n1,&n2);
	printf("Afetr Swapping\n");
	printf("n1:%d \n" ,n1);
	printf("n2:%d \n" ,n2);
	return 0;
}
