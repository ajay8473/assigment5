#include<stdio.h>
int main()
{
	int i,n;
	printf("enter a value of n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i*i);
	}
	return 0;
}
