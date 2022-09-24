#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>&chk,int chkElement)
{
    if(chk.empty())
    {
        chk.push(chkElement);
        return;
    }
    int topElement=chk.top();
    chk.pop();
    insertAtBottom(chk,chkElement);
    chk.push(topElement);
}
void reverseStack(stack<int> &chk)
{
    if(chk.empty())
    {
        return;
    }
    int topElement=chk.top();
    chk.pop();
    reverseStack(chk);
    insertAtBottom(chk,topElement);
}
int main()
{
    stack <int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverseStack(st);
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}