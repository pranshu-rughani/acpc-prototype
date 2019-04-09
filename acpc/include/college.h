#ifndef COLLEGE_H
#define COLLEGE_H
#include"branch.h"

class college
{
    public:
        college(int id,char *n);
        void addbranch(char *n,int id,int s);
        void details();
        friend class ACPCserver;

    protected:

    private:
        branch *b[10];
        int id;
        char name[25];
};

#endif // COLLEGE_H
