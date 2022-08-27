#include <stdio.h>
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int alen = 6, blen = 4;
    int a[] = {15, 7, 9}, b[] = {1, 2, 3, 15}, dis[alen];
    int i, j, k = 0, flag;
    for (i = 0; i < alen; i++)
    {
        flag = 1;
        for (j = 0; j < blen; j++)
        {
            if (a[i] == b[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            dis[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < k - 1; i++)
    {
        printf("%d, ", dis[i]);
    }
    printf("%d", dis[k - 1]);
    return 0;
}