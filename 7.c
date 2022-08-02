#include <stdio.h>
int largest_num(int n1,int n2,int n3)
{
	int result;
	if (n1>n2)
	{
	 if (n1>n3)
	 {
	    result=n1;
	 }
	  else
	 { 
	    result=n3;
	 }
  }
	else
	{
		if (n2>n3)
		{
			result=n2;
		}
		else
		{
			result=n3;
		}
	}
	return result;
}
	
int main()
{
	int n1=1000,n2=2000,n3=8000,largest;
	largest=largest_num(n1,n2,n3);
	printf("Largest number is: %d",largest);
	return 0;
}
