//
//  main.cpp
//  编程题＃4：大整数的加减乘除
//
//  Created by CYC on 1/27/16.
//  Copyright © 2016 CYC. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <memory.h>
#include <sstream>
using namespace std;

string s1;
string s2;
char r;
int a1[102];
int a2[102];
int b[10010];
string s;
int n1;
int n2;


void initial(){
    memset(a1,0,sizeof(a1));
    memset(a2,0,sizeof(a2));
    memset(b,0,sizeof(b));
    
    int n1 = int(s1.length());
    int n2 = int(s2.length());
    
    
    for( int i = 0; i <n1; i++){
        a1[i] = int(s1[n1 - 1 - i] - '0');
    }
    for( int j = 0; j < n2; j++){
        a2[j] = int(s2[n2 - 1 - j] - '0');
    }
}



void processplus( ){
    int tem = 0;
    for( int i = 0; i < 102; i++){
        int n = 0;
        n = a1[i] + a2[i];
        if (n >= 10) {
            n = n % 10 + tem;
            tem = 1;
        }
        else{
            n = n + tem;
            tem = 0;
        }
        b[i] = n;
    }
}




void processminus(){
    int tem = 0;
    for( int i = 0; i < 102; i++){
        int n = 0;
        if (a1[i] - tem >= a2[i] ) {
            n = a1[i]- tem - a2[i] ;
            tem = 0;
        }
        else{
            n = 10 + a1[i] - tem - a2[i];
            tem = 1;
        }
        b[i] = n;
    }
}



void processmultiply(){
    int tem = 0;
    int c[n2][110];
    memset(c, 0, sizeof(c));
    for( int i = 0; i < n2;i++){
        for( int j = 0; j < )
    }
    
    
    
    
}


int main() {
    
    cin >> s1 >> r >> s2;
    
    
    if (r == '+') {
        initial();
        processplus();
    }
    if (r == '-') {
        if (s1 >= s2) {
            initial();
            processminus();
        }
        if (s1 < s2 ) {
            string temstr;
            temstr = s1;
            s1 = s2;
            s2 = temstr;
            initial();
            processminus();
            cout << "-";
        }
    }
    if (r == '*') {
        if (s1 < s2) {
            string temstr;
            temstr = s1;
            s1 = s2;
            s2 = temstr;
        }
        initial();
        processminus();
    }
    
    
    
    int pluslocaton = 0;
    for( int j = 101; j >= 0; j--){
        if (b[j] != 0) {
            pluslocaton = j;
            j = -1;
        }
    }

    stringstream ss;
    
    for( int z = pluslocaton; z >= 0; z--){
        ss << b[z];
    }
    ss >> s;
    cout << s << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
