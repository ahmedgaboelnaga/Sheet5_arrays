#include <iostream>

int main(){
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int *arr = new int[size];
    int zero_counter = 0;
    for (int i = 0; i < size; i++){
        std::cout << "Enter teh #" << i + 1 << " element: ";
        std::cin >> arr[i];
        if (arr[i] == 0){
            zero_counter++;
        }
    }

    std::cout << "The number of zeros in the array: " << zero_counter << std::endl;

    return 0;
}