#include <stdio.h>
int Sum_of_Two(int* x,int* y)
{
	return *x+*y;
}
int main()
{
	int x,y;
	printf("Enter Two Integers Values:\n");
	scanf("%d\n%d",&x,&y);
	printf("Sum of Two Values is Equal to %d\n",Sum_of_Two(&x,&y));
	return 0;
}