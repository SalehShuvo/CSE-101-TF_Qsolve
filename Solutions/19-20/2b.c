#include <stdio.h>

int rstrcmp(char s[], char t[], int i)
{
    if (s[i] == t[i])
    {
        if (s[i] == '\0')
            return 0;
        return rstrcmp(s, t, ++i);
    }
    if (s[i] < t[i])
        return -1;
    else
        return 1;
}
int main()
{
    char s[10], t[10];
    printf("Enter two words in lowercase: ");
    scanf("%s %s", s, t);
    printf("result: %d", rstrcmp(s, t, 0));
    return 0;
}