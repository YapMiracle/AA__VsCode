#include <regex>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    regex x;
    try{

        x="[z-a]";
    }
    catch(regex_error e)
    {
        cout<<e.what()<<" "<<e.code()<<endl;
    }
    smatch s;
    string a="ieieeeeisdeiecei";
    if(regex_search(a,s, x))
    {
        cout<<s.str()<<" ";
    }
}