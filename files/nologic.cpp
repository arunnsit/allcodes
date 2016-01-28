#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;

	cin.get();
	for (int t = 0; t < T; ++t) {
		string s;
		getline(cin, s);

		vector<bool> used(26, false);

		int n = s.length();
		for (int i = 0; i < n; ++i) {
			// we should consider uppercase and lowercase letters separately
			if ('a' <= s[i] && s[i] <= 'z') {
				used[s[i] - 'a'] = true;
			}
			if ('A' <= s[i] && s[i] <= 'Z') {
				used[s[i] - 'A'] = true;
			}
		}

		bool impossible = true;
		// iterating over lowercase letters
		for (char c = 'a'; c <= 'z'; ++c) {
			if(!used[c - 'a']) {
				// if unused letter is encountered then output it and break
				cout << c;
				impossible = false;
				break;
			}
		}
		// output tilde sign if all letters were used
		if (impossible) {
			cout << "~";
		}
		cout << endl;
	}
	return 0;
}
