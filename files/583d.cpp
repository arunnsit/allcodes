#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_all(
    const vector<int> seq
,   const vector<int>& len
,   int max, int pos
,   vector<int>& sofar) {
    if (max == 0) {
        for (int i = sofar.size()-1 ; i >= 0 ; i--)
            cout << sofar[i] << " ";
        cout << endl;
        return;
    }
    int val = pos < seq.size() ? seq[pos] : -1;
    for (int i = pos-1 ; i >= 0 ; i--) {
        if (len[i] == max && seq[i] > val) {
            sofar.push_back(seq[i]);
            print_all(seq, len, max-1, i, sofar);
            sofar.erase(sofar.end()-1);
        }
    }
}

int main() {
    int data[] = {5, 30, 2, 17, 92, 11, 7, 10, 2, 1};
    vector<int> seq(data, data+10);
    vector<int> len(seq.size());
    for (int i = 0 ; i < seq.size() ; i++) {
        len[i] = 1;
        for (int j = i-1 ; j >= 0 ; j--)
            if (seq[j] > seq[i] && len[j]+1 > len[i])
                len[i] = len[j]+1;
    }
    int max = *max_element(len.begin(), len.end());
    cerr << max << endl;
    vector<int> sofar;
    print_all(seq, len, max, seq.size(), sofar);
}