#include <iostream>

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a=10, b=20;
    std::cout<<a<<" "<<b<<" \n";
    Swap(&a, &b);
    std::cout<<a<<" "<<b<<" \n";
    return 0;
}
