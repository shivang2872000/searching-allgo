#include<stdio.h>
#include<stdlib.h>
void binarysearch(int *arr, int start, int end)
{
  if (start==end)
  {
    printf("element repeating odd number of times is %d\n ", arr[start]);
    return;
  }
  int mid = (start+end)/2;
  if (mid%2 == 0)
    {
      if (arr[mid] == arr[mid+1])
      binarysearch(arr, mid+2, end);
      else
      binarysearch(arr, start, mid);
    }
    else
    {
      if (arr[mid] == arr[mid-1]){
      binarysearch(arr, mid+1, end);
    }
      else{
        binarysearch(arr, start, mid-1);
        }
  }
}
int main(){
  int n;
  printf("enter the size of the array and it should be odd\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  int i=0,arr[n];
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  binarysearch(arr,0,n);
  return 0;
}
