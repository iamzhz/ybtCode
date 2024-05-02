#include <iostream>
using std::cin;
using std::cout;
int main(void) {
    int c, m;
    cin >> c >> m;
    if(c < 60 ^ m < 60) cout << 1;
    else cout << 0;
    return 0;
}
