#include <iostream>
#include <cmath>
using namespace std;

double F(double x, double y){
    return (2*x-y);
}

int main() {
    double a=1; double b=3; double h=0.2;
    double n=(b-a)/h;
    double X[(int)n]; double Y[(int)n];
    X[0]=a; Y[0]=3;
    for(int i=1; i<=n; i++){
        X[i]=a+i*h;
        Y[i]=Y[i-1]+h*F(X[i-1],Y[i-1]);
    }
    for(int i=0; i<=n; i++){
        cout << "Y["<<i<<"]="<<Y[i] << " ";
    }
    return 0;
}