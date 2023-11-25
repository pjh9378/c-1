#include <stdio.h>
#include <ctype.h>

int main()
{
    char input[1000];
    printf("Input> ");
    fgets(input, sizeof(input), stdin);

    printf("Output> ");
    for (int i = 0; input[i] != '\0'; ++i)
    {
        if (islower(input[i]))
        {
            printf("%c", toupper(input[i]));
        }
        else if (isupper(input[i]))
        {
            printf("%c", tolower(input[i]));
        }
        else {
            printf("%c", input[i]);
        }
    }

    return 0;
}