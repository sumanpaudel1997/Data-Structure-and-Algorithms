#include <iostream>

int main(){

    int x;
    std::cout << "Enter the number: ";
    std::cin >> x;

    // std::cout << (x > 55 ? true);
    if (x > 10){
        std::cout << "Please enter a valid number";
    }
    else{
        std::cout << x; 
    }
}