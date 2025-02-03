#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n], c2 = 0, c;
    if (1 <= k <= n <= 50)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            // 0 ≤ ai ≤ 100
            if (0 <= a[j] <= 100)
            {
                if (j == (k - 1))
                { // finding the k-th number to compare
                    c = a[j];
                }
            }
        }
        // scanf("")
        for (int k = 0; k < n; k++)
        {
            if (0 <= a[k] <= 100)
            {
                if (a[k] > 0)
                {
                    if (a[k] >= c)
                    {
                        c2++;
                    }
                }
            }
        }
    }
    printf("%d\n", c2);

    return 0;
}