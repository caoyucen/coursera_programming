//
//  main.cpp
//  编程题＃3：排队游戏
//
//  Created by CYC on 9/21/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string c;
    getline(cin,c);
    
    int n = c.length();
    
    char o;
    char p;
    for( int i = 0; i < n; i++){
        o = c[0];
        if(c[i] != o){
            p = c[i];
            continue;
        }
    }
    
//    cout << o << p;
    int a[103] = {0};
    for( int i = 0; i < n; i++){
        a[i] = i;
    }
    
    for( int j = 0; j <= n/2; j++){
        long l= c.length();
        int z = 0;
        for(int i = 0; i < l;i++){
            if(c[i] == 0 && c[i + 1] == n){
                cout << a[i]  << " "<< a[i + 1]  << endl;
                cout << endl;
                break;
            }
            if( (c[i] == o) && (c[i+1] == p )){
                z++;
                if(z == 1){
                    cout << a[i]  << " "<< a[i + 1]  << endl;
                    c = c.erase(i,2);
                    for(int j = i ;j < l - 2; j++){
                        a[j] = a[j + 2];
                    }
                    
                }
                
            }
            
        }
        
    }
    
    
    return 0;
}
