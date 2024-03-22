#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isBalanced(string s) {
    stack<char> st;
    for (char bracket : s) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            st.push(bracket);
        } else {
            if (st.empty()) {
                return false;
            }
            char openBracket = st.top();
            st.pop();
            if ((bracket == ')' && openBracket != '(') || 
                (bracket == ']' && openBracket != '[') || 
                (bracket == '}' && openBracket != '{')) {
                return false;
            }
        }
    }
    return st.empty();
}
int main() {
    string sequence;
    cin >> sequence;
    if (isBalanced(sequence)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}