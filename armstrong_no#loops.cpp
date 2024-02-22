#include<stdio.h>
#include<math.h>
int main()
{
	int n,dc=0,rem,sum=0,i;
	scanf("%d",&n);
	 int org_no=n;
	 int x=n;
	while(x!=0)
	{
		x=x/10;
		dc++;
	}
	while(n!=0)
	{
		rem=n%10;
		sum+= pow(rem,dc);
		n=n/10;
	}
	printf("%d",sum);
	if(sum==org_no)
	{
		printf("armstrong no");
	}
	else
	{
		printf("not a armstrong no");
	}
}
