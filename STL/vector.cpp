// Topic : std::vector

/* Notes : 
      1.std::vector is a sequence container and also known as Dynamic Array or Array List.
      
      It is a combination of Array and Linked List.
      
      Vector => Fast Access(Array) + Dynamic Array List (Linked List)
     
      Vector Gives O(1) array access time.

      Using Vector It provides feature Its Size can grow and shrink wherever we want/Dynamically (Linked List)
     
      And No Need To Provide Size At Compile Time
      
Access Elements:
   a. at() 
   
    // Printing array elements using at()
    cout << "The array elements are (using at()) : ";
    for ( int i=0; i<5; i++)
    cout << ar.at(i) << " "; // 1 2 3 4 5
    cout << endl;
     It will show exception case if the element is missing.

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

MODIFIERS:
    assign(), insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()
    
    a)assign() – It assigns new value to the vector elements by replacing old ones
    
    b)push_back() – It push the elements into a vector from the back
    
    c)pop_back() – It is used to pop or remove elements from a vector from the back.

    d)insert() – It inserts new elements before the element at the specified position
    
    e)erase() – It is used to remove elements from a container from the specified position or range.
    
    f)swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    
    g)clear() – It is used to remove all the elements of the vector container
    
    h)emplace() – It extends the container by inserting new element at position
    
    i)emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){

   //Declare 
   std::vector<int> array1;
   std::vector<int> array2 (5,20);// Size will be 5 and put 20 in all places

   //Initialization
   std::vector<int> array3 = {1,2,3,4,5}; //Initializer List
   std::vector<int> array4 {1,2,3,4,5}; //Uniform Initialization
   std::array<string, 2> ar3 = {{string("a"), "b"}};

   //Assign Elements
   array2[3] = 10;
   array2.at(3) = 10;
}

