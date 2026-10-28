class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st ;
        int result = 0;
        for(int i = 0 ; i < tokens.size() ; i++){
            if(tokens[i] == "-"){
                result = st.top();
                st.pop();
                result = st.top() - result;
                st.pop();
                st.push(result);
            }
            else if(tokens[i] == "+"){
                result = st.top();
                st.pop();
                result = st.top() + result;
                st.pop();
                st.push(result);

            }
            else if(tokens[i] == "*"){
                result = st.top();
                st.pop();
                result = st.top() * result;
                st.pop();
                st.push(result);
            }
            else if(tokens[i] == "/"){
                result = st.top();
                st.pop();
                result = st.top() / result;
                st.pop();
                st.push(result);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
