//constant means unchangeable.
#include <iostream>
using namespace std;
int main(){
    const int mynum=1;
    int mynum=4; //its gives error coz"mynum" is a constant variable. 
    cout<<mynum;

    return 0;
}