#include "zmq.h"
#include "zmqbridge.h"
#include <mutex>

std::mutex m;

void *_zmq_bridge = NULL;

void *zmq_bridge() {
    std::scoped_lock lock(m);

    if (_zmq_bridge == NULL) {
        _zmq_bridge = zmq_ctx_new();
    }

    return _zmq_bridge;
}
