#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
                         "0123456789!@#$%^&*()_-+=<>?{}[]";
    int num_valid_chars = sizeof(valid_chars) - 1; // Exclude the null terminator
    int password_length = 10; // Change this to set the length of the password

    srand(time(NULL));

    int i;
    for (i = 0; i < password_length; i++)
    {
        int random_index = rand() % num_valid_chars;
        putchar(valid_chars[random_index]);
    }

    putchar('\n');

    return 0;
}

