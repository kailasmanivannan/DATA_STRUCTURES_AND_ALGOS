#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector <int> &arr,int ele){
    int ans = -1;
    for(int i =0;i<arr.size();i++){
      if(ele==arr[i]){
        ans=i;
        break;
      }
    }
    return ans;
}
int main(){
  vector <int> arr ={5,4,1,9,8,7,2,3};
  int a = linearsearch(arr,9);
  if(a==-1){
    cout<<"element not found";
  }
  else
    cout<<"element at "<<a+1;
  return 0;
}