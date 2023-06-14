#include <stdio.h>
#include <stdlib.h>
void trace(int *,int);
int main()
{
        int n;
        printf("Enter the size of the n x n matrix: ");
        scanf("%d",&n);
        int arr[n][n];
        int *p=(int *)malloc(n*sizeof(int));
        printf("Enter elements in the array: \n");
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        scanf("%d",&arr[i][j]);
                }
        }
for(int i=0;i<n;i++)
{
        p[i]=arr[i][i];
}
trace(p,n);
free(p);
}
void trace(int *q,int n)
{
        int trace=0;
        for(int i=0;i<n;i++)
        {
                trace+=q[i];
        }
        printf("The trace of the matrix: %d",trace);
        printf("\n");
}
