#include <math.h>


float area(int r)
{
	return 3.14*pow(r,2);
}
float perimeter(int r)
{
	return 2*3.14*r;
}
int arearect(int a, int b)
{
	return a*b;
}
int perimeterrect(int a, int b)
{
	return 2*(a+b);
}
int main()
{
	int R,n1,n2,M;
	scanf("%d%d%d", &n1,&n2,&R); 
	printf("Area of circle\nperimeter of circle\narea of rectangle\nperimeter of rectangle\n");
	scanf("%d",&M);
	
	if (M==1)
	{
		printf("%f\n", area(R));
	}
	else if(M==2)
	{
		printf("%f\n", perimeter(R));
	}
	else if(M==3)
	{
		printf("%d\n", arearect(n1,n2));
	}
	else if(M==4)
	{
		printf("%d\n", perimeterrect(n1,n2));
	}
return 0;
}
