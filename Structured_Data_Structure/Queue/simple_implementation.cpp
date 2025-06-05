# include<iostream>
# include<queue>
using namespace std;
int main(){
    queue<int>q;
    // inserting elements in queue
    q.push(10);
    q.push(90);
    q.push(45);
    // finding the size of queue
    cout<<"Size of quueue is :"<<q.size()<<endl;
    // checking if queue is empty or not
    cout<<"Is empty? : "<<q.empty()<<endl;
    // accessing front element
    cout<<"Front element "<<q.front()<<endl;
    // accesing the back element
    cout<<"Back element "<<q.back()<<endl;
    q.pop(); // removing the front element
    cout<<"Front element "<<q.front()<<endl;
    
}