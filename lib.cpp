//
// Created by micma on 01/12/2022.
//
int numeroprimo(int a,int b){
    bool x=true;
    if (b!=1){
        if ((a%b)!=0){
            b--;
            x= numeroprimo(a,b);
        } else {
            x=false;
        }
    }else{
        x=true;
    }return x;
}
#include "lib.h"
