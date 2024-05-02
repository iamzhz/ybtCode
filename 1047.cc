#include <iostream>
using std::cin;
using std::cout;
int main(void) {
    int x, isOkay = 0;
    cin >> x;
    if(!(x%3)) {
        cout << "3 ";
        isOkay = 1;
    }
    if(!(x%5)) {
        cout << "5 ";
        isOkay = 1;
    }
    if(!(x%7)) {
        cout << "7";
        isOkay = 1;
    }
    if(!isOkay) cout << 'n';
    
    return 0;
}
