#include <iostream>

int main(){
    // Array one
    int row1, col1, row2, col2;
    std::cout << "Enter the number of rows in the first array: ";
    std::cin >> row1;
    std::cout << "Enter  the number of colums in the second array: ";
    std::cin >> col1;
    int **arr1 = new int *[row1];
    for (int i = 0; i < row1; i++){
        arr1[i] = new int[col1];
    }
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col1; j++){
            std::cout << "Enter the number at (" << i + 1 << " , " << j + 1 << ") of the first array: ";
            std::cin >> arr1[i][j];
        }
    }

    // Array two
    std::cout << "Enter the number of rows in the second array: ";
    std::cin >> row2;
    std::cout << "Enter the number of columns in the second array: ";
    std::cin >> col2;

    if (col1 != row2)
    {
        std::cout << "Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix." << std::endl;

        // Freeing up the memory
        for (int i = 0; i < row1; i++){
            delete[] arr1[i];
        }
        delete[] arr1;

        return 0;
    }

    int **arr2 = new int *[row2];
    for (int i = 0; i < row2; i++){
        arr2[i] = new int[col2];
    }
    for (int i = 0; i < row2; i++){
        for (int j = 0; j < col2; j++){
            std::cout << "Enter the number at (" << i + 1 << " , " << j + 1 << ") of the second array: ";
            std::cin >> arr2[i][j];
        }
    }

    // Creatint the result array
    int ** multiplied = new int *[row1];
    for (int i = 0; i < row1; i++){
        multiplied[i] = new int [col2];
    }

    // Multiplying the arrays
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            int sum = 0;
            for (int k = 0; k < col1; k++){
                sum += arr1[i][k] * arr2[k][j];
            }
            multiplied[i][j] = sum;
        }
    }

    // Printing the result array
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            std::cout << multiplied[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Freeing up the memory
    for (int i = 0; i < row1; i++){
        delete[] arr1[i];
        delete[] multiplied[i];
    }
    delete[] arr1;
    delete[] multiplied;

    for (int i = 0; i < row2; i++){
        delete[] arr2[i];
    }
    delete[] arr2;

    return 0;
}