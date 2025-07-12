#include <iostream>
#include <queue>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

//---------------------------------------SINGLY QUEUE------------------------------------------------------#
// int main(){
//     queue<int>q;
//     q.push(12);
//     q.push(12);
//     q.push(12);

//    cout<<q.size()<<endl;
//    cout<<q.back()<<endl;

//    while (!q.empty()){
//     cout<<q.front()<<" ";
//     q.pop();
//    }
// }

//------------------------------------------------DOUBLY QUEUE (DEQUE)--------------------------------------------------------//

int main()
{
    deque<int> q1;

    q1.push_front(12);
    q1.push_front(12);
    q1.push_front(12);
    q1.push_back(10);
    q1.push_back(10);

    for (auto &p : q1)
    {
        cout << ++p << " ";
    }
    cout << endl;
    for (auto t : q1)
    {
        cout << t << " ";
    }
    cout << endl;

    // q1.pop_back();
    // q1.pop_front();

    for (auto t : q1)
    {
        cout << t << " ";
    }
    cout << endl;

    // ADDING VALUES IN DEQUE WITHOUT USING INDEXING..........

    deque<int>::iterator it = q1.begin();
    q1.insert(it+2, 23);
      for (auto t : q1)
    {
        cout << t << " ";
    }
    cout<<endl;

}