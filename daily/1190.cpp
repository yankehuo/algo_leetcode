#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	string reverseParentheses(string s) {
		vector<string> stk;
		string tmp;
		for (char c : s) {
			if (c == '(') {
				stk.push_back(tmp);
				tmp = "";
			}
			else if (c == ')') {
				reverse(tmp.begin(), tmp.end());
				tmp = stk.back() + tmp;
				stk.pop_back();
			}
			else {
				tmp.push_back(c);
			}
		}
		return tmp;
	}
};
class Solution {
public:
	string reverseParentheses(string s) {
		int len = s.size();
		vector<int> pareindex(len, 0);
		vector<int> stk;
		for (int i = 0; i != len; ++i) {
			if (s[i] == '(') {
				stk.push_back(i);
			}
			else if (s[i] == ')') {
				int j = stk.back();
				stk.pop_back();
				pareindex[i] = j;
				pareindex[j] = i;
			}
		}
		string res;
		int step = 1;
		for (int i = 0; i < len; ) {
			if (s[i] == '(' || s[i] == ')') {
				i = pareindex[i];
				step = -step;
			}
			else {
				res.push_back(s[i]);
			}
			i += step;
		}
		return res;
	}
};

class Solution {
public:
	string reverseParentheses(string s) {

	}
private:
	string helper(string &s) {
		int l = s.find_last_of(')', s.size() - 1);
	}
};

int main() {
	return 0;
}
