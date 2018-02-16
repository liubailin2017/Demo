#include<stdio.h>
#include"HeyJni.h"
void Mathbaba()
{
printf("---------------------Wellcome To Math-------------------------\n");
	for(int i = 9; i > 0; i--) 
	{
		for( int j = 1; j <= 9; j++)
		{
			if(j < i)
				 printf("       ");
			else
				printf("%dX%d=%2d ",i,j,i*j);
		}
		printf("\n");
	}

}


