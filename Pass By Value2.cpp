#include <iostream>
using namespace std;
 
int tambah (int a, int b){
    return a+b;
}
 
int main () {
    cout<<tambah(5,6)<<endl; //pass by value
    cout<<tambah(19,24)<<endl; //pass by value
    cout<<tambah(79,64)<<endl; //pass by value
 
    return 0;
}
