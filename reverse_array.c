#include <stdio.h>
#include <stdlib.h>
int main()
{
        unsigned int n;
        printf("\nEnter the no. of elements in an array: ");
        scanf("%u",&n);
        int *p=(int *)malloc(n*sizeof(int));
        printf("\nEnter the elements in the array: ");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&p[i]);
        }
        printf("\nThe array: ");
        for(int i=0;i<n;i++)
        {
        printf("%d ",p[i]);
        }
        int t;
        for(int i=0;i<n/2;i++)
        {
        t=p[i];
        p[i]=p[n-1-i];
        p[n-1-i]=t;
        }
printf("\nThe array after reversing: ");

        for(int i=0;i<n;i++)
        {
        printf("%d ",p[i]);
        }
free(p);
}
