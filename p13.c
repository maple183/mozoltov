#include <stdio.h>

#define NONBLANK 'a'

void main()
{
	//p13练习 1-9  
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
