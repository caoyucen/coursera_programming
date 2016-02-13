//
//  main.cpp
//  编程题＃4：Tomorrow never knows？
//
//  Created by CYC on 9/12/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int d, m, y;
    int day,month,year;
    scanf("%d-%d-%d",&y,&m,&d);
    
    if(d == 28){
        if(m == 2){
            if((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0)){
                day = 29;
                month = 2;
            }
        else{
            day = 1;
            month = 3;
        }
        year = y;
        }
        printf("%d-%02d-%02d\n",year,month,day);
        return 0;
    }
    
    if(d == 29){
        if(m == 2){
            day = 1;
            month = 3;
            year = y;
        }
        printf("%d-%02d-%02d\n",year,month,day);
        return 0;
    }

   
    if( d == 31){
        if( m == 12){
            year = y + 1;
            month = 1;
            day = 1;
        }
        else {
            year = y;
            month = m + 1;
            day = 1;
        }
        printf("%d-%02d-%02d\n",year,month,day);
        return 0;
    }


    if( d == 30){
        if( m == 4||m == 6|| m == 9|| m == 11){
            year = y;
            month = m + 1;
            day = 1;
        }
        else {
            day = d + 1;
            month = m;
            year = y;
        }
        printf("%d-%02d-%02d\n",year,month,day);
        return 0;
    }
    
    
    
    else{
        day = d + 1;
        month = m;
        year = y;
    }
    
    
    printf("%d-%02d-%02d\n",year,month,day);

    
    return 0;
}
