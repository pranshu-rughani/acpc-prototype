#include "Studentdatabase.h"
#include<fstream>
#include<iostream>
#include"Student.h"
#include<string.h>
#define null 0

using namespace std;

Studentdatabase::Studentdatabase()
{
    fstream files;
    files.open("student.txt",ios::in|ios::out);
    while(!files.eof()){
        int r;
        char fname[25],lname[25],pw[10];
        char name[25];
        files>>r;
        files>>fname;
        files>>lname;
        files>>pw;
        strcpy(name,fname);
        strcat(name," ");
        strcat(name,lname);
        dbs[r]=new Student(name,r,pw);
    }
    files.close();
    fstream file;
    file.open("choice.txt",ios::in|ios::out);
    while(!file.eof()){
    int rk;
    int choice[10];
    file>>rk;
    for(int p=0;p<10;p++){
        file>>choice[p];
    }
    dbs[rk]->enterchoice(choice);
    }
    return;
}

void Studentdatabase::login(){
    int r;
    char pd[10];
    cout<<"enter rank ";
    cin>>r;
    cout<<"enter your password ";
    cin>>pd;
    if(dbs[r]->check_authentication(pd,r)){
        this->view(r);
    }
    else{
        cout<<"try again";
        this->login();
    }
}
void Studentdatabase::signup(){
    ofstream p;
    p.open("student.txt",ios::app);
    cout<<"enter your rank ";
    int r;
    cin>>r;
    if(dbs[r]!=null){
        cout<<"already registered";
        return;
    }
    char fname[25],lname[25];
    cout<<"enter your name ";
    cin>>fname;
    cin>>lname;
    cout<<"enter your password ";
    char pas[10];
    cin>>pas;
    p<<"\n";
    p<<r;
    p.put(' ');
    p<<fname;
    p.put(' ');
    p<<lname;
    p.put(' ');
    p<<pas;
    p.put(' ');
    p.close();
    char name[25];
    strcpy(name,fname);
    strcat(name," ");
    strcat(name,lname);
    dbs[r]=new Student(name,r,pas);
    return;
}

void Studentdatabase::view(int r){
    cout<<"1. enter your choice \n 2.get result";
    int ch;
    cin>>ch;
    switch(ch){
    case 1:
        dbs[r]->enterchoice();
        break;
    case 2:
        dbs[r]->displayresult();
        break;
    }
}

