#include <zmq.hpp>
#include <string>
#include <iostream>
#include <iomanip>
#include "pointcloud.pb.h"

using namespace std;
int main() {
    zmq::context_t context(1);
    zmq::socket_t subscriber(context, ZMQ_SUB);
    subscriber.connect("tcp://localhost:5556");  // Subscriber connects to port 5556
    subscriber.setsockopt(ZMQ_SUBSCRIBE, "", 0); // Subscribe to all messages
     Data data;
    uint8_t buff[1024];
    while (true) {
        int ret = subscriber.recv(buff, 1024, 0);
        data.ParseFromArray(buff, ret);
        cout << "Topic: " << data.topic() << endl;
    	cout << "Frame ID: " << data.frameid() << endl;
    	for (int i = 0; i < data.points_size(); i++) {
    	    cout << data.points(i) << " ";
    	}
    	cout << "\n";
    }

    return 0;
}

