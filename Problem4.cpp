#include <iostream>
#include <iomanip>

int main(){
    int arr1[5][4] = {
        {3, 5, 3, 2},
        {4, 5, 3, 2},
        {3, 2, 5, 3},
        {2, 5, 6, 3},
        {3, 6, 3, 2}
    };
    int arr2[5][4] = {
        {3, 2, 3, 6},
        {3, 6, 7, 4},
        {2, 4, 7, 3},
        {1, 4, 6, 7},
        {2, 1, 5, 3}
    };
    int arr_sum[5][4];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            arr_sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Printing the values
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            std::cout << std::setw(5) << arr_sum[i][j];
        }
        std::cout << "\n";
    }
    return 0;
}