#include<iostream>
#include<fstream>
#include<string.h>
#define null 0
#include "studentview.h"
#include"Studentdatabase.h"
#include"ACPCserver.h"
#include<stdlib.h>
using namespace std;

void studentview(Studentdatabase D,Collegedatabase C,ACPCserver A){
    int ch;
    cout<<"enter your choice:"<<endl;
    cout<<"1.login 2.sing up 3.apply draw 4.exit"<<endl;
    cin>>ch;
    switch(ch){
    case 1:
        D.login();
        system("cls");
        studentview(D,C,A);
        break;
    case 2:
        D.signup();
        system("cls");
        studentview(D,C,A);
        break;
    case 3:
        A.result(D,C);
        studentview(D,C,A);
        break;
    case 4:
        return;
    default:
        cout<<"try again";
        studentview(D,C,A);
        break;
    }
    return;
}




