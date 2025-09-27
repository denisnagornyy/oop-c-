#include "bracket.h"
#include <stack>
#include <unordered_map>

bool isValidParentheses(const std::string& str) {
    std::stack<char> st;
    std::unordered_map<char, char> brackets = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    for (char c : str) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else {
            if (st.empty() || st.top() != brackets[c]) {
                return false;
            }
            st.pop();
        }
    }

    return st.empty();
}
