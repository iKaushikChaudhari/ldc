#include <stdio.h>
int main()
{
	clrscr();
	Start:
		printf("Welcome\n");
		goto Start:
			getch();
			return 0;
}
