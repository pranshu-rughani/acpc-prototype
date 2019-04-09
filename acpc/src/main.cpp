#include<iostream>
#include "Studentdatabase.h"
#include<fstream>
#include"Collegedatabase.h"
#include"studentview.h"
#include"ACPCserver.h"
using namespace std;
Studentdatabase S;
Collegedatabase C;
ACPCserver A;
int main(){
    studentview(S,C,A);
    return 0;

}
