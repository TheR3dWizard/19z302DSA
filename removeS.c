#include <stdio.h>
#include<string.h>

int main()
{
    char para[100]="", edited[100];
    int i=0, j=0;
    
    printf("Enter the paragraph\n");
    gets(para);
    
    for (i=0 ; i<strlen(para) ; i++)
    {
        if (para[i] == 's' && para[i-1] == 39 && para[i-2] == 's')
        {
            continue;
        }
        else
        {
            edited[j] = para[i];
            j++;
        }
    }
    
    edited[j] = '\0';
    
    printf("%s", edited);
    
    
}