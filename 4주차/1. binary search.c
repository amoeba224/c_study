#include <stdio.h>

int n, q;
int arr[100000];
int brr[100000];

int binarySearch(int arr[], int low, int high, int idx){

  if(low > high){
    return -1;
    
  } else if(low == high){
    if(arr[low] == idx){
      return 1;
    } else {
      return -1;
    }
    
  } else { // low < high
    int mid=(low+high)/2;

    if(idx==arr[mid]){
      return 1;
            
    } else if(idx<arr[mid]){
      return binarySearch(arr, low, mid-1, idx);
            
    } else if(idx>arr[mid]){
      return binarySearch(arr, mid+1, high, idx);
    } 
  }
  return -1;
}


int main(void) {
  
  scanf("%d %d", &n, &q);
  
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  
  for(int j=0; j<q; j++){
    scanf("%d", &brr[j]);
  }

  for(int k=0; k<q; k++){
    int idx = binarySearch(arr, 0, n-1, brr[k]);
    if(idx==1){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}