#ifndef COLLEGEDATABASE_H
#define COLLEGEDATABASE_H
#include"college.h"

class Collegedatabase
{
    public:
        Collegedatabase();
        void print(int id);
        friend class ACPCserver;

    protected:

    private:
        college *dbc[100];
};

#endif // COLLEGEDATABASE_H
