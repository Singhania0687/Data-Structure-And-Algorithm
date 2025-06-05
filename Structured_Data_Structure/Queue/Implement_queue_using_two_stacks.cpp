      // Implementing a queue using two stacks in c++
#include<iostream>
#include<stack>
using namespace std;

class Queue {
    stack<int>s1,s2;
    public:
        void enqueue(int x){
            s1.push(x);
        }
        
        int dequeue(){
            // If both stacks are empty
            if(s1.empty() && s2.empty()){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }
            
            // If s2 is empty, transfer elements from s1
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            
            // Return the front element from s2
            int topval = s2.top();
            s2.pop();
            return topval;
        }
        
        bool isEmpty(){
            return (s1.empty() && s2.empty());
        }
        
        int front(){
            // If both stacks are empty
            if(s1.empty() && s2.empty()){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }
            
            // If s2 is empty, transfer elements from s1
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            
            return s2.top();
        }
};         