// FILE: Stack1.template
// TEMPLATE CLASS IMPLEMENTED: Stack<Item> (see Stack1.h for documentation)
// This file is included in the header file, and not compiled separately.
// INVARIANT for the Stack class:
//   1. The number of items in the Stack is in the member variable used.
//   2. The actual items of the Stack are stored in a partially-filled
//      array data[0]..data[used-1]. The Stack elements appear from the
//      bottom (at data[0]) to the top (at data[used-1]).

#include <cassert>  // Provides assert

namespace main_savitch_7A
{
	template <class Item>
	const typename Stack<Item>::size_type Stack<Item>::CAPACITY;
	
	template <class Item>
	void Stack<Item>::push(const Item& entry)
	// Library facilities used: cassert
	{
// Your code goes here
        assert(size() < CAPACITY);
        data[used] = entry; //new entry is put into first empty spot
        ++used;
		return;
	}
	
	template <class Item>
	Item Stack<Item>::pop( )
	// Library facilities used: cassert
	{
// Your code goes here
        assert(size( ) > 0);
        --used;
        return data[used];
	}
	
	template <class Item>
	Item Stack<Item>::top( ) const
	// Library facilities used: cassert
	{
// Your code goes here
        assert(size() > 0);
        return data[used-1];
	}
	
	template <class Item>
	Item Stack<Item>::peek(size_type i) //const
	// Library facilities used: cassert
	{
// Your code goes here
        assert(size( ) >= i && i > 0);
        //size_type temp_used = used - 1;
        return data[used - i];
        
        
	}
}
