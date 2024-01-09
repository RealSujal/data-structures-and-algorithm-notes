#include <bits/stdc++.h>
using namespace std;

int main()
{
/*
    # C++ STL divided into 4 types:
    1. Algorithms
    2. Containers ***
    3. Functions
    4. Iterators ***
*/

// *** Pairs *** //
void explainPairs()
{

    pair <int, int> p = {9, 8}; //Creates a Pair.

    cout << p.first << " " << p.second; //Prints the pairs.

    pair<int, pair<int, int>> p1 = {1,{5,6}}; //Nested pairs.

    cout << p1.first << " " << p1.second.first << " " << p1.second.second; //Prints Nested pair.

    pair<int, int> arr[] = {{1, 2},{5, 6},{8, 3},{9, 4}}; //Array of Pair.

    cout << arr[1].second << " "; //Prints second element of index 1 Array.
}

// *** Vectors *** //
void explainVectors()
{

    vector<int> v; //Creates a vector of int data type of variable v.

    v.push_back(5); //adds 5 at the last of vector v.
    v.emplace_back(6); //same as push_back but better.

    vector<pair<int, int>> vec; //Creates a vector of pair.

    vec.push_back({1, 5}); //adds a pair to vector vec.
    vec.emplace_back(9, 6);

    vector<int> v(3, 100); //Create a vector of size 3 with every element 100 -> {100, 100, 100};
    vector<int> v(3); //Creates a vector of size 3 with every element 0 -> {0, 0, 0};

    vector<int> v1(5, 20);
    vector<int> v2(v1); // Shallow copy of v1.

    vector<int>::iterator it = v.begin(); //Creates a iterator it that points to the first element of vector.
    it++; //Moves the iterator it to the next element in the vector.
    cout << *(it) << " "; //Prints the value of the element currently pointed to by it.

    it = it + 2; //Shifts the iterator it by two positions.
    cout << *(it) << " "; //Prints the value of the element now pointed to by it.

    vector<int>::iterator it = v.end(); //it points to the element next to the last one.
    vector<int>::iterator it = v.rend(); 
    vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0); //Both lines print the first element of the vector v, but v.at() is better.
    cout << v.back() << " "; //returns a reference to the last element in the vector.

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    } // Prints the vector using iterator method, we can also prints it using normal forLoop.

    for (auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    } // Replaces vector<int>::iterator with auto, simple method, auto assigns the data type automatically.

    for (auto it : v){
        cout << it << " ";
    } // More Simpler method, forEach Loop.

    // Erase Function
    // {10, 20, 50, 40}
    v.erase(v.begin() + 1); //it will erase 20.

    // {10, 20, 50, 40, 60}
    v.erase(v.begin() + 2, v.begin() + 4); //it will erase 50 and 40. [Start, end) start is included but end is not included.

    // Insert Function
    vector<int> v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}; 2 is the occurence of 10, if we give 5 instead of 2, it will add 5 - 10 to the vector.

    vector<int> copy(2, 50); // {50, 50};
    v.insert(v.begin(), copy.begin(), copy.end()); //adds the entire 'copy' vector to beginning of vector 'v'.

    // {10, 20};
    cout << v.size();

    // {10, 20};
    v.pop_back(); // Pops out the last element of vector.

    // v1 -> {10, 20};
    // v2 -> {40, 50};
    v1.swap(v2); // elements of v1 swaps with v2. v1 -> {40, 50}; v2 -> {10, 20};

    v.clear(); // Erases the entire vector.

    cout << v.empty(); // Checks if the vector is empty. Return true if empty, else false.
}







void explainList()
{

    // A list is an ordered data structure that stores collection of items in a specific order.
    list<int> ls;
    ls.push_back(4); // {4};
    ls.emplace_back(5); // {4, 5};

    ls.push_front(1); // adds an element to the front of list. {1, 4, 5};
    ls.emplace_front(2); // same as push_front. {2, 1, 4, 5};

    // Rest functions are same as vector
    // Begin, end, rbegin, rend, clear, insert, size, swap
}





