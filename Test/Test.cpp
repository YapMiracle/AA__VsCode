#include <bits/stdc++.h>
using namespace std;

class String
{
    public:
        String(const char* data = 0);
        String(const String& str);
        String & operator=(const String & str);
        ~String();
        char * get_c_str() const{return m_data;}
    private:
        char * m_data;
};
inline
String::String(const char * data)
{
    if(data)
    {
        m_data=new char[strlen(data)+1];
        strcpy(m_data, data);
    }
    else
    {
        m_data = new char[1];
        *m_data = '\0';
    }
}
inline
String::String(const String &str)
{
    this->m_data= new char[strlen(str.m_data)+1];
    strcpy(this->m_data, str.m_data);
}
inline
String::~String()
{
    if(m_data)
        delete[] m_data;
}
inline
String& String::operator=(const String & str)
{
    if(this == &str)
        return *this;
    delete[] m_data;
    m_data = new char[strlen(str.m_data)+1];
    strcpy(m_data, str.m_data);
    return *this;
}
int main()
{
    String s("123343");
    String s1("123");
    cout<<s.get_c_str()<<endl;
    cout<<s1.get_c_str()<<endl;
    s1=s;
    cout<<s1.get_c_str()<<endl;
    
}
