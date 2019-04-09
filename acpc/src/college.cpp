#include "college.h"
#include<string.h>
#include<iostream>
#define null 0
using namespace std;

college::college(int id,char *n)
{
    this->id=id;
    strcpy(name,n);
}

void college::addbranch(char *n,int id,int s){
    b[id]=new branch(n,id,s);
}
void college::details(){
    for(int i=0;i<10;i++){
        if(this->b[i]!=null){
            b[i]->details();
        }
    }
}
