/*Write a program to read a list of positive intergers terminated by -1 and display the odd and even numbers separately and also their respective counts*/

#include<stdio.h>
int main()
{
	int a;
	printf("Input an integer :\n");
	scanf("%d",&a);
	
	if(a>0&&(a%2)==0)
        {
                printf("positive even");
	}
	else if(a>0 && (a%2)!=0)
	{
		printf("positive odd");
	}
	else if(a<0 && (a%2)==0)
	{
		printf("Negative even");
	}
	else if(a<0 && (a%2)!= 0)
	{
		printf("Negative odd");
	}
	return 0;
}
