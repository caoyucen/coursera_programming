//
//  main.cpp
//  编程题＃3：寻找山顶
//
//  Created by CYC on 10/21/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    int m = 0;
    int n = 0;
    cin >> m >> n;
    
    
    
    int a[24][24] = {0};
    for( int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    
    for( int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] >= a[i-1][j] && a[i][j] >= a[i][j-1] && a[i][j] >= a[i+1][j] && a[i][j] >= a[i][j+1]){
                cout << i -1 << ' ' << j-1 << endl;
            }
        }
    }
    
    
    return 0;
}
