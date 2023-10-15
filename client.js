// subber.js
var zmq = require("zeromq");
const protobuf = require('./pointcloud_pb.js');

  sock = zmq.socket("sub");

sock.connect("tcp://127.0.0.1:5556");
sock.subscribe("");
console.log("Subscriber connected to port 5556");

sock.on("message", function(topic, message) {
	console.log(topic.toString());
    const decodedData = protobuf.Data.deserializeBinary(message);

	// Access the fields
	console.log(decodedData.getTopic());    // 'example_topic'
	console.log(decodedData.getFrameid());  // 42
	console.log(decodedData.getPointsList());  // [1.1, 2.2, 3.3]
});

