#include <iostream>

using namespace std;

class ct
{
public:
    explicit ct();
    ~ct();
    
    short* shr = new short; signed short one {10};
    
    inline bool b_my_b() {
        unsigned r; short* k; short b =100; k = &b;
        return r = (*shr > *k) ? true : false;
    }
};

int main(){
    ct* d = new ct;
    
    short* i = new short; short b = 100; i = &b;

    if (*d->shr++ < *i) cout << *d->shr << "\n" << d->b_my_b() << endl;
    
    delete[] d;
    return 0;
}

ct::ct()
{
    shr = &one;
}
ct::~ct()
{
    delete[] shr;
}
