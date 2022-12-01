#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int a=0;
    cin >> a;
    int b=(a-1);
    if(numeroprimo (a,b)){
        cout << "numero primo";
    } else if (numeroprimo(a,b)==false){
        cout << "numero non primo";
    } return 0;
}
