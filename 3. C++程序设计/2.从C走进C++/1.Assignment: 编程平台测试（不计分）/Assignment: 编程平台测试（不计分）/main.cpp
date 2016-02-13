//
//  main.cpp
//  Assignment: 编程平台测试（不计分）
//
//  Created by CYC on 11/3/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int A[100] = {0};
    A[0] = 24833;
    char* p = (char*) A;
    cout << *(p+1) << endl;
    
    return 0;
}
