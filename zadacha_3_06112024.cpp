#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int h1,m1,s1; // Продължителност на полет
    int h2,m2,s2; // Час на излитане
    
    cout << "въведете подължителността на полета във формата ЧАС:МИНУТИ:СЕКУНДИ"<< endl;
    cin >> h1 >> m1 >> s1;
    cout << "въведете часа на излитане на полета във формата ЧАС:МИНУТИ:СЕКУНДИ"<< endl;
    cin >> h2 >> m2 >> s2;
    
    int sec = s2 + s1;
    int min = m2 + m1 + (sec/ 60);
    int hour = h2 + h1 + (min /60);
    
    sec %= 60;
    min %= 60;
    hour %=24;
    cout << "Час на кацане: " << hour << ":";
    cout << (min <10 ? "0" : "") << min << ":";
    cout << (sec <10 ? "0" : "") << sec << endl;
    
    return 0;
}
