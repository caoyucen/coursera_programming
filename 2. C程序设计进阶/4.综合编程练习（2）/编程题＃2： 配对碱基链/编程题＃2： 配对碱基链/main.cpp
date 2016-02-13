//
//  main.cpp
//  编程题＃2： 配对碱基链
//
//  Created by CYC on 10/21/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    
    int o = 0;
    while(o!= n){
        o++;
        char s[257];
        cin.ignore();
        cin.get(s,257);
        int l = strlen(s);
            for( int i = 0; i < l; i++){
                if( s[i] == 'A'){
                    s[i] = 'T';
                }
                else if( s[i] == 'T'){
                    s[i] = 'A';
                }
                else if( s[i] == 'G'){
                    s[i] = 'C';
                }
                else if( s[i] == 'C'){
                    s[i] = 'G';
                }
            }
        
            for( int i = 0; i < l; i++){
                cout << s[i];
            }
        
                cout << endl;
        
        }
    
    
    
    return 0;
}
