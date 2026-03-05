#include <iostream>
using namespace std;

int main(){
    string spy = "anya";
    string &assasin = spy;
    string psychic = "bond";
    string *ptr = &spy;
    string *ptr2 = &psychic;

    cout << " line 9: " << spy << endl;
    cout << " line 10: " << *ptr << endl;
    cout << " line 11: "  << assasin << endl;
    cout << " line 12: "  << ptr << endl;
    cout << " line 13: "  << &spy << endl;
    cout << " line 14: "  << ptr2 << endl;
    cout << " line 15: "  << *ptr2 << endl;
    
    
    return 0;
}