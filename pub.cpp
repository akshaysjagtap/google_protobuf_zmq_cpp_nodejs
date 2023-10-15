#include <zmq.hpp>
#include <string>
#include <iostream>
#include "pointcloud.pb.h"

using namespace std;

uint8_t* gd(int *size)
{
	 Data data;

    // Set values
    data.set_topic("topic2");
    data.set_frameid(42);

    // Add some points
    data.add_points(1.1);
    data.add_points(2.2);
    data.add_points(3.3);
	
	*size = data.ByteSizeLong();
    // Access values
    cout << "Topic: " << data.topic() << endl;
    cout << "Frame ID: " << data.frameid() << endl;
    cout << "Points: ";
    for (int i = 0; i < data.points_size(); i++) {
        cout << data.points(i) << " ";
    }
    cout << endl;
    
    uint8_t *buff = new uint8_t[*size];
    data.SerializeToArray(buff, *size);
    return buff;
}

int main() {
    zmq::context_t context(1);
    zmq::socket_t publisher(context, ZMQ_PUB);
    publisher.bind("tcp://*:5556");  // Publisher binds to port 5556
	const uint8_t *buff=nullptr;
	int size = 0;
	buff = gd(&size);
    while (true) {
    	publisher.send("pointCloud", 10, ZMQ_SNDMORE);
		publisher.send(buff, size, 0);
    }

    return 0;
}

