#include "ACPCserver.h"
#include<iostream>
#include<fstream>
#include<string.h>
#define null 0
using namespace std;

void ACPCserver::result(Studentdatabase S,Collegedatabase C){
    char password[25];
    cout<<"enter the pasword to initiate the round ";
    cin>>password;
    if(!strcmp(password,"pranshu129")){
        for(int i=1;i<1000;i++){
            if(S.dbs[i]!=null){
                allot(S,C,i);

            }
        }
    }
}

void ACPCserver::allot(Studentdatabase S,Collegedatabase C,int i){
    for(int j=0;j<10;j+=2){
        int cc,bc;
        cc=S.dbs[i]->choice[j];
        bc=S.dbs[i]->choice[j+1];
        if(C.dbc[cc]->b[bc]->available()){
            C.dbc[cc]->b[bc]->alot();
            char cname[25];
            char bname[25];
            strcpy(bname,C.dbc[cc]->b[bc]->branch_name);
            strcpy(cname,C.dbc[cc]->name);
            char name[25];
            strcpy(name,cname);
            strcat(name," ");
            strcat(name,bname);
            S.dbs[i]->getalot(name);
            fstream file;
            file.open("result.txt",ios::app);
            file<<i;
            file<<name;
            file.put('\n');
            return;
        }
    }
}


