# include<iostream>
# include<vector>
using namespace std;
void GenerateSubset(string str, vector<char>st,int idx,vector<string>&ans,int &cnt)
{
    if(idx==str.length())
    {
        string subset(st.begin(), st.end());
        if(subset.length()==3)
       { ans.push_back(subset);
        ++cnt;} 
        return;
    }
    // taking the value
    st.push_back(str[idx]);
    GenerateSubset( str,st,idx+1,ans,cnt);
    // Not taking the value
    st.pop_back();
     GenerateSubset( str,st,idx+1,ans,cnt);
}
int main(){
    vector<string>ans;
    vector<char>st;
    int cnt=0;
     GenerateSubset( "abcdef",st,0,ans,cnt);
     int cntr=1;
     for(auto it:ans)
     {
        cout<<it<<" <------> "<<cntr<<endl;
        ++cntr;
     }
     cout<<" Count of total subset are "<<cnt<<endl;

}