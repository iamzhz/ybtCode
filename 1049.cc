#include <iostream>
using std::cin;
using std::cout;
int main(void) {
    int d;
    cin >> d;
    if(d != 1 && d != 3 && d != 5) cout << "YES";
    else cout << "NO";
    return 0;
}
