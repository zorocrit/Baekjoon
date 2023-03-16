#include <iostream>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;

    int ans[5];
    cin >> ans[0] >> ans[1] >> ans[2] >> ans[3] >> ans[4];
    int sum = a * b;

    cout << ans[0] - sum << " " << ans[1] - sum << " " << ans[2] - sum << " " << ans[3] - sum << " " << ans[4] - sum << endl;
    return 0;
}