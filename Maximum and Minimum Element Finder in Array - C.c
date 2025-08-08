//Done by Sharvesh on 08/08/2025

#include <stdio.h>

int main()
{
  int n,i,arr[50],min,max;
  
  printf("Enter the number of Elements:");
  scanf("%d",&n);
  
  for(i=0; i<n; i++)
  {
      printf("Enter the Element %d:",i);
      scanf("%d",&arr[i]);
     
  }
  
  max=arr[0];
  min=arr[0];
  
  for(i=1; i<n; i++)
  {
      if(arr[i]>max)
      {
          max=arr[i];
      }
      if(arr[i]<min)
      {
          min=arr[i];
      }
  }
  printf("The maximum of array:%d\n",max);
  printf("The minimum of array:%d",min);
}