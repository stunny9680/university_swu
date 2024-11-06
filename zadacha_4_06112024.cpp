#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b, rezultat;
    char operaciq;
    
    cout << "Въведете първото число: ";
    cin >> a;
    cout << "Въведете второто число: ";
    cin >> b;
    cout << "Въведете операцията: ";
    cin >> operaciq;
    
    switch (operaciq){
        case '+': rezultat = a + b; cout << "Резултат:a+b=" << rezultat<< endl; break;
        case '-': rezultat = a - b; cout << "Резултат:a-b=" << rezultat<< endl; break;
        case '*': rezultat = a * b; cout << "Резултат:a*b=" << rezultat<< endl; break;
        case '/': if(a || b !=0){
            rezultat = a / b; cout << "Резултат:a/b=" << rezultat<< endl;
            
        } else {
            cout << "Грешка - деление на нула";
        }
            break;
            //rezultat = a / b; cout << "Резултат:a/b=" << rezultat<< endl; break;
    }
    return 0;
}
