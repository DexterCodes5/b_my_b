#include <iostream>

using namespace std;

class ct
{
public:
    explicit ct();
    ~ct();
    
    short* shr = new short[3]; 
    short one[3] {7, 9, 3};
    
    
    
    inline bool b_my_b() {
        shr++;
        
        return (*shr > 8) ? true : false;
    }
};

int main(){
    short arr[] {5, 7, 9};
    
    short *i = new short[3];
    
    i = arr;
    
    
    ct* d = new ct;
    
    
    if (*++i > 6) cout << *i << endl;
    
    if (d->b_my_b())
        cout << "b = " << 1 << endl;
        
    
    delete[] d;
    return 0;
}

ct::ct()
{
    shr = one;
}
ct::~ct()
{
    delete[] shr;
}
