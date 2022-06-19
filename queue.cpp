#include<bits/stdc++.h>
using namespace std;

//Queue follow first in first out (FIFO)

int main()
{
    int n;
    cout<<"Enter queue size : ";
    cin>>n;

    queue<int>q;

    cout<<endl<<"Enter elements for queue : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }


    cout<<endl<<"1st value of queue before pop : "<<q.front()<<endl;

    cout<<"Size of queue before pop : "<<q.size()<<endl;

    q.pop(); // here I remove the last element from queue.

    cout<<endl<<"Top value of queue after pop : "<<q.front()<<endl;

    cout<<"Size of  after pop : "<<q.size()<<endl<<endl;

    cout<<"Check queue is empty or not: "<<q.empty()<<endl; // here it will print boolean, O means not empty and 1 means empty

    /*cout<<endl<<"queue after pop : "<<endl;
    for(int i=0; i<q.size(); i++)
    {
        cout<<st[i]<<" ";
    }*/

    return 0;
}
