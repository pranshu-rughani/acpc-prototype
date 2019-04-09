#include "branch.h"
#include<string.h>
#include<iostream>
using namespace std;


branch::branch(char *n,int id,int s){
    strcpy(branch_name,n);
    branch_id=id;
    seat=s;
    seatl=seat;
}
int branch::available(){
    if(this->seatl>0){
        return 1;
    }
    return 0;
}
void branch::alot(){
    seatl--;
}
void branch::details(){
    cout<<branch_name<<endl<<branch_id<<endl<<seat<<endl;

}
