stack<int> st;
stack<int> mini;

MinStack::MinStack() {
    while(!st.empty()){
        st.pop();
    }
    while(!mini.empty()){
        mini.pop();
    }
}

void MinStack::push(int x) {
    st.push(x);
    if(!mini.size()){
        mini.push(x);
    }
    else{
        if(x <= mini.top()){
            mini.push(x);
        }
        else{
            mini.push(mini.top());
        }
    }
}

void MinStack::pop() {
    if(st.size()){
        st.pop();
        mini.pop();
    }
}

int MinStack::top() {
    if(!st.size()){
        return -1;
    }
    return st.top();
}

int MinStack::getMin() {
    if(!mini.size()){
        return -1;
    }
    return mini.top();
}


