#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
	
	//initializing
	srand(time(NULL));
	int enterred, entered[5];
	int m, i, p, j, k, a[5];
	int generated[5];
	int r = 0, w = 0, x = 0;
	
	
	//number generating
	for (i = 0; i <= 4; i++)
	{
		generated[i] = rand() % 7 + 1;
		a[i]=generated[i];
	}
	
	
//	
//	//debugging
//	a[0]=2;
//	a[1]=3;
//	a[2]=2;
//	a[3]=1;
//	a[4]=6;
//	for (p = 0; p < 5; p++)
//	{
//		generated[p] = a[p];
//	}
//	
	
	
	printf("generated\n");
	system("cls");
	for (i = 0; i <= 4; i++)
	{
		printf("%d\t", generated[i]);
	}
	
	
	//game start loop
	for (k = 0; k <= 10; k++)
	{
		printf("\n Enter the number you decoded\n");
		scanf("%d", &enterred);
		
		
		//digit extraction
		for (i = 4; i >= 0; i--)
		{
			entered[i] = enterred % 10;
			enterred /= 10;
		}
		
		//digit printing
		for (i = 0; i <= 4; i++)
		{
			printf("%d\t", entered[i]);
		}
		
		
		
		//digit checking
		for (j = 0; j <= 4; j++)
		{
			if (entered[j] == generated[j])
			{
				r = r + 1;
				generated[j] = -1;
			}
		}
		
		
		for (i = 0; i <= 4; i++)
		{

			if (entered[i] == generated[0])
			{
				w = w + 1;
				generated[0] = -1;
			}
			else if (entered[i] == generated[1])
			{
				w = w + 1;
				generated[1] = -1;
			}
			else if (entered[i] == generated[2])
			{
				w = w + 1;
				generated[2] = -1;
			}
			else if (entered[i] == generated[3])
			{
				w = w + 1;
				generated[3] = -1;
			}
			else if (entered[i] == generated[4])
			{
				w = w + 1;
				generated[4] = -1;
			}
		}
		
//		//debugging
//		printf("\n");
//		for (i = 0; i <= 4; i++)
//		{
//			printf("%d\t", generated[i]);
//		}
		
		
		printf("\n");
		for (m = 0; m < r; m++)
			printf(" R ");
		for (m = 0; m < w; m++)
			printf(" W ");
		
		
		//Copying it back
		for (p = 0; p < 5; p++)
		{
			generated[p] = a[p];
		}
	
	
		if(r==5)
		{
			printf("\n\n\nYOU WON");
			exit(1);
		}
		
		

		r = 0;
		w = 0;
	}
	printf("\n YOU LOSE");
}
