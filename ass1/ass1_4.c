#include<stdio.h>
int main()
{

int i, j;
	int row = 4, col, spaces = 3, no;

	for(i = 1  ; i <= row ; i++)
	{
		for(j = 1 ; j <= spaces ; j++)
			printf(" ");
		
		for(j = 1 ; j <= i ;  j++)
			printf("* ");

		printf("\n");
		spaces--;		
	}
return 0;
}
