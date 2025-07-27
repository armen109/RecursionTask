#include <iostream>
#include <string>

bool palindromeRecursive(const std::string& word, int start, int end){
    if(end <= start) return true;

    if(word[start] != word[end]) return false;

    return palindromeRecursive(word,start + 1,end - 1);
}

bool checkThePalindromness(const std::string& word){
    return palindromeRecursive(word, 0, word.length()-1);
}

int main(){
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;


    if(checkThePalindromness(input)==true){
        std::cout << "It's palindrome word";
    }else {
        std::cout << "It's not palindrome word";
    }

    return 0;
}