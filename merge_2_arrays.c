# include <stdio.h>
int main()
{
  int m,n;
  printf("Enter the sizes of the arrays which are to be merged: \n");
  scanf("%d%d",&m,&n);
  int a1[m],a2[n],a3[m+n];
  printf("Enter elements of the first array: \n");
  for(int i=0;i<m;i++)
    scanf("%d",&a1[i]);
  printf("Enter elements of the second array: \n");
  for(int i=0;i<n;i++)
    scanf("%d",&a2[i]);
  for(int i=0;i<m;i++)
  a3[i]=a1[i];
  int k=m;
  for(int j=0;j<n;j++)
  {
    a3[k]=a2[j];
  k++;
  }
  printf("The merged array: \n");
  for(int i=0;i<m+n;i++)
    printf("%d ",a3[i]);
printf("\n");
}
