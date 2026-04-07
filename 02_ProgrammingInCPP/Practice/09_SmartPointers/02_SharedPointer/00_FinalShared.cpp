/*
2️⃣ use_count() (Returns reference count)

*/

#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<int> p1 = make_shared<int>(10); // create a shared pointer to an int initialized to 10
    shared_ptr<int> p2;
    cout<< "Before shared"<<endl;
    cout<<"======================================"<<endl;
    cout << "Reference Count for p1: " << p1.use_count() <<endl; // Output: 1
    cout << "Reference Count for p2: " << p2.use_count() <<endl; // Output: 0
    
    p2=p1; // Shared ownership

    cout<< "After shared"<<endl;
    cout<<"======================================"<<endl;
    cout << "Reference Count for p1: " << p1.use_count() <<endl; // Output: 2
    cout << "Reference Count for p2: " << p2.use_count() <<endl; // Output: 2

    cout<<"Address of P1->"<<p1.get()<<endl;  // Address also can print
    cout<<"Address of P2->"<<p2.get()<<endl;  // Address also can print
    
    p1.reset();

    cout<< "After reset p1"<<endl;
    cout<<"======================================"<<endl;
    cout << "Reference Count for p1: " << p1.use_count() <<endl; // Output: 0
    cout << "Reference Count for p2: " << p2.use_count() <<endl; // Output: 1

    cout<<"Address of P1->"<<p1.get()<<endl;  // Null
    cout<<"Address of P2->"<<p2.get()<<endl;  // Address also can print



}
/*
Before shared
======================================
Reference Count for p1: 1
Reference Count for p2: 0
After shared
======================================
Reference Count for p1: 2
Reference Count for p2: 2
Address of P1->0x55ba030842c0
Address of P2->0x55ba030842c0
After reset p1
======================================
Reference Count for p1: 0
Reference Count for p2: 1
Address of P1->0
Address of P2->0x55ba030842c0


*/