#include <iostream>

int main(){

    std::string name;
    int age;
    std::cout << "What is age?:";
    std::cin >> age;
    std::cout << "What is you name?:" << "\n";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hi " << name;
}
