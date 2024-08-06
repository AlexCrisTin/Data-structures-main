#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    int maxx = array[0];
    for (int i = 1; i < n; ++i) {
        maxx = max(maxx, array[i]);
    }
    cout << maxx << endl;

    return 0;
}
