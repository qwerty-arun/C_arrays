# include <stdio.h>
int main()
{
  int min,t,size,j;
  printf("Enter the size of the array: \n");
  scanf("%d",&size);
  int a[size];
  printf("Enter the elements of the array: \n");
  for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
  for(int i=0;i<size-1;i++)
  {
    min=i;
    for(j=i+1;j<size;j++)
    {
      if(a[j]<a[min])
      {
        min=j;
      }
    }
    t=a[i];
    a[i]=a[min];
    a[min]=t;
  }
  printf("The array arranged in ascending order using selection sort technique: \n");
  for(int i=0;i<size;i++)
    printf("%d ",a[i]);
 }
