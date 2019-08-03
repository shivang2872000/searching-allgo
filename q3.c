#include<stdio.h>
int main(){
  int n,i;
  printf("enter number of elements\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int j,flag;
  for(i=0;i<n;i++){
    flag=0;
    for(j=0;j<i;j++){
        if(a[j]>=a[i]){
        flag=1;
        break;
        }
      }
      for(j=i+1;j<n;j++){
      if(a[j]<=a[i]){
      flag=1;
      break;
      }
    }
      if(flag==0){
      printf("index of the number and the bumber are %d and %d\n",i,a[i]);
      return 0;
    }
      else{
          printf("tHERE IS NO SUCH ELEMENT");
          return 1;
        }
}
}
