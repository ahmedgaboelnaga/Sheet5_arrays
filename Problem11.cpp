#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(NULL));
    int randoms[10];
    for (int i = 0; i < 10; i++){
        randoms[i] = (rand() % 100) + 1;
    }

    for (int i = 0; i < 10; i++){
        std::cout << std::setw(3) << randoms[i] << " ";
    }

    return 0;
}