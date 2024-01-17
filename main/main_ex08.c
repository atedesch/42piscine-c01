#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
    int arr[] = {4, 2, 8, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array prima del sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ft_sort_int_tab(arr, size);

    printf("Array dopo il sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
