#include<iostream>
#include <cstdint>
using namespace std;
class C{
    int x=0;
public:
    int get_x(){return x;}
    int y=0;
};

int main(){
    int i;
    C c;
    int *ip = &c.y;
    *ip = 123;
    --ip;
    *ip = 123;
    cout<<c.get_x()<<" "<<c.y <<"\n";
    return 0;
}
