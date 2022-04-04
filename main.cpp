#include <iostream>
using namespace std;

int main() {
    int n=0, num_0=0, num_1=1, num_2;
    cin >> n;
    for (num_2=0; num_2<=n; num_2++) {
        num_2=num_0+num_1;
        if (num_2<=n) {
            cout << num_2 << endl;
        }
        num_1=num_0;
        num_0=num_2;
    }

    return 0;
}
