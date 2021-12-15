#include <stdio.h>
int main()
{
    int h;
    scanf("%d", &h);
    for (int i = h; i >= 1; i--)
    {
        int gtri = i + '@' - 1;
        for (int j = i; j >= 1; j--)
        {
            printf("%c", gtri);
            gtri++;
        }
        printf("\n");
    }
}