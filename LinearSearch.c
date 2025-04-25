//Linear Search
#include<stdio.h>
int main(){
    int n;
    printf("Enter (number of element) n : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d element : ", n);
    for(int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int element, j;
    printf("Element to search  : ");
    scanf("%d", &element);

    //find the element
    for(j = 0;j<n;j++){
        if(element == arr[j]){
            printf("Element found at position %d.", j+1);
            break;
        }
    }
    if(j==n)
    printf("element not found\n");
    return 0;
}