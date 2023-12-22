/*

A Friend class can access private and 
protected members of other classed in which it
is declared as a friend. It is sometimes useful
to allow a particular class to access private
and proteted memebers of other classes.
For example, a LinkedList class may be allowed
to access private members of Node.

*/

#include <iostream>
using namespace std;

class GFG{
    private:
    int private_variable;

    protected:
    int protected_variable;

    public:
    GFG(){
        private_variable=10;
        protected_variable=99;
    }

    friend void friend_function()
}


int main(){

    return 0;
}