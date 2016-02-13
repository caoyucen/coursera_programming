//
//  main.cpp
//  编程题＃1：单词翻转
//
//  Created by CYC on 9/15/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
#include<cstring>
using namespace std;

int main() {

    string a;
    string b;
    getline(cin,a);
    
    
    int begin = 0;
    int end =0;
    int l = 0;
    for( int i = 0; i < 503; i++){
        if( a[i] == ' ' && a[i-1] != ' '){
            end = i;
            l = end - begin;
            b = a.substr(begin,l);
            for( int i = l - 1; i >= 0; i--){
                cout << b[i];
            }
            cout << ' ';
            begin = i + 1;
        }
        if( a[i] == ' ' && a[i-1] == ' '){
            cout << ' ';
            begin = i + 1;
        }
        if( a[i] == '\0' && a[i-1] != ' '){
            end = i;
            l = end - begin;
            b = a.substr(begin,l);
            for( int i = l - 1; i >= 0; i--){
                cout << b[i];
            }
            cout << endl;
            break;
        }
        if( a[i] == '\0' && a[i-1] == ' '){
            cout << endl;
            break;
        }


    }
    
    
    return 0;
}
