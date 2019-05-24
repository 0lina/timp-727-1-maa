#include <stdio.h>
#include <locale.h>

int main()
{
    int n = 0, x = 0, sum = 0;
    float sr = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        sum = sum + x;
    }
    sr = (float) sum / n;
    printf("%f\n", sr);
    return 0;
}
