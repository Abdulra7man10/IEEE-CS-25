#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}

int pairs(int k, int arr[], int n) 
{
    qsort(arr, n, sizeof(int), compare);
    int l = 0, r = 1;
    int result = 0;

    while (r < n) 
    {
        int diff = arr[r]-arr[l];
        if (diff == k) 
        {
            result++;
            l++;
            r++;
        } 
        else if (diff < k)
            r++;
        else 
        {
            l++;
            if (l==r)
                r++;
        }
    }

    return result;
}

int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i=0; i<n; ++i)
        scanf("%d", &arr[i]);

    printf("%d\n", pairs(k, arr, n));
    return 0;
}