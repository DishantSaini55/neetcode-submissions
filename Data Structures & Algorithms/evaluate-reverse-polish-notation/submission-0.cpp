class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();

        for(string c:tokens){
            if(c != "+" && c != "-" && c != "/" && c != "*") {
                st.push(stoi(c));
            }

            if(c=="+"){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                int newnum=num1+num2;
                st.push(newnum);
            }

            else if(c=="-"){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                int newnum=num2-num1;
                st.push(newnum);
            }

            else if(c=="/"){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                int newnum=num2/num1;
                st.push(newnum);
            }
            
            else if(c=="*"){ 
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                int newnum=num1*num2;
                st.push(newnum);
            }
        }
        return st.top();
    }
};
