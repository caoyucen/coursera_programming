//
//  main.cpp
//  编程题＃3：发票统计
//
//  Created by CYC on 9/12/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    char t;//type类型 A B C
    int p;//people人员 1 2 3
    double money;
    double summoney[4][4]={0.00};//钱数 <1000
    int n;// < 100
    
    for ( int i = 0; i < 3; i++){
        cin >> p;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> t ;
            cin >> money;
            if ( t == 'A' ){
                summoney[p][0] = summoney[p][0] + money;
            }
            if ( t == 'B' ){
                summoney[p][1] = summoney[p][1] + money;
            }
            if ( t == 'C' ){
                summoney[p][2] = summoney[p][2] + money;
            }
            
        }
        
    }
    
   
    
    
    double sum1 = 0.00;
    for( int i = 0; i <3; i++ ){
        sum1 = sum1 + summoney[1][i];
    }
    cout << "1" <<" "<< fixed << setprecision(2) << sum1 << endl;
    
    double sum2 = 0.00;
    for( int i = 0; i <3; i++ ){
        sum2 = sum2 + summoney[2][i];
    }
    cout << "2" <<" "<< fixed  << setprecision(2) << sum2 << endl;
    
    double sum3 = 0.00;
    for( int i = 0; i <3; i++ ){
        sum3 = sum3 + summoney[3][i];
    }
    cout << "3" <<" "<< fixed  << setprecision(2) << sum3 << endl;
    
    double sumA = 0.00;
    for( int i = 1; i <=3; i++ ){
        sumA = sumA + summoney[i][0];
    }
    cout << "A" <<" "<< fixed <<  setprecision(2) << sumA << endl;
    
    double sumB = 0.00;
    for( int i = 1; i <=3; i++ ){
        sumB = sumB + summoney[i][1];
    }
    cout << "B" <<" "<< fixed <<  setprecision(2) << sumB << endl;

    double sumC = 0.00;
    for( int i = 1; i <=3; i++ ){
        sumC = sumC + summoney[i][2];
    }
    cout << "C" <<" "<< fixed <<  setprecision(2) << sumC << endl;


    
            //printf("%.2f ",summoney[j][k]);
            //cout << fixed << setw(2) << setprecision(2) << summoney[j][k] << " ";
    
    
    
    
    
    
    
    
    
    return 0;
}
