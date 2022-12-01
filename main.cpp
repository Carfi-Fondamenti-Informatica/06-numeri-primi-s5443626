#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int a;
    cin >> a;
    int b=(a-1);
    if(numeroprimo (a,b)==true){
        cout << "il numero è primo";
    } else if (numeroprimo(a,b)==false){
        cout << "il numero non è primo";
    }
