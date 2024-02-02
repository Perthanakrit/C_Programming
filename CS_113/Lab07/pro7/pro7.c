#include <stdio.h>

/*
I -> 1
IV -> 4
IX -> 9
V -> 5

* I + char(lower) -> In = In
*/
// There are III eggs on the table IV TV.
// There are 3 eggs on the table 4 TV.
void roman2arabic(char input[], char output[])
{
    int i, j = 0;
    int num_value = 0, skip = 0;
    char curr_char = input[0];

    for (i = 0; input[i] != '\n'; i++)
    {
        curr_char = input[i];
        switch (curr_char)
        {
        case 'I':
        {
            if (input[i + 1] == 'V')
            {
                num_value += 4;
                i++;
            }
            else if (input[i + 1] == 'X')
            {
                num_value += 9;
                i++;
            }
            else
                num_value++;
            break;
        }
        case 'V':
        {
            num_value += 5;
            break;
        }
        case 'X':
        {
            num_value += 10;
            break;
        }
        default:
        {
            if (num_value > 0)
            {
                output[j] = (char)(48 + num_value);
                num_value = 0;
            }
            else
                output[j] = curr_char;

            j++;
            break;
        }
        }
    }
}
int main()
{
    char input[80], output[80];

    printf(" Input: ");
    fgets(input, 80, stdin); /* read a line of characters from the input to "input" variable */

    roman2arabic(input, output);
    printf("Output: %s\n", output);

    return 0;
}

/*
case 'I':
        {
            num_value++;
            if (input[i + 1] == 'V')
            {
                num_value += 3;
                i++;
            }

            else if (input[i + 1] == 'X')
            {
                num_value += 8;
                curr_char = input[i + 1];
            }

            if (num_value < 3)
                break;
        }
        case 'V':
        {
            if ((input[i + 1] == ' ' && input[i - 1] == ' ') || input[i + 1] == '\n')
            {
                num_value += 5;
                // curr_char = input[i + 1];
            }
        }

        default:
        {
            if (num_value > 0)
            {
                output[j] = (char)(48 + num_value);
                num_value = 0;
            }
            else
                output[j] = curr_char;

            j++;
            break;
        }
*/

/*
ผมอยากรู้เรียนในฝั่ง back-end ให้มากขึ้น แล้วคิดว่ามันท้าทายอีกด้วย ผมถ้าลองทำด้านกับโปรเจกต์หลายๆแบบ คงจะได้ประสบการ์ณ พัฒนาทักษะ ฝั่ง back-end เพิ่มขึ้นแน่นอน
*/