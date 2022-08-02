#include <stdio.h>
int add(int a,int b)
 {
	 int d;
	 d=a+b;
    return d;
   }
 int sub(int a,int b)
 {
	 int x;
	 x=a-b;
    return x;
   }
 int mult(int a,int b)
 {
	 int y;
	 y=a*b;
    return y;
   }
  float div(int a,int b)
 { 
	float z;
	z=(float)a/b;
    return z;
   }
int main()
{
	int a,b,res,c;
	printf("Enter two numbers:");
	scanf(" %d %d",&a,&b);
	printf("\nEnter your choice \n 0.ADD \n 1.SUBTRACT \n 2.MULTIPLICATION \n 3.DIVISION \n 4.PAUSE \n");
	while (c!=4)
	{
		printf("\nEnter your choice: ");
	scanf("%d",&c);
	if (c==0)
	 {
		 res=add(a,b);
		 printf("Sum of a and b is : %d",res);
  }
	else if (c==1)
	{
		res=sub(a,b);
		printf("Difference of a and b is: %d",res);
  }
	else if (c==2)
	{
		res=mult(a,b);
		printf("The product of a and b is: %d",res);
  }
	else if (c==3)
	{
		float res;
		res=(div(a,b));
		printf("The division of a and b is : %.2f",res);
  }
 }
    return 0; 
}
