#include <iostream>
# include<set>
using namespace std;


int main() {
    set<int>st;
    st.insert(12);
     st.insert(112);
      st.insert(132);
       st.insert(125);
        st.insert(129);
        for(auto it:st){
            cout<<it<<" ";
        }
       auto it=st.find(145);
       cout<<*it<<endl;
       st.erase(132);
        for(auto it:st){
            cout<<it<<" ";
        }
        

   
}
