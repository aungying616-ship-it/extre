#include<iostream>
using namespace std;

int main(){
  int n = 0;
  int a;
  int arr[101];
  int sum = 0;
  cin >> n;
  for(int i = 0;i<n;i++){
    cin >> a;
    arr[i] = a;
  }
  for(int i=0;i<n;i++){
    for(int j = i+1;j<n;j++){
      if(arr[i]==arr[j]){
        arr[i] = 0;
        arr[j] = 0;
      }
    }
  }
  for(int i=0;i<n;i++){
    sum += arr[i];
  }
  cout << sum;
}
