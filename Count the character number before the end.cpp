#include <stdio.h>

#include <ctype.h>

#include <string.h>

int main()
{
	char ch[100] = { 0 };

	int c_count = 0;


	printf("Enter the character you want or q to quit: \n");

	while ((scanf_s("%s", ch, sizeof(ch) )) && *ch != '#')
	{
		if (*ch == '#')
			break;

		printf("The ch you input is %s", ch);

		printf("\n");

		for (unsigned i = 0; i < strlen(ch); i++, c_count++)

			printf("%c", ch[i]);

		printf("The number of the characters is %d", c_count);

		printf("\n");
	
		printf("This algorithm is done, \n");

		printf("If you want to continue or quit the program,");

		printf("\n please input the another characters or q to quit\n ");

		printf("\n");

	}

	printf("End!!!!!!!!!!!!!\n");

	printf("Done\n");


	return 0;
	
}