void explainDeque()
{

    // Deque is a data structure that inherits the properties of both queues and stacks.
    deque<int> dq;
    dq.push_back(1); // {1};
    dq.emplace_back(2); // {1, 2};
    dq.push_front(3); // {3, 1, 2};
    dq.emplace_front(4); // {4, 3, 1, 2};

    dq.pop_back(); // {4, 3, 1};
    dq.pop_front(); // {3, 1};

    dq.back(); // returns the last element of the deque.
    dq.front(); // returns the first element of the deque.

    // Rest functions are same as vector
        // Begin, end, rbegin, rend, clear, insert, size, swap
}






void explainStack()
{  // O(1) --> everything happens in constant time

    // A stack is a linear data structure that follows the Last In First Out (LIFO) principle.
    stack<int> st;
    st.push(1); // {1};
    st.push(2); // {2, 1};
    st.push(3); // {3, 2, 1};
    st.push(4); // {4, 3, 2, 1};
    st.emplace(5); // {5, 4, 3, 2, 1};

    cout << st.top(); // prints 5 "** st[2] is invalid **"

    st.pop(); //pops the top element. {4, 3, 2, 1};

    cout << st.top(); // 4

    cout << st.size(); // 4

    cout << st.empty(); // Checks if the stack is empty. Return true if empty, else false.

    stack<int> st1, st2;
    st1.swap(st2); // swaps with each other.
}







void explainQueue()
{   // O(1) --> all happens in constant time

    queue<int> q; // Queue is FIFO -> FirstInFirstOut
    q.push(1); // {1};
    q.push(2); // {1, 2};
    q.emplace(4); // {1, 2, 4};

    q.back() += 5; // Adds with last element (4 + 5 = 9);

    // Q is {1, 2, 9}
    cout << q.front(); // Prints 1

    q.pop(); // Front element will pop out. {2, 9};

    cout << q.front(); // Prints 2

    // size, swap, empty, same as stack
}









void explainPQ()
{    //push --> O(logN)
     //top --> O(1)
     //pop --> O(logN)

    // Maximum Heap
    priority_queue<int> pq;

    pq.push(5); // {5};
    pq.push(2); // {5, 2};
    pq.push(8); // {8, 5, 2};
    pq.emplace(10); // {10, 8, 5, 2};

    cout << pq.top(); // Prints 10.

    pq.pop(); // Pops out 10. {8, 5, 2};

    cout << pq.top(); // Prints 8.

    // size, swap, empty, function, same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}; 
    pq.push(2); // {2, 5};
    pq.push(8); // {2, 5, 8};
    pq.emplace(10); // {2, 5, 8, 10};

    cout << pq.top(); // Prints 2.

}








void explainSet()
{   // O(logN)

    // Set stores UNIQUE value in SORTED order.
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2} ---> 2 will not insert here because 2 already exist, set only keeps unique value.
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4} --- stores in Sorted order.

    // Functionality of insert in vector can be used, That will only increase efficiency.

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // Return the iterator that points to 3.

    // {1, 2, 3, 4, 5}
    auto it = st.find(6); // If the element does not exist, it will return st.end() - iterator that points right after the end.

    // {1, 4, 5}
    st.erase(5); // erases 5 // takes logarithmic time

    int cnt = st.count(1); // Return 1 if exist, else 0 --- it basically returns the occurence.

    auto it = st.find(3);
    st.erase(it); // it takes constant time, erases the iterator.

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last) -- Same as v.erase(v.begin() + 1, v.begin() + 3);

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does.

    // This is the syntax
    auto it = st.lower_bound(2); // Lower bound return first element which is ≥ value. If not, return end().

    auto it = st.upper_bound(3); // Upper bound return first element which is > value. If not, return end().
}










void explainMultiSet()
{
    // Everything is same as set (Sorted Order).
    // only stores duplicate elements also.

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1s erased.

    ms.erase(ms.find(1)); // Only erases a single 1. --> {1, 1}

    ms.erase(ms.find(1), next(ms.find(1), 2)); // Erases both the remaining 1.

    // Rest all functions are same as set.
}








    void explainUnorderedSet(); {
        // lower_bound and upper_bound function
        // does not work, rest all function are same
        // as its name says, it does not stores any
        // particular order it has a better complexity
        // than set in most cases, except some when collision happens

        unordered_set<int> set;
    }
     
}

}
