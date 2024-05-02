#include <iostream>
using std::cin;
using std::cout;
int main(void) {
    int x;
    cin >> x;
    if(!(x%15)) cout << "YES";
    else cout << "NO";
    return 0;
}
