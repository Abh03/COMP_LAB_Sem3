#include "linkedstack.h"
using namespace std;

int main(int argc,char* argv[])
{
    linkedstack st;
    st.print();
    cout<<st.isEmpty()<<endl;
    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print();
    int num=st.pop();
    st.print();
    cout<<num<<endl;
    int num2=st.returntop();
    st.print();
    cout<<num2<<endl;
    cout<<st.isEmpty()<<endl;
}