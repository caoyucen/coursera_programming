//
//  main.cpp
//  Assignment: 编程作业—C++初探
//
//  Created by CYC on 11/9/15.
//  Copyright © 2015 CYC. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<string.h>


using namespace std;

class student{
private:
    char name[100];
    int age;
    char num[100];
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    
public:
    student(char sname[100], int sage, char snum[100], int sgrade1, int sgrade2, int sgrade3,  int sgrade4){
        strcpy(name,sname);
        age = sage;
        strcpy(num, snum);
        grade1 = sgrade1;
        grade2 = sgrade2;
        grade3 = sgrade3;
        grade4 = sgrade4;
    }
    
    char *getname(){        //这里不是很了解啊，为什么要用 * 号啊？ 是指针？ 那为什么之后调用的时候用的是 getname？
        return name;
    }
    
    int getage(){
        return age;
    }
    
    char *getnum(){
        return num;
    }
    
    int getaverage(){
        return (grade1 +grade2 + grade3 +grade4)/4;
    }
};


int main() {
    char name[100], a, num[100];
    int age,grade1, grade2,grade3,grade4;
    cin.getline(name,100,',');
    cin >> age;
    a = getchar( );
    cin.getline(num, 100, ',');
    cin >> grade1 >> a >> grade2 >> a >> grade3 >> a >> grade4;
    student s(name,age, num, grade1,grade2,grade3,grade4);
    cout << s.getname() <<","<< s.getage() <<","<< s.getnum() <<","<< s.getaverage() << endl;
    
    
    
 return 0;
}
