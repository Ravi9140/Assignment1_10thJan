#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,num,sum;
	
	do
	{
		printf("\nEnter the Number: ");
		scanf("%d",&num);
		if(num<1)
			printf("\nNumber should be greater than 0!!!\n");
    }while(num<1);
    
    
    printf("\nPerfect Numbers Between 1 and %d are:\n\n",num);
    for(i=1;i<=num;i++)
    {
    	sum=0;
    	for(j=1;j<=(i/2);j++)
    	{
    		if(i%j==0)
    			sum+=j;
		}
		if(sum==i)
			printf("%d\t",i);
	}
}
