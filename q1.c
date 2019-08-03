#include<stdio.h>
#include<time.h>
int main(){
  int n,i,element,count=0;
  printf("enter size of the array\n");
  scanf("%d",&n);
  int arr[n];
  printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
      printf("enter the element to search\n");
      scanf("%d",&element);
      int first,last;
      first=clock();
        int start,mid,end;
        start=0;
        end=n-1;
        while(start<=end)
          {
            mid=(start+end)/2;
            count++;
            if(arr[mid]==element){
                break;
              }
            count++;
            if(arr[mid]<element){
              start=mid+1;
              }
            count++;
            if(arr[mid]>element){
            end=mid-1;
            count++;
         }
}
      last=clock();
      int time;
      time=last-first;
      printf("time for algorithm is %d\n",time);
      printf("number of comparisons following the given binary search are %d\n",count);
      return 0;

}
