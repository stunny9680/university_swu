#include <iostream>
using namespace std;
#include <cmath>
#include <limits>
int main(){
    double a,b,c;
    //Въвеждам стойности на a,b,c
    cout << "Въведете стойности на a,b,c";
    cin >> a >> b >> c;
    while (cin.fail() || (a==0 && b==0 && c==0)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Не е въведена валидна стойност за a,b или c! a,b,c > 0";
        cin >> a >> b>>c;
    }
    double D = sqrt(b) - 4*a*c;
    if (D >0 ){
        double x1 = (-b + sqrt(D)) / (2*a);
        double x2 = (-b - sqrt(D)) / (2*a);
        cout << "Уравнението има два реални корена" << x1 << " , " << x2 << endl;
    } else if (D == 0) {
        // Един реален корен
        double x = -b / (2*a);
        cout << "уравнението има един реален корен" << x << endl;
    } else {
        // няма реален корен
        cout << "уравнението няма реален корен";
    }
    return 0;
}
