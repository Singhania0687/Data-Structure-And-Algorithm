#include <iostream>
#include <vector>
#include <map>
#include <algorithm> // for sort
using namespace std;

// Custom comparator function
bool compare(pair<int,int> a, pair<int,int> b) {
    if (a.second == b.second) {
        return a.first < b.first; // Sort by key if values are equal
    }
    return a.second > b.second; // Sort by value in descending order

}

int main() {
    map<int,int>mp;
    vector<int>v={1,2,3,4,5,6,6,6,4,4,7,8,8,8,9,10};
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
   sort(mp.begin(),mp.end(),compare);
   for(auto it=mp.begin();it!=mp.end();it++){
       cout<<it->first<<" "<<it->second<<endl;
   }
    return 0;
   

}
