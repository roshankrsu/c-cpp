#include <stdio.h>

long long c = 0;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void heapify(int a[], int n, int i)
{
    int largest = i, l = 2 * i + 1, r = 2 * i + 2;

    if (l < n)
    {
        c++;
        if (a[l] > a[largest])
            largest = l;
    }
    if (r < n)
    {
        c++;
        if (a[r] > a[largest])
            largest = r;
    }

    if (largest != i)
    {
        swap(&a[i], &a[largest]);
        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    for (int i = n - 1; i > 0; i--)
    {
        swap(&a[0], &a[i]);
        heapify(a, i, 0);
    }
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    heapSort(a, n);

    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nNumber of comparisons = %lld\n", c);
    return 0;
}
