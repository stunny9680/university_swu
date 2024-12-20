/* 
TO DO:
1. To add GCD 
2. To fix array adding numbers to the new array.
*/
#include <iostream>
using namespace std;
void arr1i(int a, int b) {

}
void arr_1_2(int c[][5], int a1[], int a2[], int n) {
    for (int a = 0;a < n;a++) {
        cin >> a1[a];
        cin >> a2[a];
        c[0][a] = a1[a];
        c[1][a] = a2[a];
    }
}
void arr_1_3(int c[][5], int n) {
    for (int b = 0;b < 2;b++) {
        for (int a = 0;a < n;a++)
            cout << c[b][a] << " ";
        cout << endl;
    }
}
int main() {
    int a1[5], a2[5], c[2][5], n;
    cin >> n;
    arr_1_2(c, a1, a2, n);
    arr_1_3(c, n);
    return 0;
}

