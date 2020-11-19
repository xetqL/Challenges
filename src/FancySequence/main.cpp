
#include "Fancy.h"

int main (int argc, char** argv){
    Fancy* f = new Fancy();
    for(int i = 0; i < 1'0000; ++i)
        if(i % 4 == 0)
            f->append(i);
        else if (i % 4 == 1)
            f->addAll(i % 6);
        else if(i % 4 == 2) f->multAll(i % 10);
        else f->getIndex(i % 100);
    return 0;
}