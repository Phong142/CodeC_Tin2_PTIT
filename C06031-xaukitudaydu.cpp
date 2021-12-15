#include <stdio.h>
#include <string.h>
int Max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int main()
{
    char a[100];
    int s[100] = {};
    gets(a);
    int len = strlen(a);
    int kq = 1;
    for (int i = 0; i < len; i++)
    {
        s[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
                s[i] = Max(s[i], s[j] + 1);
        }
        kq = Max(kq, s[i]);
    }
    printf("%d", 26 - kq);
}

