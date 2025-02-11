#include "zmq.h"
#include "zmqbridge.h"
#include <mutex>

std::mutex m;

// THIS WILL CREATE A CONTEXT THAT CAN BE USED AS A GLOBAL CONTEXT
// IF NODE.JS IS EMBEDED, HOST BINARY CAN ALSO CALL `zmq_bridge()` 
// TO OBTAIN SAME CONTEXT, ENABLING inproc:// BETWEEN HOST AND
// NODE THREADS
void *_zmq_bridge = NULL;

ZMQ_BRIDGE_API void *zmq_bridge() {
    std::scoped_lock lock(m);

    if (_zmq_bridge == NULL) {
        _zmq_bridge = zmq_ctx_new();
    }

    return _zmq_bridge;
}
