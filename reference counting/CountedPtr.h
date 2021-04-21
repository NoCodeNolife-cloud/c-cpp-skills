#pragma once

namespace cod {
	// reference counting class
	template <class T>
	class CountedPtr {
	private:
		T* ptr;
		long* count;
	public:
		// explicit constructor
		explicit CountedPtr ( T* p = 0 )
			: ptr ( p ) , count ( new long ( 1 ) ) {
			return;
		}

		// input the item
		CountedPtr ( const CountedPtr<T>& p )throw( )
			:ptr ( p.ptr ) , count ( p.count ) {
			++* count;
		}

		// destructor
		~CountedPtr ()throw( ) {
			dispose ();
		}

		// copy function
		CountedPtr<T>& operator=( const CountedPtr<T>& p )throw( ) {
			if ( this != &p ) {
				dispose ();
				ptr = p.ptr;
				count = p.count;
			}
			return *this;
		}

		T& operator*()const throw( ) {
			return *ptr;
		}

		// point
		T* operator->()const throw( ) {
			return ptr;
		}

	private:
		// delete one
		void dispose () {
			if ( -- * count == 0 ) {
				delete count;
				delete ptr;
			}
		}
	};
}