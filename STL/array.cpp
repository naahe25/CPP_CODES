// Topic: STL Array
// Syntax: std::array<T, N>array;

/* NOTICE
1. std::array is a container that encapsulate fixed sized arrays.

2.array size is needed at compile time.

3.Assign by value is actually by value.

4.Access Elements:

at(),[],front(),back(), get[], data(), .fill()
  
   a. at() 
   
    // Printing array elements using at()
    cout << "The array elements are (using at()) : ";
    for ( int i=0; i<5; i++)
    cout << ar.at(i) << " "; // 1 2 3 4 5
    cout << endl;

   b) []

   c) front()

   d) back()

   e) get[] // Use #include<tuple> for get() 

   Example :  
   
   // Printing array elements using get()
    cout << "The array elements are (using get()) : ";
    cout << get<0>(myarray) << " " << get<1>(myarray) << " "; // 1 2
    cout << get<2>(myarray) << " " << get<3>(myarray) << " "; // 3 4
    cout << get<4>(myarray) << " " << get<5>(myarray) << " "; // 5 6
    cout << endl;

   f) data() // gives acess to underlying array.It Gives/Return Pointer Of That array,We get adress of that array. 
   
   g) .fill() // Use .fill function if we want assign some value in all 5 places.Example : array.fill(5); -> arrray={5,5,5,5,5}

*/

#include<bits/stdc++.h>
#include<array>
#include<string>
using namespace std;

int main(){

   //Declare 
   std::array<int, 5> myarray;

   //Initialization
   std::array<int,5> myarray ={1,2,3,4,5}; //Initializer List
   std::array<int,5> myarray2 {1,2,3,4,5}; //Uniform Initialization
   std::array<string, 2> ar3 = {{string("a"), "b"}};

   //Assign Using Initializer List
   std::array<int,5> myarray;
   myarray = {1,2,3,4,5};

cout<<myarray<<endl;
   return 0;
}