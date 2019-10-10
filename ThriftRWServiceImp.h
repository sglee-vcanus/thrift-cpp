#include <iostream>
#include <fstream>
#include <string>

#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>
#include <thrift/stdcxx.h>

#include <thrift/concurrency/ThreadManager.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/server/TThreadPoolServer.h>
#include <thrift/server/TThreadedServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>
#include <thrift/TToString.h>

#include "thrift/messenger_constants.h"
#include "thrift/messenger_types.h"
#include "thrift/ThriftRWService.h"

using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;

using namespace apache::thrift::concurrency;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using namespace apache::thrift::server;

using namespace thrift_gen;

class ThriftRWServiceImp : public ThriftRWServiceIf {
public:
	ThriftRWServiceImp() {}
	virtual ~ThriftRWServiceImp() {}

	bool ping() { return true; }

	void writeThriftMessage(
		string &_return, 
		const ThriftMessage &_v) {
		cout << "writeThriftMessage" << endl;
	}

	void writeBool(
		string &_return,
		const string &_id,
		const bool _v) {
		cout << "writeBool" << endl;
	}

	void writeI16(
		string &_return, 
		const string &_id, 
		const int16_t _v) {
		cout << "write16" << endl;
	}

	void writeI32(
		string &_return,
		const string &_id,
		const int32_t _v) {
		cout << "write32" << endl;
	}

	void writeI64(
		string &_return,
		const string &_id,
		const int64_t _v) {
		cout << "write64" << endl;
	}

	void writeDouble(
		string &_return,
		const string &_id,
		const double _v) {
		cout << "writeDouble" << endl;
	}

	void writeString(
		string &_return,
		const string &_id,
		const string &_v) {
		cout << "writeString" << endl;
	}

	void readThriftMessage(
		ThriftMessage &_return,
		const string &_id) {
		cout << "readThriftMessage" << endl;
	}

	bool readBool(
		const string &_id) {
		cout << "readBool" << endl;
		return true;
	}

	int16_t readI16(
		const string &_id) {
		cout << "readI16" << endl;
		return 0;
	}

	int32_t readI32(
		const string &_id) {
		cout << "readI32" << endl;
		return 0;
	}

	int64_t readI64(
		const string &_id) {
		cout << "readI64" << endl;
		return 0;
	}

	double readDouble(
		const string &_id) {
		cout << "readDouble" << endl;
		return 0;
	}

	void readString(
		string &_return,
		const string &_id) {
	//	_return = "server string";
		cout << "readString" << endl;
	}

	bool writeId(
		const string &_id) {
		cout << "writeId" << endl;
		return true;
	}

	void readId(
		vector<string> &_return) {
		cout << "readId" << endl;
	}
};

class ThriftRWServiceImpFactory : public ThriftRWServiceIfFactory {
public:
	ThriftRWServiceImpFactory() {}
	virtual ~ThriftRWServiceImpFactory() {}

	virtual ThriftRWServiceIf *getHandler(
		const ::apache::thrift::TConnectionInfo &connInfo) {
		std::shared_ptr<TSocket> sock =
			std::dynamic_pointer_cast<TSocket>(connInfo.transport);
		cout << "Incomming connection" << endl;
		cout << "SocketInfo: " << sock->getSocketInfo() << endl;
//		cout << "PeerHost: " << sock->getPeerHost() << endl;
//		cout << "PeerAddress: " << sock->getPeerAddress() << endl;
//		cout << "PeerPort: " << socket->getPeerPort() << endl;
		return new ThriftRWServiceImp();
	}

	virtual void releaseHandler(ThriftRWServiceIf *handler) {
		delete handler;
	}
};

