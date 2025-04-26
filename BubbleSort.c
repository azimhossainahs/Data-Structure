#include <stdio.h>
int main()
{
    int n;
    printf("Enter (number of element) n : ");
    scanf("%d", &n);
    if (n < 0)
        return 1;
    int arr[n];
    printf("Enter %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // sort the entire array
    for(int i = 0; i< n-1;i++){
        for(int j = i;j< n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}