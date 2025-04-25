#include <stdio.h>
int main()
{
    // Binary search
    int n;
    printf("Enter (number of element) n : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d element : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Element to search  : ");
    scanf("%d", &element);

    // sort the entire array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Appling binary search
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] < element){
            l = mid + 1;
        }else if(arr[mid] == element)
        {
            printf("%d Found",element);
            break;
        }else{
            h = mid -1;
        }
        
    }
}