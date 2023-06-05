#include <vector>
using namespace std;

template <typename Object>
class Stack {
    public:
        explicit Stack( const int initialCapacity = 1 )
        {
            capacity  = initialCapacity;
            vec[0] = -1;
            vec.reserve(capacity);
        }

        void push ( const Object & other ) {
            vec.push_back( other );
        }

        void pop ( ) {
            if (!isEmpty()){
                vec.pop_back( );
            }
        }

        bool isEmpty ( ) const {
            if (vec[0] == -1){
                return true;
            }
            return false;
        }

        bool makeEmpty ( ) {
            for (int i = 0; i < vec.size; i++){
                vec[i] = nullptr;
            }
        }

        Object top ( ) const {
            return vec[vec.size-1];
        }

    private:
        vector<Object> vec;
        int capacity;
};
