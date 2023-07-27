#include <iostream>
using namespace std;

int main() {
  int arr1[10], arr2[10], arr3[10], arr4[10], arr5[10], arr6[10], arr7[10], arr8[10];
  for (int i = 0; i < 10; i++) {
    // Array a. 1 2 3 4 5 6 7 8 9 10
    arr1[i] = i + 1;

    // Array b. 0 2 4 6 8 10 12 14 16 18
    arr2[i] = i * 2;

    // Array c. 1 4 9 16 25 36 49 64 81 100
    arr3[i] = (i + 1) * (i + 1);

    // Array d. 0 0 0 0 0 0 0 0 0 0
    arr4[i] = 0;

    if (i < 5) {
      // Array e.1,4,9,16,9,7,4,9,11
      arr5[i] = (i + 1) * (i + 1);

      // Array f.0,1,0,1,0,1,0,1,0,1
      arr6[i] = (i == 0 || i == 4 || i == 5) ? (i + 1) : ((i ==6 || i ==8) ? (i -2) : (i -3));

      // Array g.0,1,2,3,4,0,1,2,3,4
      arr7[i] = i %5;
    }

    if (i <9) {
      // Array h.1,1,2,3,5,8,13,21,34,55
      int fibo = (i ==0 || i ==1) ? i : (arr8[i -2] + arr8[i -1]);
      arr8[i] = fibo;
    }

    cout << "arr1[" << i << "]=" << arr1[i] << ", ";
    cout << "arr2[" << i << "]=" << arr2[i] << ", ";
    cout << "arr3[" << i << "]=" << arr3[i] << ", ";
    cout << "arr4[" << i << "]=" << arr4[i] << ", ";
    cout << "arr5[" << i << "]=" << arr5[i] << ", ";
    cout << "arr6[" << i << "]=" << arr6[i] << ", ";
    cout << "arr7[" << i << "]=" << arr7[i] << ", ";
    cout << "arr8[" << i << "]=" << arr8[i] << endl;
   }
}