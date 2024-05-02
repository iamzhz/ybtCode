#include <iostream>
int main(void) {
    double a, b, r;
    int k = 0;
    std::cin >> a >> b;
    while(1) {
        r = a - k * b;
        if(r >= 0 && r < b) break;
        k ++;
    }
    std::cout << r;
}
