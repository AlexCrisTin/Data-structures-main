#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    int minx = array[0];
    for (int i = 1; i < n; ++i) {
        minx = min(minx, array[i]);
    }
    cout << minx << endl;

    return 0;
}