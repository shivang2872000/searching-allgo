#include<stdio.h>
#include<stdlib.h>
int main()
{
  int element,n,i;
  printf("Enter no of Elements\n");
  scanf("%d\n",&n);
  int arr[n];
  for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
  printf("Enter element\n");
  scanf("%d",&element);
  for(i=0;i<n;i++)
  {
     if(arr[i]>=element)
     {
         printf("Smaller Number %d\n",arr[i-1]);
         printf("Greater or ewual to %d\n",arr[i]);
         break;     }
  }
}
