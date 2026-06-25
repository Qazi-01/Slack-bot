#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[100];

    printf("Simple C Bot\n");
    printf("Commands: !hello, !calc, !exit\n\n");

    while (1)
    {
        printf("> ");

        fgets(input, sizeof(input), stdin);

        FILE *log = fopen("log.txt", "a");
        if (log != NULL)
        {
            fprintf(log, "%s", input);
            fclose(log);
        }

        if (strncmp(input, "!hello", 6) == 0)
        {
            printf("Hello!\n");
        }
        else if (strncmp(input, "!calc", 5) == 0)
        {
            int a, b;
            char op;

            if (sscanf(input, "!calc %d %c %d", &a, &op, &b) == 3)
            {
                switch (op)
                {
                    case '+':
                        printf("%d\n", a + b);
                        break;

                    case '-':
                        printf("%d\n", a - b);
                        break;

                    case '*':
                        printf("%d\n", a * b);
                        break;

                    case '/':
                        if (b != 0)
                            printf("%d\n", a / b);
                        else
                            printf("Cannot divide by zero\n");
                        break;

                    default:
                        printf("Unknown operator\n");
                }
            }
            else
            {
                printf("Usage: !calc 5 + 7\n");
            }
        }
        else if (strncmp(input, "!exit", 5) == 0)
        {
            break;
        }
        else
        {
            printf("Unknown command\n");
        }
    }

    return 0;
}
