#include "Collegedatabase.h"
#include<fstream>

using namespace std;

Collegedatabase::Collegedatabase()
{
    fstream file;
    int id;
    int sn,bid,bn;
    char cname[25],bname[25];
    file.open("college.txt",ios::in|ios::out);
    while(!file.eof()){
        file>>id;
        file>>cname;
        dbc[id]=new college(id,cname);
        file>>bn;
        for(int i=0;i<bn;i++){
            file>>bid;
            file>>bname;
            file>>sn;
            dbc[id]->addbranch(bname,bid,sn);
        }
    }
}
void Collegedatabase::print(int id){
    dbc[id]->details();
}
