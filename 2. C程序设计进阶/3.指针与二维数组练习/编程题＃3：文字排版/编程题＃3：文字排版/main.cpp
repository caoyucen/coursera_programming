//
//  main.cpp
//  aligning
//
//  Created by CYC on 10/15/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    
    int n = 0;
    cin >> n;
    
    //input the string
    string input_str = "";
    
    cin.ignore();
    getline(cin,input_str);
    
    stringstream ss(input_str);
    string current_word;
    string line;
    
    while ( ss >> current_word ){
        if (line.length() + current_word.length() > 80){
            if (*line.rbegin() == ' '){
                line.erase(line.length()-1,1); //remove the space at the end of each line
            }
            cout << line << endl;
            line.clear();   //empty the current line
        }
        line += current_word;   //append the current word to the new line
        line += " ";
        
    }
    if (*line.begin() != ' '){
        if (*line.rbegin() == ' '){
            line.erase(line.length()-1,1); //remove the space at the end of each line
        }
        cout << line << endl;
    }
    
    
    return 0;
}





////
////  main.cpp
////  编程题＃3：文字排版
////
////  Created by CYC on 10/7/15.
////  Copyright © 2015 CYC. All rights reserved.
////
//
//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//
//int main() {
//    int buzhidao = 0;
//    cin >> buzhidao;
//    
//    int n = 80;
//    
//    char a[100001] = {};
//    cin.ignore();
//    cin.get(a, 100000);
//    int l = strlen(a);
//    
//    char s[100001]= {};
//    int temp = 0;
//    for( int j = 0; j < l; j++){
//        for( int i = 0; i < l; i++){
//            if(a[i] ==' ' && a[i+1] == ' '){
//                temp++;
//                continue;
//            }
//            s[j] = a[i];
//        }
//    }
//    for( int i = 0; i < l - temp;i++){
//        cout << s[i];
//    }
//    cout << endl;

    
    
//    
//    int b = 0; //begin
//    int e = 0; //end
//    for(int i = 0; i < 10000; i++){
//        if( b + n - 1 >= l - 1){
//            if( a[l -1] == ' '){
//                for( int i = b; i < l-1; i++){
//                    cout << a[i];
//                }
//            }
//            else{
//                for( int i = b; i < l; i++){
//                    cout << a[i];
//                }
//            }
//            cout << '\r';
//            break;
//            }
//        //cout << "0st if:" << b+n-1 << " |" << a[b+n-1] << endl;
//
//        if( a[b + n - 1] != ' ' && a[b + n] == ' '){    //1
//            e = b + n - 1;
//            for( int i = b; i <= b + n -1 ; i++){
//                cout << a[i];
//            }
//
//            cout << '\r' ;
//            b =  b + n + 1;
//            continue;
//        }
//        //cout << "1st if:" << b+n-1 << " |" << a[b+n-1] << endl;
//        
//        if( a[b + n - 1] == ' ' && a[b + n] != ' '){    //2
//            for( int i = b; i <= b + n -2 ; i++){
//                cout << a[i];
//            }
//            cout << '\r' ;
//            b = b + n;
//             continue;
//
//        }
//        //cout << "2nd if:" << b+n-1 << " |" << a[b+n-1] << endl;
//
//        
//        if( a[b + n -1] != ' ' && a[b + n] != ' '){ //3
//            int t = 0;
//            for( int j = b + n - 1; j > 0; j--){
//                t++;
//                if( a[j] == ' '){
//                    e = b + n - 1 -t;
//                    break;
//                }
//            }
//            for( int i = b; i <= e ; i++){
//                cout << a[i];
//            }
//            cout << '\r' ;
//            b = b + n - t + 1;
//             continue;
//        }
//        //cout << "3rd if:" << b+n-1 << " |" <<  a[b+n-1] << endl;
//
//
//    }
//
//    
//    
//
//    
//    
//    return 0;
//}
