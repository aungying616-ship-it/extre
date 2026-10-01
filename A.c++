#include<iostream>
using namespace std;

int main (){
  int N,M;
  int count = 0;
  cin >> N >> M;
  while (M != 0){
    M = N%M;
    count++ ;
  }
  cout << count << endl;
}
