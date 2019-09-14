#include <iostream>

long shifted( long l ) {
    return l << 24;
}

int main(int argc, const char * argv[]) {
    std::cout << shifted( 1 ) << "\n";
    std::cout << std::hex << shifted( 0xFA151F1AB1E ) << "\n";
}
