#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 void kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>b;
        int max1=0;
        for(int i=0;i<candies.size();i++)
            max1=max(max1,candies[i]);
        
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max1)
                b.push_back(true);
            else
                b.push_back(false);
        }
        for(auto i:b)
          cout<<i<<" ";
    }
int main() {
  std::cout << "Hello World!\n";
    int n;
    cin >> n;
    vector<int> toffee(0);
    int extra;

    for(int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        toffee.push_back(ele);
    }

    cin >> extra;

    kidsWithCandies(toffee, extra);

    return 0;
}