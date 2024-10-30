// Created by Stanislav Iliev
// Date: 30.10.2024
// University SWU
/*
  По зададени кординати цели числа,
  на две точки в равнината да се изведе дължината
  на отсечката свърваща тези две точки с краища точките.
  По дължините на страните на abc изведете лицето му.
#include <iostream>
#include <cmath>
using namespace std;
 int main(){
    int xA, yA, xC, yC, xB, yB;
    double AB;
    double BC;
    double AC;
    cout << "xA= ";
    cin >>xA;
    cout << "xB= ";
    cin >>xB;
    cout << "yA= ";
    cin >>yA;
    cout << "yB= ";
    cin >>yB;
    cout << "yC= ";
    cin >>yC;
    cout << "xC= ";
    cin >>xC;
    AB =sqrt(pow((xA-xB),2)+pow((yA-yB),2));
              cout << AB<< ",";
    BC =sqrt(pow((xC-xB),2)+pow((yC-yB),2));
           cout << BC<< ",";
    AC =sqrt(pow((xA-xC),2)+pow((yA-yC),2));
           cout << AB << "," << endl;
    int p = 0;
    double S;
     p = (AB + BC + AC);                                // Формула за периметър
     cout << "периметър= " << p << endl;
     S = sqrt(p*(p-AB)*(p-BC)*(p-AC));                  // Формула за лице на триъгълник
     cout << "лице = " << S;
    return 0;
}
