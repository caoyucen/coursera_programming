//
//  main.cpp
//  编程题＃2：角谷猜想
//
//  Created by CYC on 9/17/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int tem =0;
    
    cin >> n;
    
    for(int i = 0; i < 10000; i++){
        
        if( n == 1){
        cout << "End"<< endl;
        return 0;
        }
        
        if(n % 2 != 0){
            tem = n;
            n = n*3+1;
            cout << tem << "*3+1="<< n << endl;
        }
        if( n %2 == 0){
            tem = n;
            n = n/2;
            cout << tem << "/2="<< n << endl;
        }
    }
        
   
    return 0;
}
