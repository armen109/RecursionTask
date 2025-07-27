#include <iostream>

int foo(int i){
    if(i == 0) return 0;
    if (i == 1) return 5;
    if (i == 2) return 3;
    if (i == 3) return 4;
    if (i == 4) return 4;
    return foo(i - 5) * foo(i-4) + foo(i-2);
}

int main(){
    int n;
    std::cout << "Enter the index :";
    std::cin >> n;

    std::cout << foo(n);

    return 0;
}
