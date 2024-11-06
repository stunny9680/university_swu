/* да се изведе на екран фигурата
елха от *
 */
#include <iostream>
using namespace std;
int main(){
    int height;
    cout << "височина";
    cin >> height;
    for(int i= 1; i<=height; ++i){
        for(int y=0; y<height -i; ++y){
            cout << " ";
        }
        for (int h= 0; h <2 * i -1; h++){
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}
