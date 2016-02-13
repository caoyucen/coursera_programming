//
//  main.cpp
//  编程题＃6：流感传染
//
//  Created by CYC on 9/14/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char a[104][104][104] = {0};
    int m = 0;
    int n = 0;
    
    cin >> n;
    
    for( int i = 1; i <= n; i++){
        for ( int j = 1; j <= n; j++){
            cin >> a[0][i][j];
        }
    }
    
    cin >> m;
   
    
    for ( int d = 0; d < m; d++){
        for ( int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                if( a[d][i][j] == '#'){
                    a[d+1][i][j] = '#';
                }
                if( a[d][i][j] == '@'){
                    a[d+1][i][j] = '@';
                    if(a[d][i-1][j] != '#'){
                        a[d+1][i-1][j] = '@';
                    }
                    if(a[d][i+1][j] != '#'){
                        a[d+1][i+1][j] = '@';
                    }
                    if(a[d][i][j-1] != '#'){
                        a[d+1][i][j-1] = '@';
                    }
                    if(a[d][i][j+1] != '#'){
                        a[d+1][i][j+1] = '@';
                    }
                }
            }
        }
    }
    
    int num = 0;
    for ( int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if( a[m-1][i][j] == '@'){
                num++;
            }
        }
    }
    
    cout << num <<endl;
    
    return 0;
}
