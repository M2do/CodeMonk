#include <iostream>
using namespace std;
int main()
{
    int a = 7,b = 2;
    try{
        if(b == 0)
            throw "Divide By Zero Error";
        int res = a/b;
        cout<<res<<endl;
        }catch(const char* e){
            cout<<"Exception Occured "<<e<<endl;
        }
    //cout<<showpos<<100<<endl;
    return 0;
}
