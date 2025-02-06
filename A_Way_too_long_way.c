#include <stdio.h>
#include <string.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        char new[101];
        scanf("%s", &new);
        int l = strlen(new);
 
        if (l <= 10)
        {
            printf("%s\n", new);
        }
 
        else
        {
            printf("%c", new[0]);
            int len = strlen(new);
            printf("%d", -2 + len);
            printf("%c\n", new[len - 1]);
        }
    }
    return 0;
}