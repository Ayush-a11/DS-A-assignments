#include <iostream>
#include <vector>
using namespace std;

void restoreString(string s, vector<int>& indices) {
    string ans = s;
    for(int i = 0; i < indices.size(); i++){
        ans[indices[i]] = s[i];
    }
    for(auto x : ans)
        cout << x << " ";
}

int main(){
    
    string s = {"codeleet"};
    vector<int> v {4,5,6,7,0,2,1,3};
    restoreString(s,v);
    return 0;
}