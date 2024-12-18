#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //! how to decalare a stack

    stack<string> st;

    //? push(): push method is used to add elements to the stack

    st.push("sanidhya");
    st.push("mayank");
    st.push("ashutosh");

    //* .top() method is used to access the top element of the stack

    cout<<st.top()<<endl; //ashutosh

    //? if we want to update the top element of the stack

    st.top()="hello world";

    cout<<st.top()<<endl;

    //!pop method is used to remove the elements from the stack

    st.pop();

    cout<<st.top()<<endl;

    //? size method is used to get the size of the stack

    cout<<st.size()<<endl;

    //! empty method is used to check whether the stack is empty or not

    cout<<st.empty()<<endl;
    return 0;
}