#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 32

/**
 * generate_random_password - Generates a random valid password
 *
 * Return: Pointer to the generated password
 */
char *generate_random_password(void)
{
	static char password[PASSWORD_LENGTH + 1];
	const char charset[] =
	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}

	password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password string */

	return (password);
}

int main(void)
{
	char *password = generate_random_password();

	printf("%s\n", password);

	return (0);
}
