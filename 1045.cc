#include <iostream>
using std::cin;
using std::cout;
int main(void) {
    int l, e;
    cin >> l >> e;
    if(l >= 10 || e >= 20) cout << "1";
    else cout << "0";
    return 0;
}
