//
//  main.cpp
//  编程题＃1：计算矩阵边缘元素之和
//
//  Created by CYC on 10/5/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    int k = 0;
    cin >> k;
    for( int i = 0; i < k; i++){
        int a[102][102] = {0};
        int n = 0;
        int m = 0;
        cin >> m >> n;
        for( int i = 0; i < m; i++){
            for( int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
    
    
    
        int sum = 0;
        for( int i = 0; i < m; i++){
            for( int j = 0; j < n; j++){
                if( i == 0 || j == 0 || i == m - 1 || j == n - 1){
                    sum = sum + a[i][j];
                }
            }
        }

        cout << sum << endl;

    }

    
    
    return 0;
}
