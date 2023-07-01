# include <stdio.h>
int main()
{
  int lb=0,size;
  printf("Enter the size of the array: \n");
  scanf("%d",&size);
  int ub=size;
  int a[size],min,t;
  int mid=(ub+lb)/2;
  printf("Enter elements of the array: \n");
  for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size-1;j++)
    {
      if(a[i]>a[j])
      {
        min=a[j];
        t=a[i];
        a[i]=min;
        min=t;
      }
    }
  }
  printf("Enter the key element to be searched \n");
  int key;
  scanf("%d",&key);

  while(lb<=ub)
  {
   if(key<a[mid])
   {
ub=mid-1;
   }
   if(key>a[mid])
   {
     lb=mid+1;
   }

   mid=(lb+ub)/2;
  }
  if(key==a[mid])
        {
         printf("Key element %d found \n",key);
            }
}
