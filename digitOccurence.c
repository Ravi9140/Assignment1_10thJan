#include<stdio.h>
#include<stdlib.h>

void occurence(unsigned int long long num)
{
	int i,div,arr[10];
	unsigned int long long rem;
	
	//Assigning value to array elements as they hold Garbage values by default
	for(i=0;i<10;i++)
		arr[i]=0;
	
	while(num>0)
	{
		//arr[(num % 10)]++;  Another method
		rem=num%10;
		num/=10;
		
		//Increment digit occurence for each appearance 
		switch(rem)
		{
			case 0: arr[0]++;
					break;
			
			case 1: arr[1]++;
					break;
					
			case 2: arr[2]++;
					break;
					
			case 3: arr[3]++;
					break;
					
			case 4: arr[4]++;
					break;
					
			case 5: arr[5]++;
					break;
					
			case 6: arr[6]++;
					break;
					
			case 7: arr[7]++;
					break;
					
			case 8: arr[8]++;
					break;
					
			case 9: arr[9]++;
					break;
		}
	}
	printf("\nOccurences of Each Digits in the Given Number are:\n");
	for(i=0;i<10;i++)
	{
		printf("\n%d = %d Occurences",i,arr[i]);
    }
}

int main()
{
	unsigned int long long number;
	
	do
	{
		printf("\nEnter the Number: ");
		scanf("%d",&number);
		if(number<1)
			printf("\nNumber should be greater than 0!!!\n");
    }while(number<1);
    
    occurence(number);
}
