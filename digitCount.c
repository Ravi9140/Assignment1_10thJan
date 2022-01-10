#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num,digitCount=0;
	
	do
	{
		printf("\nEnter the Number: ");
		scanf("%d",&num);
		if(num<1)
			printf("\nNumber should be greater than 0!!!\n");
    }while(num<1);
    
    printf("\nTotal Number of Digits in the Number %d are",num);
    while(num>0)
    {
    	num/=10;
    	digitCount++;
	}
	printf(" %d\n ",digitCount);
		
}
