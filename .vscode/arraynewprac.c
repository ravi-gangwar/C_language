#include <stdio.h>
int main(){
  int arr[] = {-4,-1,3,7,10,11};
  int a = sizeof(arr);
  for(int i=0; i<a; i++){
  printf("%d\n", arr[i]);
  }
}