#include<bits/stdc++.h>
using namespace std;
class myStack{
    stack<int> st;
    deque<int> dq;
    
    public:
    void add(int data){
        dq.push_back(data);
        if(dq.size() > st.size() +1){
            int temp = dq.front();
            dq.pop_front();
            st.push(temp);
        }
    }
    void pop(){
        int data = dq.back();
        dq.pop_back();
        if(st.size()>dq.size()){
            int temp = st.top();
            st.top();
            dq.push_front(temp);
        }
    }
    int getMid(){
        return dq.front();
    }
    void delMid(){
        dq.pop_front();
        if(st.size() > dq.size()){ // new middle element
        int temp = st.top(); // should come at front of deque
        st.pop();
        dq.push_front(temp);
        }
    }
};
int main()
{
    myStack st;
    st.add(2);
    st.add(5);
    cout << "Middle Element: " << st.getMid() << endl;
    st.add(3);
    st.add(7);
    st.add(4);
    cout << "Middle Element: " << st.getMid() << endl;
    st.delMid();
    cout << "Middle Element: " << st.getMid() << endl;
    st.delMid();
    cout << "Middle Element: " << st.getMid() << endl;
    st.pop();
    st.pop();
    st.delMid();
}