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
void explainPairs(); {

    pair <int, int> p = {9, 8}; //Creates a Pair.

    cout << p.first << " " << p.second; //Prints the pairs.

    pair<int, pair<int, int>> p1 = {1,{5,6}}; //Nested pairs.

    cout << p1.first << " " << p1.second.first << " " << p1.second.second; //Prints Nested pair.

    pair<int, int> arr[] = {{1, 2},{5, 6},{8, 3},{9, 4}}; //Array of Pair.

    cout << arr[1].second << " "; //Prints second element of index 1 Array.
}

// *** Vectors *** //
void explainVectors();{

    vector<int> v; //Creates a vector of int data type of variable v.

    v.push_back(5); //adds 5 at the last of vector v.
    v.emplace_back(6); //same as push_back but better.

    vector<pair<int, int>> vec; //Creates a vector of pair.

    vec.push_back({1, 5}); //adds a pair to vector vec.
    vec.emplace_back(9, 6);

    vector<int> v(3, 100); //Create a vector of size 3 with every element 100 - {100, 100, 100};
    vector<int> v(3); //Creates a vector of size 3 with every element 0 - {0, 0, 0};

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

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " "; //Both lines print the first element of the vector v, but v.at() is better.

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
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}
     
}

}
