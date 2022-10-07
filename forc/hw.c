#include <stdio.h>

int main(int argc, char const *argv[])
{
	char selection[20];

	printf("%s\n\n", "Hello form Trellix");

	printf("%s", "What is your name? ");
	scanf("%s", selection);

	printf("\nWelcome %s\n", selection);

	return 0;
}
