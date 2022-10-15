#include<stdio.h>
int main()
{
    char str[30];
    printf("enter the string: ");
    gets(str);
    int count=0,i=0,j;
    while(str[i]!='\0')
    {
        count++;
        i++;

    }
    while(i<j)
    {
        if (str[i]!=str[j])
            break;
        i++;
        j--;
    }

    if(i>=j)
        printf("\n the string is palindrome");
    else
        printf("\n the string is not palindrome");
    return 0;
}
