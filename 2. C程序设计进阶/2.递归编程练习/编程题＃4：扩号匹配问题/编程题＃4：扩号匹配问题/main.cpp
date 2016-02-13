//
//  main.cpp
//  编程题＃4：扩号匹配问题
//
//  Created by CYC on 9/25/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
#include<cstring>
using namespace std;


int main() {
    string s;
    

    
    while( getline(cin,s)) {
        
    bool b[105] = {0};
    int a = 0;
    int c[105] = {0};

    int n = s.length();
       
    for( int i = 0; i < n; i++){
        if(s[i] )
        if(s[i] == ')'&& a == 0) {
            b[i] = 1;
        }
        if(s[i] == '('){
            a++;
            c[a] = i;
        }
        if(s[i] == ')' && a != 0){
            a--;
        }
    }
    
    if( a > 0){
        for( int i = 1; i <=a ; i++){
            b[c[i]] = 1;
        }
    }
    
    
    
    char m[105] ={0};
        for( int i = 0; i < n; i++){
        if( b[i] == 1 ){
            if(s[i] == ')'){
                m[i] = '?';
            }
            if(s[i] == '('){
                m[i] = '$';
            }
        }
        else{
            m[i] = ' ';
        }
    }
    

    cout << s << endl;
    
//        for( int i = 0; i < n; i++){
//            cout << c[i];
//        }
//        
//        cout << endl;
//    
//    for( int i = 0; i < n; i++){
//        cout << b[i];
//    }
//        cout << endl;
    
    for( int i = 0; i < n; i++){
        cout << m[i];
    }

    cout << endl;
    
}
        return 0;
}
