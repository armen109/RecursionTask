#include <iostream>

int num =1;
void printNnum(int N);

int main(){
    int count;

    std::cout << "Enter Your Count :";
    std::cin>>count;

    printNnum(count);
}

void printNnum(int N) {
    if (num > N) {
        return;
    }

    std::cout << num << " ";
    num++;

    printNnum(N); 
}