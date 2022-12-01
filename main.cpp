#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int a;
    cin >> a;
    int b=(a-1);
    if(numeroprimo (a,b)==true){
        cout << "numero primo";
    } else if (numeroprimo(a,b)==false){
        cout << "numero non primo";
    }
