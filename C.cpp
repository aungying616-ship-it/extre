#include<iostream>
using namespace std;

int p[200005];
int a[200005];
int last[200005];

int main(){
  int n,q;
  cin >> n >> q;
  for(int i = 1;i<=n;i++){
    cin >> p[i];
  }
  for(int i = 1;i<=q;i++){
    cin >> a[i];
    last[a[i]] = i;
  }

  bool first = true;

  for(int i = 1;i<=n;i++){
    if(last[p[i]] == 0){
      if(!first) cout << " ";
      cout << p[i];
      first = false;
    }
  }
  for(int i = 1;i<=q;i++){
    if(last[a[i]] == i){
      if(!first) cout << " ";
      cout << a[i];
      first = false;
    }
  }
  cout << "\n";
  return 0;
}
