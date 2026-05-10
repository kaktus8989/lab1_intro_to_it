#include <iostream>
#include <cmath>

using namespace std;
double f(double x, double y, double z) {
    double term1 = pow(x - y, 2);        
    double term2 = pow(z - x, 2);        
    double term3 = pow(z - x - y, 2);    
    
    return term1 + term2 + term3;
}

int main() {
    double a, b, c;
    
    cout << "¬ведите значение a: ";
    cin >> a;
    cout << "¬ведите значение b: ";
    cin >> b;
    cout << "¬ведите значение c: ";
    cin >> c;
    
    double f_abc = f(a, b, c);                     
    double f_aplusb = f(a + b, b + c, c + a);      
    double f_aminusb = f(a - b, b - c, c - a);    
    
    double result = (f_abc * f_aplusb) / f_aminusb;
    
    cout << "\n–езультаты вычислений:" << endl;
    cout << "f(a, b, c) = f(" << a << ", " << b << ", " << c << ") = " << f_abc << endl;
    cout << "f(a+b, b+c, c+a) = f(" << a+b << ", " << b+c << ", " << c+a << ") = " << f_aplusb << endl;
    cout << "f(a-b, b-c, c-a) = f(" << a-b << ", " << b-c << ", " << c-a << ") = " << f_aminusb << endl;
    cout << "\n»тоговое выражение:" << endl;
    cout << "[f(a,b,c) * f(a+b,b+c,c+a)] / f(a-b,b-c,c-a) = " << result << endl;
    
    return 0;
}

