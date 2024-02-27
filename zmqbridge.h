#ifdef WIN32
#	ifdef ZMQ_BRIDGE_EXPORTS
#		define ZMQ_BRIDGE_API __declspec(dllexport)
#	else
#		define ZMQ_BRIDGE_API __declspec(dllimport)
#	endif
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define ZMQ_BRIDGE_API __attribute__ ((visibility("default")))
#else
#	define ZMQ_BRIDGE_API
#endif

ZMQ_BRIDGE_API void* zmq_bridge();
