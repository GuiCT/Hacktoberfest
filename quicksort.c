#include <stdio.h>

void printArray(int arr[], int n)
{
    printf("The elements of array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        } 

        while (arr[j] > pivot)
        {
            j--;
        } 

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quicksort(int arr[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex= partition(arr, low, high);
        quicksort(arr, low,partitionIndex-1);
        quicksort(arr, partitionIndex + 1, high);
    }
}

int main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int low = 0, high = n - 1;

    printArray(arr, n);
    quicksort(arr, low, high);
    printArray(arr, n);
    return 0;
}