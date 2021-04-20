#pragma once

namespace cod {
	template<typename T>
	class RuntimeCmp {
	public:
		enum cmp_mode {
			normal , reverse
		};

	private:
		cmp_mode mode;

	public:
		// constructor for sorting criterion
		RuntimeCmp ( cmp_mode m = normal ) :mode ( m ) {
			return;
		}

		// comparision of elements
		bool operator()( const T& t1 , const T& t2 )const {
			return mode == normal ? t1 < t2 : t2 < t1;
		}

		// comparision of sorting criteria
		bool operator==( const RuntimeCmp& rc ) {
			return mode == rc.mode;
		}
	};
}