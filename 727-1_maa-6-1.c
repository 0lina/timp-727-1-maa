#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void comb(int *a, size_t n)
{
  int compare = 0, exchange = 0;
    if (a && n)
    {
        size_t jmp = n, i;
        int swppd = 1;
        while (jmp > 1 || swppd)
        {
            if (jmp > 1)
                jmp /= 1.24733;
            swppd = 0;
            for (i = 0; i + jmp < n; ++i)
            {
            compare = compare + 1;
                if (a[i + jmp] > a[i])
                {
                  exchange = exchange + 1;
                  int tmp;
                  tmp = a[i];
                  a[i] = a[i + jmp];
                 a[i + jmp] = tmp;
                 swppd = 1;
                }
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int *a = (int*) malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    comb(a, n);
    for(int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if(i < n - 1)
        printf(" ");
    }
    printf("\n");
    free(a);
    return 0;
}
