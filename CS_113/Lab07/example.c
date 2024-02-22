#include <stdio.h>
#include <string.h>

void roman2arabic(char input[], char output[])
{
    int i = 0, j = 0;

    while (input[i] != '\0')
    {
        if ((input[i] == 'I' || input[i] == 'V' || input[i] == 'X'))
        {
            char romanNum[10];
            int k = 0;
            while (input[i] == 'I' || input[i] == 'V' || input[i] == 'X')
            {
                romanNum[k++] = input[i++];
            }
            romanNum[k] = '\0';

            int decimalValue = 0;
            for (int l = 0; romanNum[l] != '\0'; l++)
            {
                switch (romanNum[l])
                {
                case 'I':
                    if (romanNum[l + 1] == 'V' || romanNum[l + 1] == 'X')
                    {
                        decimalValue -= 1;
                    }
                    else
                    {
                        decimalValue += 1;
                    }
                    break;
                case 'V':
                    decimalValue += 5;
                    break;
                case 'X':
                    decimalValue += 10;
                    break;
                default:
                    break;
                }
            }

            j += sprintf(&output[j], "%d", decimalValue);
        }
        else
        {
            output[j++] = input[i++];
        }
    }

    output[j] = '\0';
}

int main()
{
    char input[80], output[80];

    printf(" Input: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if present
    input[strcspn(input, "\n")] = '\0';

    roman2arabic(input, output);
    printf("Output: %s\n", output);

    return 0;
}
