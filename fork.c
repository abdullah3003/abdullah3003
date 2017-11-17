#include<stdio.h>
#incude<stdlib.h>
#include<sys/types.h>
int main()
{
	int cpid1;
	int cpid2;
	int cpid3;
	int cpid4;
	int s[100];
	int sum=0;
	for(int i=0;i<100;i++)
	{
		s[i]=1;
	}
	for(int 1=0;i<100;i++)
	{
		cpid1=vfork();
		if(if cpid1==0 && i>=0 && i<25)
		{
			sum+=s[i];
		}
		else{
			printf("error\n");
		}
		cpid2=vfork();
		if(if cpid2==0 && i>=25 && i<50)
		{
			sum+=s[i];
		}
		else{
			printf("error\n");
		}
		cpid3=vfork();
		if(if cpid3==0 && i>=50 && i<75)
		{
			sum+=s[i];
		}
		else{
			printf("error\n");
		}
		cpid4=vfork();
		if(if cpid4==0 && i>=75 && i<=100)
		{
			sum+=s[i];
		}
		else{
			printf("error\n");
		}
		printf("Total Sum Is:");
		print(%d,sum);
	}
	return 0;
}