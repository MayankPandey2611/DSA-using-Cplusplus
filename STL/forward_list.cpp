#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    // IT IS A TYPE OF CONTAINER USED TO STORE VALUES , WHERE VALUES ARE INSERTED AND DELETED FROM FRONT ....

    forward_list<int>f;
    // INBULIT FUNCTIONS......

    // 1. PUSH_FRONT()

    f.push_front(23);
    f.push_front(2);
    f.push_front(3);
    f.push_front(3);

    for(auto k:f){
        cout<<k<<" ";
    }
cout<<endl;

    // 2. POP_FRONT()

    // f.pop_front();

    for(auto k:f){
        cout<<k<<" ";
    }
cout<<endl;
    // 3. SORT()

    f.sort();

      for(auto k:f){
        cout<<k<<" ";
    }

cout<<endl;

// 4. UNIQUE()

f.unique();

   for(auto k:f){
        cout<<k<<" ";
    }

cout<<endl;

// 5. MERGE()

forward_list<int>f2{12,3,2,4,5};

f.sort();
f2.sort();

f.merge(f2);
// f.unique();


 for(auto k:f){
        cout<<k<<" ";
    }

cout<<endl;



// 6. REVERSE()

f.reverse();
 for(auto k:f){
        cout<<k<<" ";
    }

cout<<endl;


// 7. DISTANCE(.BEGIN() , .END())
cout<<distance(f.begin() , f.end());
cout<<endl;

// 8. USE OF ITERATOR , ACCESSING VALUES OF LIST USING POINTER....

forward_list<int>::iterator it = f.begin();

for(it = f.begin(); it !=f.end(); it++){
    cout<<*it<<" ";
}
cout<<endl;

}