#include <stdio.h>
#include <stdlib.h>

void siftd(int *a, int root, int bottom)
{
  int maxChild, done = 0;
  while((root * 2 + 1 <= bottom) && (!done))
  {
    if(root * 2 + 2 <= bottom)
    {
        if(a[root * 2 + 2] > a[root * 2 + 1])
            maxChild = root * 2 + 2;
        else
            maxChild = root * 2 + 1;
    }
    else
        maxChild = root * 2 + 1;
    if(a[root] < a[maxChild])
    {
      int temp = a[root];
      a[root] = a[maxChild];
      a[maxChild] = temp;
      root = maxChild;
    }
    else
      done = 1;
  }
}

void pyr(int *a, int n)
{
  for (int i = (n / 2) - 1; i >= 0; i--)
    siftd(a, i, n - 1);
  for (int i = n - 1; i >= 1; i--)
  {
    int temp = a[0];
    a[0] = a[i];
    a[i] = temp;
    siftd(a, 0, i - 1);
  }
}

int main()
{
    int n;
    scanf("%d",&n);
    int *a = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    pyr(a, n);
    for(int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if(i<n-1)
        printf(" ");
    }
    free(a);
    printf("\n");
}
