
/* 
This code effectively validates the matching of parentheses, brackets, 
and braces in a string using a stack to track open and close symbols in 
the right order. It iterates through the string, stacking opens and 
popping them with correct closes. It returns false for mismatches 
or an improperly empty stack.. If the stack is empty after going through the 
string, it means everything matched up, indicating success. 

Time Complexity = O(n)
*/ 
class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;

        for (int i = 0; i < s.size(); i++) 
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') 
            {
                st.push(s[i]);
            }
            else {
                if (st.empty() || (s[i] == ')' && st.top() != '(') || (s[i] == ']' && st.top() != '[') || (s[i] == '}' && st.top() != '{')) 
                {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();    
    }
};