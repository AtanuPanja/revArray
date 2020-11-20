#include<stdio.h>
void arrayRev(int arr[])
{
	for(int i = 0; i <7/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[ 7 - i -1];
		arr[7 - i -1] = temp;
	}
}
int main()
{
	int arrNum[7];
	printf("Enter the 7 elements of your array\n");	
	for(int i = 0; i < 7; i++)
	{
		printf("Enter element %d\n",(i+1));
		scanf("%d",arrNum + i);
		/*same can be written as 
		scanf("%d",&arrNum[i]);
		*/
	}
		printf("Your array before reversing is :-\n");
		for(int i = 0;i < 7; i++)
		{
			printf("%d\t",arrNum[i]);
		}
		printf("\n");
		
		arrayRev(arrNum);
		
		printf("Your array after reversing is :-\n");
		for(int i = 0;i < 7; i++)
		{
			printf("%d\t",arrNum[i]);
		}
		printf("\n");
		return 0;
}