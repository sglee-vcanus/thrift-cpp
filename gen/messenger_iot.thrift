namespace cpp thrift_gen
namespace java org.chronotics.talaria.thrift.gen
namespace php thrift_gen 

struct ThriftMessage {
	1:  required string 			_sender_id;
	2:  optional string 			_receiver_id;
	3:  required string			_timestamp;
	4:  optional string 			_subject;
	5:  optional i64 			_sequence_no;
	6:  optional i64			_total_count;
	7:  optional binary 			_binary;
	8:  optional string 			_payload;
	9:  optional list<bool> 		_list_bool;
	10: optional list<i16> 			_list_i16;
	11: optional list<i32> 			_list_i32;
	12: optional list<i64> 			_list_i64;
	13: required list<double> 		_list_double;
	14: optional list<string>		_list_string;
	15: optional set<bool> 			_set_bool;
	16: optional set<i16> 			_set_i16;
	17: optional set<i32> 			_set_i32;
	18: optional set<i64> 			_set_i64;
	19: optional set<double> 		_set_double;
	20: optional set<string>		_set_string;
	21: optional map<string,bool> 		_map_bool;
	22: optional map<string,i16> 		_map_i16;
	23: optional map<string,i32> 		_map_i32;
	24: optional map<string,i64> 		_map_i64;
	25: optional map<string,double> 	_map_double;
	26: optional map<string,string>		_map_string;
	27: optional list<ThriftMessage> 	_list_message;
	28: optional set<ThriftMessage>		_set_message;
	29: optional map<string,ThriftMessage> 	_map_message;
}

exception InvalidOperationException {
	1: i32 code,
	2: string description
}

service ThriftRWService {
	bool ping()
		throws(1:InvalidOperationException e),
	string writeThriftMessage(1:ThriftMessage _v) 
		throws(1:InvalidOperationException e),
	string writeBool(1:string _id, 2:bool _v)
		throws(1:InvalidOperationException e),
	string writeI16(1:string _id, 2:i16 _v)
		throws(1:InvalidOperationException e),
	string writeI32(1:string _id, 2:i32 _v)
		throws(1:InvalidOperationException e),
	string writeI64(1:string _id, 2:i64 _v)
		throws(1:InvalidOperationException e),
	string writeDouble(1:string _id, 2:double _v)
		throws(1:InvalidOperationException e),
	string writeString(1:string _id, 2:string _v)
		throws(1:InvalidOperationException e),
	ThriftMessage readThriftMessage(1:string _id)
		throws(1:InvalidOperationException e),
	bool readBool(1:string _id)
		throws(1:InvalidOperationException e),
	i16 readI16(1:string _id)
		throws(1:InvalidOperationException e),
	i32 readI32(1:string _id)
		throws(1:InvalidOperationException e),
	i64 readI64(1:string _id)
		throws(1:InvalidOperationException e),
	double readDouble(1:string _id)
		throws(1:InvalidOperationException e),
	string readString(1:string _id)
		throws(1:InvalidOperationException e),
	bool writeId(1:string _id)
		throws(1:InvalidOperationException e),
	list<string> readId()
		throws(1:InvalidOperationException e)
}
