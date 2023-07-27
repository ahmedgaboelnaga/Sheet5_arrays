#include <iostream>

int main(){
    // a. array one
    int arr1[10];
    for (int i = 0; i < 10; i++){
        arr1[i] = i + 1;
    }
    std::cout << "\na. ";
    for (int i = 0; i < 10; i++){
        std::cout << arr1[i] << " ";
    }

    // b. array two
    int arr2[10];
    for (int i = 0; i < 10; i++){
        arr2[i] = 2 * i;
    }
    std::cout << "\nb. ";
    for (int i = 0; i < 10; i++){
        std::cout << arr2[i] << " ";
    }

    // c. array three
    int arr3[10];
    for (int i = 1; i <= 10; i++){
        arr3[i - 1] = i * i;
    }
    std::cout << "\nc. ";
    for (int i = 0; i < 10; i++){
        std::cout << arr3[i] << " ";
    }

    // d. array four
    int arr4[10];
    for (int i = 0; i < 10; i++){
        arr4[i] = 0;
    }
    std::cout << "\nd. ";
    for (int i = 0; i < 10; i++){
        std::cout << arr4[i] << " ";
    }

    // e. arrary five (review again)
    int arr5[10] = {1, 4, 9, 16, 9, 7, 4, 9, 11};
    std::cout << "\ne. ";
    for (int i = 0; i < 9; i++){
        std::cout << arr5[i] << " ";
    }

    // f. array six
    int arr6[10];
    for (int i = 0; i < 10; i++){
        arr6[i] = i % 2;
    }
    std::cout << "\nf. ";
    for (int i = 0; i < 10; i++){
        std::cout << arr6[i] << " ";
    }

    // g. array seven
    int arr7[10];
    for (int i = 0; i < 10; i++){
        if (i < 5){
            arr7[i] = i;
        } else {
            arr7[i] = i - 5;
        }
    }
    std::cout << "\ng. ";
    for (int i = 0; i < 10; i++){
        std::cout << arr7[i] << " ";
    }

    // h. arra eight (review again)
    int arr8[10] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    std::cout << "\nh. ";
    for (int i = 0; i < 10; i++){
        std::cout << arr8[i] << " ";
    }

    return 0;
}