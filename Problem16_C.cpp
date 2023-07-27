#include <iostream>
#include <iomanip>

int main(){
    // Creating thr array
    char arr[5][5];
    for (char i = 'A'; i < 'F'; i++){
        for (char j = 'A'; j < 'F'; j++){
            if (i == j){
                arr[i - 'A'][j - 'A'] = i;
            } else {
                arr[i - 'A'][j - 'A'] = ' ';                
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