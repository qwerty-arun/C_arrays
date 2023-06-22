#include <stdio.h>
#include <stdlib.h>
int main()
{
        printf("Suppose a[]={1,2,3,4,5}, right shifting once would modify the array to a[]={5,1,2,3,4} \n");
        int n;
        printf("Enter the no. of elements in the array: \n");
        scanf("%d",&n);
        int *p=(int*)malloc(n*sizeof(int));
        printf("Enter the elements in the array: \n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&p[i]);
        }
        printf("The array: \n");
        for(int i=0;i<n;i++)
                printf("%d ",p[i]);
        printf("\n");
        int t,index=0;
        for(int i=0;i<n;i++)
        {
                t=p[index];
                p[index]=p[n-1];
                p[n-1]=t;
                index++;
        }
        printf("Right shifted array: \n");
        for(int i=0;i<n;i++)
                printf("%d ",p[i]);
        printf("\n");
}
