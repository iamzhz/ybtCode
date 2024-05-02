#include <iostream>
#include <string>
using std::string;
int main(void) {
    int n;
    string info;
    std::cin >> n;
    
    if(n > 0) info = "positive";
    else if(n == 0) info = "zero";
    else info = "negative";

    std::cout << info;
    return 0;
}
