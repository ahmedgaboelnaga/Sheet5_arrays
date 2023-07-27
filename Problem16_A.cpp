#include <iostream>
#include <iomanip>

int main(){
    // Creating thr array
    int arr[5][5];
    for (int i = 0; i < 5; i++){
        for (char j = 0; j < 5; j++){
            if (i == j){
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
        }
    }

    // Printing the array
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            std::cout << std::setw(3) << arr[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}