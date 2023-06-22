#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf
        ("Suppose a[]={1,2,3,4,5}, left shifting once would modify the array to a[]={2,3,4,5,1} \n");
    int n;
    printf("Enter the no. of elements in the array: \n");
    scanf("%d", &n);
    int *p = (int *) malloc(n * sizeof(int));
    printf("Enter the elements in the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    printf("The array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", p[i]);
    printf("\n");
    int t, index = n-1;
    for (int i = 0; i < n; i++) {
        t = p[index];
        p[index] = p[0];
        p[0] = t;
        index--;
    }
    printf("Right shifted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", p[i]);
    printf("\n");
    free(p);
}
