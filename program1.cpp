#include<stdio.h>
void towerofhanoi(int n,char s,char d,char a)
{
	if(n==1)
	{
		printf("move the disk %d from %c to %c",n,s,d);
		return;
	}
	towerofhanoi(n-1,s,a,d);
	printf("\n move disk %d from %c to %c",n,s,d);
	towerofhanoi(n,s,d,a);
	printf("\n move disk %d from %c to %c",n,s,d);
	towerofhanoi(n-1,a,d,s);
}	
int main()
{
	int n;
	char s,d,a;
	printf("enter the number of disks:");
	scanf("%d",&n);
	towerofhanoi(n,'s','d','a');
	
	
}
