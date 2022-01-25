#include<stdio.h>
#include<stdlib.h>

void occurence(unsigned int num)
{
	int i,div,arr[10];
	unsigned int rem;
	
	//Assigning value to array elements as they hold Garbage values by default
	for(i=0;i<10;i++)
		arr[i]=0;
	
	while(num>0)
	{
		arr[(num % 10)]++;  
		num/=10;
	}
	printf("\nOccurences of Each Digits in the Given Number are:\n");
	for(i=0;i<10;i++)
	{
		printf("\n%d = %d Occurences",i,arr[i]);
  	}
}

int main()
{
	unsigned int number;
	
	do
	{
		printf("\nEnter the Number: ");
		scanf("%d",&number);
		if(number<1)
			printf("\nNumber should be greater than 0!!!\n");
  	}while(number<1);
    
  	occurence(number);
}
