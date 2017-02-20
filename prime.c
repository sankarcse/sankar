#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			coutn++;
		}
	}
	if(count==2)
	printf("prime");
	else
	printf("not prime");
}
