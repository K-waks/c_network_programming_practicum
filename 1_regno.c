// To write a program that requests a user to enter their RegNo, name and save them to a file.

#include <stdio.h>
#include <string.h>

int main()
{
    char regno[20];
    char confirm[5];
    int trial = 1;

    while (trial <= 3)
    {
        puts("*************************************");
        printf("Your registration number? ");
        scanf("%s", regno);

        putchar('\n');
        printf("Your registration number is %s\n", regno);
        printf("Is this correct? (type 'yes' or 'no'): ");
        scanf("%s", confirm);

        if (strcmp(confirm, "yes") == 0)
        {
            puts("Record added to file ✅");
            break;
        }
        else if (strcmp(confirm, "no") == 0)
        {
            printf("trials done: %d of 3\n", trial);
            if (trial == 3)
            {
                puts("Trial limit reached! Exiting program...");
            }
            putchar('\n');
            trial++;
        }
        else
        {
            puts("Invalid input (Allowed values are 'yes' or 'no')");
            printf("trials done: %d of 3\n", trial);
            if (trial == 3)
            {
                puts("Trial limit reached! Exiting program...");
            }
            putchar('\n');
            trial++;
        }
    }

    putchar('\n');

    return (0);
}
