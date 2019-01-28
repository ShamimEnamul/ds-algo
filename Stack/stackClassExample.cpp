#include<iostream>
#include<stack>

using namespace std;
stack<int> st;
void show()
{
    int i = st.size()-1;
    for ( i ; i < 0; i--)
    {
        cout << " " << st.top() ;
    }

}
int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    st.push(5);
    st.pop();
    //st.pop();
    cout << "top element of stack is = " << st.top() << endl;
    cout << "top index of stack is = " << st.size()-1 << endl;


}
