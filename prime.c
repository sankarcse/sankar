#include<stdio.h>
int main()
{
	int n,count=0;//declaration
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			coutn++;//counting
		}
	}
	if(count==2)
	printf("prime");
	else
	printf("not prime");
}//sankar
