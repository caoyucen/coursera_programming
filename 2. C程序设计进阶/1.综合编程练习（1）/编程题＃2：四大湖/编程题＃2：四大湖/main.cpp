//
//  main.cpp
//  编程题＃2：四大湖
//
//  Created by CYC on 9/11/15.
//  Copyright © 2015 CYC. All rights reserved.
//




#include <iostream>
using namespace std;

int main() {
    
    
int a,b,c,d;
int A,B,C,D;


for( a = 1; a<=4; a++){
    for( b = 1; b<=4; b++){
        if(a != b){
            for( c = 1; c <=4; c++){
                if( c != a && c!= b){
                    d = 10 - a - b - c;
                    
                    A = (a == 3) + (b == 1) + (c == 2) + (d == 4);
                    B = (a == 2) + (b == 4) + (c == 3) + (d == 1);
                    C = (b == 3) + (d == 4);
                    D = (a == 1) + (b == 3) + (c == 4) + (d == 2);
                    
                    if( A*B*C*D == 1){
                        cout<< a << endl << b<< endl << c<< endl << d<< endl ;
                        return 0;
                    }


                }
            }
        }
    }
}

    return 0;
}