#include "zadacha2.hpp"
#include <iostream>
#include <cmath>
using namespace std;

int a,b,c,s;
int main(){
    cin >> a >> b >> c;
    if (a>0, b>0, c>0 && a+b>c && b+c>a && a+c>b){
        double p = (a+b+c) / 2.0;
        s= sqrt(p*(p-a)*(p-b)*(p-c));
        cout << "S= " << s << " ";
    }
    else {
        cout << "Не съществува";
    }
    return 0;
}
