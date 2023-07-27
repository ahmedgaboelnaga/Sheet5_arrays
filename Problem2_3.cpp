#include <iostream>

int main(){
    int max = 0, min = 0;
    int num[10];
    for (int i = 0; i < 10; i++){
        std::cout << "Enter the #" << i + 1 << " number: ";
        std::cin >> num[i];
        if (i == 0){
            max = num[i];
            min = num[i];
        }
        if (num[i] > max){
            max = num[i];
        }
        if (num[i] < min){
            min = num[i];
        }
    }

    std::cout << "\nThe largest number is: " << max;
    std::cout << "\nThe smalles number is: " << min;

    return 0;
}