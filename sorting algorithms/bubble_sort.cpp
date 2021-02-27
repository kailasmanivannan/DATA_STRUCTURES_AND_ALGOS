#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[] = {5,1,4,7,6,9,3,2,7,2,3};
  int s = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<s-1;i++){
    for(int j =0;j<s-i-1;j++){
      if(arr[j]>=arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
  for(int i:arr){
    cout<<i;
  }
  return 0;
}