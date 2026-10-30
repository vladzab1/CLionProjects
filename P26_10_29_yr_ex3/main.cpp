#include <iostream>
void print_bit(unsigned number) {
    for (int i = 31; i >= 0; i--) {
        std::cout << ((number >>i)&1);
    }
    std::cout << std::endl;
}
int main() {
    /*
     a&mask
     a|mask
     a
     */
    // int a =5, b = 10;
    // int c = a&b;
    // std::cout << c << std::endl;

    int num = 15;
    print_bit(num);
    num = num << 8;
    print_bit(num);
    num = num | 63;
    print_bit(num);



}