#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[250];
    int length=0;
    printf ("Please enter string\n");
    scanf ("%s",&str);
    while (str[length] != '\0')
    {
        length++;
    }
    printf ("The length of the string is  %d", length);
    return 0;
}
