#include <iostream>

namespace u {
	template <typename T>
	void log (T s) { std::cout << s << std::endl; }

	template <typename T, typename... Args>
	void log (T s, Args ...args) { std::cout << s; log(args...); }
}

#ifdef DEBUG
#define dlog u::log
#else
#define dlog
#endif
