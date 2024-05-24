#include<stdio.h>

main()
{
	int i, j;
	
	for(i = 10; i >= 6; i--)
	{
		for(j = 10; j >= i; j--)
		{
			printf("%d ", i*i);
		}
		printf("\n");
	}
}

//100
//81 81
//64 64 64
//49 49 49 49
//36 36 36 36 36

//19
//17
//15
//13
