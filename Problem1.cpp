#include <iostream>

int main(){
    int nums[5];
    for (int i = 0; i < 5; i++){
        std::cout << "Enter the #" << i + 1 << " nubmer: ";
        std::cin >> nums[i];
    }
    std::cout << "\n";
    for (int i = 0; i < 5; i++){
        std::cout << "The #" << i + 1 << " nubmer: " << nums[i] << "\n";
    }
    return 0;
}