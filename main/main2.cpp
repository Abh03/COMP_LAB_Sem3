#include "linkedstack.h"
using namespace std;

int main(int argc,char* argv[])
{
    linkedstack st;
    st.display();
    cout<<st.isEmpty()<<endl;
    st.push(10);
    st.display();
    st.push(20);
    st.display();
    st.push(30);
    st.display();
    int num=st.pop();
    st.display();
    cout<<num<<endl;
    int num2=st.rtop();
    st.display();
    cout<<num2<<endl;
    cout<<st.isEmpty()<<endl;
}