#include <stdio.h>

int main()
{
    int n = 0, x = 0, pr = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        pr = pr * x;
    }
    printf("%d\n", pr);
    return 0;
}
