#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int main(){
    int arr[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++){
        arr[i] = rand() % 1000 + 1;
    }
    std::cout << "\nPrinting the first loop:\n";
    for (int i = 0; i < 10; i++){
        if (i % 2 == 0){
            std::cout << arr[i] << " ";
        }
    }
    std::cout << "\nPrinting the second loop: \n";
    for (int i = 0; i < 10; i++){
        if (arr[i] % 2 == 0){
            std::cout << arr[i] << " ";
        }
    }
    std::cout << "\nPrintint the third loop: \n";
    for (int i = 9; i >= 0; i--){
        std::cout << arr[i] << " ";
    }
    std::cout << "\nPrinting the fourth loop: \n";
    std::cout << arr[0] << " " << arr[9];


    return 0;
}