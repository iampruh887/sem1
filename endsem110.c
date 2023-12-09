#include<stdio.h>
#include<string.h>
int main()
{
    char input_string[202];
    scanf("%[^\n]s", input_string);
    printf("%s\n", input_string);
    int i=0;
    int space=0;
    while(input_string[i]!='\0')
    {
        if(input_string[i]== ' ')
            space++;
        i++;
    }
    int temp;
    int strlength = i;
    // printf("strlength: %d\n", strlength);
    input_string[strlength] = ' ';
    input_string[strlength+1] = '\0';
    space++;
    int counts[space];
    space=0;
    i=0;
    int characters=0;
    int mem;
    while(input_string[i]!= '\0')
    {
        if(input_string[i]!=' ')
        {
            characters++;       
        }
        else if(input_string[i] == ' ' || input_string[i] == '\0')
        {
            counts[space] = characters;
            if(characters%2==0)
            {
                temp = i-1;
                while(input_string[temp]!=' ' && temp>=0)
                {
                    input_string[temp] =' ';
                    temp--;
                }
            }  
            space++;
            characters = 0;
        }
        i++;
    }
    int odd=0;
    int even=0;
    for(int i=0;i<space;i++)
    {
        if(counts[i]%2==0)
            even++;
        else if(counts[i]%2!=0)
            odd++;
    }
    char duplicateString[201];
    printf("odd number of words: %d\neven number of words: %d\n", odd, even);
    i=0;
    int k=0;
    while(input_string[i]!='\0')
    {
        if(input_string[i]!=' ')
        {
            duplicateString[k] = input_string[i];
            k++;
        } 
        else if(input_string[i] == ' ' && input_string[i+1]!=' ' && k>0)
        {
            duplicateString[k] = ' ';
            k++;
        }
        i++;
    }
    duplicateString[k] = '\0';
    // printf("%d\t", strlen(duplicateString));
    printf("%s\n",duplicateString);
    // printf("%d\n", strlen(duplicateString));
    i=0;
    char firstword[50];
    char lastword[50];
    while(duplicateString[i]==' ')
        i++;
    int j=0;
    while(duplicateString[i]!=' ' && duplicateString[i]!='\0')
    {
        firstword[j] = duplicateString[i];
        printf("[%c] ", firstword[j]);
        i++; 
        j++;
    }
    firstword[i] ='\0';
    printf("\n");
    i--;
    int start=i;
    i=strlength-1;
    while(duplicateString[i]==' '&&i>=0)
    {
        i--;
    }
    
    int end =i;
    int lwd=0;
    while(duplicateString[i]!=' '&&i>=0)
    {
        lastword[lwd] = duplicateString[i];
        lwd++;
        i++;
    }
    lastword[lwd] = '\0';
    printf("first word:%s\nlast word:%s\n", firstword, lastword);

    return 0;
}