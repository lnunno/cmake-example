// 'Hello World!' program

#include <iostream>

using namespace std;

int main()
{
    for(auto i : {1,2,3,4,5}){
        cout << i << endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
