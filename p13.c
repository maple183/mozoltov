#include <stdio.h>

#define NONBLANK 'a'

void main()
{
	/*
	//p13Á·Ï° 1-8   
	int c;
	int i = 0, j = 0, k = 0;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û£º\n");
	while ((c = getchar()) != EOF)
	{
		
		if (c == '\n')
		{
			i++;
		}
		if (c == '\t')
		{
			j++;
		}
		if (c == ' ')
		{
			k++;
		}
		printf("%d\t%d\t%d\n", i, j, k);
	}
	*/

	//p13Á·Ï° 1-9  
	int c, lastc;
	lastc = NONBLANK;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (lastc != ' ')
				putchar(c);
		lastc = c;
	}
}