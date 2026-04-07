#include <stdio.h>
#include <string.h>

void my_reverse_words(char str[])
{
    int i = 0, j = 0, start, end;
    char temp;

    while (str[i] != '\0')
    {
        // Skip spaces
        while (str[i] == ' ' && str[i] != '\0')
            i++;

        start = i;  // start of word

        // Move until space or end
        while (str[i] != ' ' && str[i] != '\0')
            i++;

        end = i - 1; // end of word

        // Reverse word from start to end
        while (start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("in function -: Reversed words: %s\n", str);
}

int main()
{
    char str[] = "I am Anil prajapati";
    my_reverse_words(str);
    printf("Reversed words: %s\n", str);
    return 0;
}
