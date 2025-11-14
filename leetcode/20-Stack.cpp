class Solution {
public:
    bool isValid(string s) {
        stack<char> pts;
        for (const char& c : s) {
            if (c == '(' || c == '{' || c == '[')
                pts.push(c);
            else {
                if (pts.empty()) return false;
                char top = pts.top();
                if (c == ')' && top == '(')
                    pts.pop();
                else if (c == '}' && top == '{')
                    pts.pop();
                else if (c == ']' && top == '[')
                    pts.pop();
                else return false;
            }
        }
        if (pts.size() > 0)
            return false;
        return true;
    }
};
