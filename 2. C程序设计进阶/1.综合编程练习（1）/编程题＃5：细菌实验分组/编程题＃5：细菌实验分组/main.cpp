//
//  main.cpp
//  编程题＃5：细菌实验分组
//
//  Created by CYC on 9/13/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {

    int n = 0;
    int num[102];
    double sumbefore = 0.00;
    double sumafter = 0.00;
    double rate[10000];
    
    cin >> n;
    for ( int i = 0; i <n; i++){
        cin >> num[i] >> sumbefore >> sumafter;
        rate[i] = sumafter / sumbefore;
        
    }
//    
//    for ( int i = 0; i < n ; i++){
//        cout << rate[i] << " ";
//    }
//    cout << endl;
    
    double tem = 0.00;
    int temnum = 0;
    for(int i = 0; i < n; i++){
        for( int j = 1; j < n-i; j++){
            if( rate[j] < rate[j-1] ){
                tem = rate[j];
                rate[j] = rate[j-1];
                rate[j-1] = tem;
                
                temnum= num[j];
                num[j] = num[j-1];
                num[j - 1] = temnum;
            }
        }
    }
    

//            for ( int i = 0; i < n ; i++){
//                cout << num[i] << " ";
//            }

    
    double diff [10000];
    double maxdiff = 0.00;
    int maxdiffnum = 0;
    for ( int i = 1; i < n; i++){
        diff[i] = rate[i] - rate[i - 1];
        if( maxdiff < diff[i] ){
            maxdiff = diff[i];
            maxdiffnum = i;
            
        }
    }
    
//    cout << maxdiffnum;
   

    cout << n - maxdiffnum << endl;
    for( int i = maxdiffnum; i < n ; i++){
        cout << num[i] << endl;
    }
    cout <<  maxdiffnum << endl;
    for( int i = 0; i < maxdiffnum; i++){
         cout << num[i] << endl;
    }
    
    
    
    
        return 0;
}
