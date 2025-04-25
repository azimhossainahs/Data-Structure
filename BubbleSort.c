#include <stdio.h>
int main()
{
    int n;
    printf("Enter (number of element) n : ");
    scanf("%d", &n);
    if (n < 0)
        return 1;
    int arr[n];
    printf("Enter %d element : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // sort the entire array
}