#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char getRandomChar()
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$?/-_";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

void generatePassword(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c", getRandomChar());
    }
    printf("\n");
}

int main()
{
    int passwordCount;
    int passwordLength;

    printf("Enter the number of passwords to generate: ");
    scanf("%d", &passwordCount);

    printf("Enter the length for each password: ");
    scanf("%d", &passwordLength);

    srand(time(NULL));

    for (int i = 0; i < passwordCount; i++)
    {
        printf("Generated Password %d: ", i + 1);
        generatePassword(passwordLength);
    }

    return 0;
}