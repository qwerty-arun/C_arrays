#include <stdio.h>
int main()
{
    int size = 5, i, t, j;
    int arr[] = { 6, 16, 84, 23, 100 };
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}
