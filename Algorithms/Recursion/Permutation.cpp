# include<iostream>
# include<vector>
using namespace std;
void Generate(vector<vector<int>>&ans,vector<int>vis,vector<int>temp,vector<int>v)
{
    if(temp.size()==v.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<v.size();++i)
    {
        if(!vis[i])
        {
            vis[i]=1;
            temp.push_back(v[i]);
            Generate(ans,vis,temp,v);
            vis[i]=0;
            temp.pop_back();
        }
    }
}
int main(){
    vector<vector<int>>ans;
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    vector<int>vis(v.size(),0);
    vector<int>temp;
    Generate(ans,vis,temp,v);
    for(auto it:ans)
     { for(auto it1:it)
            cout<<it1<<" ,";
         cout<<endl;}
           

}