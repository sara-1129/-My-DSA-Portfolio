class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack <char> st;
        for(auto it :s) {
            if(it =='(' || it =='{' || it =='[') {
                st.push(it);
            }
            else if(st.empty()){
                return false;
            }
            else if(st.top() =='(' && it == ')'){
                st.pop();
            }
            else if(st.top() =='[' && it == ']'){
                st.pop();
            }
            else if(st.top() =='{' && it == '}'){
                st.pop();
            }
            else {
                return false;
            }
            
        }
        return st.empty();
    }
};