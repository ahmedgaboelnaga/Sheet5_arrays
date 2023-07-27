#include <iostream>

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++){
        std::cout << "Enter the #" << i + 1 << " element of the array: ";
        std::cin >> arr[i];
    }

    int temp;
    for (int i = 0; i < 5 - 1; i++){
        for (int j = 0; j < 5 - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}