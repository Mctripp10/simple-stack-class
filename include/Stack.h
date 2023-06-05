/*
 * Michael Tripp
 * In-class project 2
 * 9/14/2020
 */

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <vector>
using namespace std;

template <typename Object>
class Stack {
    public:

        explicit Stack( const int initialCapacity = 1 )
        {
            capacity  = initialCapacity;
            topOfStack = -1;
            vec.reserve(capacity);
        }

        void push ( const Object & other ) {
            vec.push_back(other);
            topOfStack++;
        }

        void pop ( ) {
            if (!isEmpty()){
                vec.pop_back();
            }
            topOfStack--;
        }

        bool isEmpty ( ) const {
            if (topOfStack == -1){
                return true;
            }
            return false;
        }

        void makeEmpty ( ) {
            if (!isEmpty()){
                vec.clear();
            }
            topOfStack = -1;
        }

        Object top ( ) const {
            if (!isEmpty()){
                return vec.back();
            }
        }

        int Size () const {
            return topOfStack;
        }

    private:
        vector<Object> vec;
        int capacity;
        int topOfStack;
};

#endif // STACK_H_INCLUDED
