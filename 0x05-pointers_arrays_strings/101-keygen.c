#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates a random valid password for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int password_length = 66;
    char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
                         "0123456789!@#$%^&*()_-+=<>?{}[]";
    int num_valid_chars = sizeof(valid_chars) - 1; /* Exclude the null terminator */
    int pass[100]; /* Allocate an array for the password with enough space */
    int i, sum;

    sum = 0;

    srand(time(NULL));

    for (i = 0; i < password_length; i++)
    {
        pass[i] = valid_chars[rand() % num_valid_chars];
        sum += pass[i];
        putchar(pass[i]);
    }

    putchar('\n');

    return (0);
}

