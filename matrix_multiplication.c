#include <stdio.h>
#include <stdlib.h>
int n;
void matrix_multiplication(float a[][n],float b[][n],int);
int main()
{
    printf("Enter size of nxn matrix: \n");
    scanf("%d", &n);
    float a[n][n],b[n][n];
    printf("Enter the elements of the first array: \n");
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
                {
                        scanf("%f",&a[i][j]);
                }
    }
    printf("Enter the elements of the second array: \n");
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
                {
                        scanf("%f",&b[i][j]);
                }
    }
    printf("The first matrix: \n");
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    printf("%.2f ",a[i][j]);
            }
            printf("\n");
    }
    printf("\n");
    printf("The second matrix: \n");
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    printf("%.2f ",b[i][j]);
            }
            printf("\n");
    }
    printf("\n");
matrix_multiplication(a,b,n);
return 0;
}
void matrix_multiplication(float a[][n],float b[][n],int n)
{
float result[n][n];
for(int i=0;i<n;i++)
{
        for(int j=0;j<n;j++)
        {
        result[i][j]=0.0;
                for(int k=0;k<n;k++)
                {
                        result[i][j]+=a[i][k]*b[k][j];
                }
        }
}
printf("The resultant matrix: \n");
for(int i=0;i<n;i++)
{
        for(int j=0;j<n;j++)
        {
                printf("%.2f ",result[i][j]);
        }
        printf("\n");
}
}
