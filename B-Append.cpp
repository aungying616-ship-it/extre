#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[101] = { 0 };
    int result[101] = { 0 };
    int a, x;
    int count = 0;

    for (int i = 0; i < N; i++) {
        cin >> a >> x;

        if (a == 1) {
            arr[count] = x;
            count++;
        }
        else if(a==2) {
            result[i] = arr[count - x];
        }
    }

    for (int i = 0; i < N; i++) {
        if (result[i] != 0) {
            cout << result[i] << endl;
        }
    }
}
