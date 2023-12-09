#include<stdio.h>
void ExchangedString(char *str,int n)
{
    char *ptr_start = str;
    
    char *start = malloc(n*sizeof(char));

    char *end = malloc(n*sizeof(char));
    while(*str!='\0') {
        if (*str == ' ') {
            break;
        }
        str++;
    }
    while(*str!='\0')
    {
        *end = *str;
        str++;
        end++;
    }
    *end = '\0';//hopefully stores last word
    str = ptr_start;
    while(*str!=' ')
    {
        *start = *str;
        start++;
        str++;
    }
    *start = '\0';//hopefully stores the first word
    printf("first word: %s\nsecond word: %s\n", start, end);
}
int main() {
    char input_string[202];
    scanf("%[^\n]s", input_string);
    printf("%s\n", input_string);

    int i = 0;
    int space = 0;
    while (input_string[i] != '\0') {
        if (input_string[i] == ' ')
            space++;
        i++;
    }

    int temp;
    int strlength = i;
    input_string[strlength] = ' ';
    input_string[strlength + 1] = '\0';
    space++;
    int counts[space];
    space = 0;
    i = 0;
    int characters = 0;

    while (input_string[i] != '\0') {
        if (input_string[i] != ' ') {
            characters++;
        } else {
            counts[space] = characters;
            if (characters % 2 == 0) {
                temp = i - 1;
                while (input_string[temp] != ' ' && temp >= 0) {
                    input_string[temp] = ' ';
                    temp--;
                }
            }
            space++;
            characters = 0;
        }
        i++;
    }

    int odd = 0;
    int even = 0;
    for (int i = 0; i < space; i++) {
        if (counts[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    char duplicateString[201];
    printf("odd number of words: %d\neven number of words: %d\n", odd, even);

    i = 0;
    int k = 0;
    while (input_string[i] != '\0') {
        if (input_string[i] != ' ') {
            duplicateString[k] = input_string[i];
            k++;
        } else if (input_string[i] == ' ' && input_string[i + 1] != ' ' && k > 0) {
            duplicateString[k] = ' ';
            k++;
        }
        i++;
    }
    duplicateString[k] = '\0';
    strlength= k;
    ExchangedString(duplicateString, strlength);
    
    return 0;
}
