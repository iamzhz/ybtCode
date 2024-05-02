#include <iostream>
using std::cin;
using std::cout;
int howMuch(int all, int each, int price);
int main(void) {
    int n,
        n1, p1,
        n2, p2,
        n3, p3;
    int total, total2, total3;
    cin >> n >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;
    total = howMuch(n, n1, p1);
    total2 = howMuch(n, n2, p2);
    total3 = howMuch(n, n3, p3);
    // compare
    if(total > total2) total = total2;
    if(total > total3) total = total3;
    cout << total;
    return 0;
}
int howMuch(int all, int each, int price) {
    int r = all % each;
    int bags = all / each;
    if(r) bags += 1;
    return price * bags;
}