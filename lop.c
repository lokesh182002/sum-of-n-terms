#include<stdio.h>
void main()
{
	int i,n,sum=0,num;
	printf("\n enter n:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n enter any number:");
		scanf("%d",&num);
		sum=sum+num;
		i++;
		
	}
	printf("sum=%d",sum);
}
