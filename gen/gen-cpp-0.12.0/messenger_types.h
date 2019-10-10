/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef messenger_TYPES_H
#define messenger_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>


namespace thrift_gen {

class ThriftMessage;

class InvalidOperationException;

typedef struct _ThriftMessage__isset {
  _ThriftMessage__isset() : _receiver_id(false), _timestamp(false), _subject(false), _sequence_no(false), _total_count(false), _binary(false), _payload(false), _list_bool(false), _list_i16(false), _list_i32(false), _list_i64(false), _list_double(false), _list_string(false), _set_bool(false), _set_i16(false), _set_i32(false), _set_i64(false), _set_double(false), _set_string(false), _map_bool(false), _map_i16(false), _map_i32(false), _map_i64(false), _map_double(false), _map_string(false), _list_message(false), _set_message(false), _map_message(false) {}
  bool _receiver_id :1;
  bool _timestamp :1;
  bool _subject :1;
  bool _sequence_no :1;
  bool _total_count :1;
  bool _binary :1;
  bool _payload :1;
  bool _list_bool :1;
  bool _list_i16 :1;
  bool _list_i32 :1;
  bool _list_i64 :1;
  bool _list_double :1;
  bool _list_string :1;
  bool _set_bool :1;
  bool _set_i16 :1;
  bool _set_i32 :1;
  bool _set_i64 :1;
  bool _set_double :1;
  bool _set_string :1;
  bool _map_bool :1;
  bool _map_i16 :1;
  bool _map_i32 :1;
  bool _map_i64 :1;
  bool _map_double :1;
  bool _map_string :1;
  bool _list_message :1;
  bool _set_message :1;
  bool _map_message :1;
} _ThriftMessage__isset;

class ThriftMessage : public virtual ::apache::thrift::TBase {
 public:

  ThriftMessage(const ThriftMessage&);
  ThriftMessage& operator=(const ThriftMessage&);
  ThriftMessage() : _sender_id(), _receiver_id(), _timestamp(), _subject(), _sequence_no(0), _total_count(0), _binary(), _payload() {
  }

  virtual ~ThriftMessage() throw();
  std::string _sender_id;
  std::string _receiver_id;
  std::string _timestamp;
  std::string _subject;
  int64_t _sequence_no;
  int64_t _total_count;
  std::string _binary;
  std::string _payload;
  std::vector<bool>  _list_bool;
  std::vector<int16_t>  _list_i16;
  std::vector<int32_t>  _list_i32;
  std::vector<int64_t>  _list_i64;
  std::vector<double>  _list_double;
  std::vector<std::string>  _list_string;
  std::set<bool>  _set_bool;
  std::set<int16_t>  _set_i16;
  std::set<int32_t>  _set_i32;
  std::set<int64_t>  _set_i64;
  std::set<double>  _set_double;
  std::set<std::string>  _set_string;
  std::map<std::string, bool>  _map_bool;
  std::map<std::string, int16_t>  _map_i16;
  std::map<std::string, int32_t>  _map_i32;
  std::map<std::string, int64_t>  _map_i64;
  std::map<std::string, double>  _map_double;
  std::map<std::string, std::string>  _map_string;
  std::vector<ThriftMessage>  _list_message;
  std::set<ThriftMessage>  _set_message;
  std::map<std::string, ThriftMessage>  _map_message;

  _ThriftMessage__isset __isset;

  void __set__sender_id(const std::string& val);

  void __set__receiver_id(const std::string& val);

  void __set__timestamp(const std::string& val);

  void __set__subject(const std::string& val);

  void __set__sequence_no(const int64_t val);

  void __set__total_count(const int64_t val);

  void __set__binary(const std::string& val);

  void __set__payload(const std::string& val);

  void __set__list_bool(const std::vector<bool> & val);

  void __set__list_i16(const std::vector<int16_t> & val);

  void __set__list_i32(const std::vector<int32_t> & val);

  void __set__list_i64(const std::vector<int64_t> & val);

  void __set__list_double(const std::vector<double> & val);

  void __set__list_string(const std::vector<std::string> & val);

  void __set__set_bool(const std::set<bool> & val);

  void __set__set_i16(const std::set<int16_t> & val);

  void __set__set_i32(const std::set<int32_t> & val);

  void __set__set_i64(const std::set<int64_t> & val);

  void __set__set_double(const std::set<double> & val);

  void __set__set_string(const std::set<std::string> & val);

  void __set__map_bool(const std::map<std::string, bool> & val);

  void __set__map_i16(const std::map<std::string, int16_t> & val);

  void __set__map_i32(const std::map<std::string, int32_t> & val);

  void __set__map_i64(const std::map<std::string, int64_t> & val);

  void __set__map_double(const std::map<std::string, double> & val);

  void __set__map_string(const std::map<std::string, std::string> & val);

  void __set__list_message(const std::vector<ThriftMessage> & val);

  void __set__set_message(const std::set<ThriftMessage> & val);

  void __set__map_message(const std::map<std::string, ThriftMessage> & val);

  bool operator == (const ThriftMessage & rhs) const
  {
    if (!(_sender_id == rhs._sender_id))
      return false;
    if (__isset._receiver_id != rhs.__isset._receiver_id)
      return false;
    else if (__isset._receiver_id && !(_receiver_id == rhs._receiver_id))
      return false;
    if (__isset._timestamp != rhs.__isset._timestamp)
      return false;
    else if (__isset._timestamp && !(_timestamp == rhs._timestamp))
      return false;
    if (__isset._subject != rhs.__isset._subject)
      return false;
    else if (__isset._subject && !(_subject == rhs._subject))
      return false;
    if (__isset._sequence_no != rhs.__isset._sequence_no)
      return false;
    else if (__isset._sequence_no && !(_sequence_no == rhs._sequence_no))
      return false;
    if (__isset._total_count != rhs.__isset._total_count)
      return false;
    else if (__isset._total_count && !(_total_count == rhs._total_count))
      return false;
    if (__isset._binary != rhs.__isset._binary)
      return false;
    else if (__isset._binary && !(_binary == rhs._binary))
      return false;
    if (__isset._payload != rhs.__isset._payload)
      return false;
    else if (__isset._payload && !(_payload == rhs._payload))
      return false;
    if (__isset._list_bool != rhs.__isset._list_bool)
      return false;
    else if (__isset._list_bool && !(_list_bool == rhs._list_bool))
      return false;
    if (__isset._list_i16 != rhs.__isset._list_i16)
      return false;
    else if (__isset._list_i16 && !(_list_i16 == rhs._list_i16))
      return false;
    if (__isset._list_i32 != rhs.__isset._list_i32)
      return false;
    else if (__isset._list_i32 && !(_list_i32 == rhs._list_i32))
      return false;
    if (__isset._list_i64 != rhs.__isset._list_i64)
      return false;
    else if (__isset._list_i64 && !(_list_i64 == rhs._list_i64))
      return false;
    if (__isset._list_double != rhs.__isset._list_double)
      return false;
    else if (__isset._list_double && !(_list_double == rhs._list_double))
      return false;
    if (__isset._list_string != rhs.__isset._list_string)
      return false;
    else if (__isset._list_string && !(_list_string == rhs._list_string))
      return false;
    if (__isset._set_bool != rhs.__isset._set_bool)
      return false;
    else if (__isset._set_bool && !(_set_bool == rhs._set_bool))
      return false;
    if (__isset._set_i16 != rhs.__isset._set_i16)
      return false;
    else if (__isset._set_i16 && !(_set_i16 == rhs._set_i16))
      return false;
    if (__isset._set_i32 != rhs.__isset._set_i32)
      return false;
    else if (__isset._set_i32 && !(_set_i32 == rhs._set_i32))
      return false;
    if (__isset._set_i64 != rhs.__isset._set_i64)
      return false;
    else if (__isset._set_i64 && !(_set_i64 == rhs._set_i64))
      return false;
    if (__isset._set_double != rhs.__isset._set_double)
      return false;
    else if (__isset._set_double && !(_set_double == rhs._set_double))
      return false;
    if (__isset._set_string != rhs.__isset._set_string)
      return false;
    else if (__isset._set_string && !(_set_string == rhs._set_string))
      return false;
    if (__isset._map_bool != rhs.__isset._map_bool)
      return false;
    else if (__isset._map_bool && !(_map_bool == rhs._map_bool))
      return false;
    if (__isset._map_i16 != rhs.__isset._map_i16)
      return false;
    else if (__isset._map_i16 && !(_map_i16 == rhs._map_i16))
      return false;
    if (__isset._map_i32 != rhs.__isset._map_i32)
      return false;
    else if (__isset._map_i32 && !(_map_i32 == rhs._map_i32))
      return false;
    if (__isset._map_i64 != rhs.__isset._map_i64)
      return false;
    else if (__isset._map_i64 && !(_map_i64 == rhs._map_i64))
      return false;
    if (__isset._map_double != rhs.__isset._map_double)
      return false;
    else if (__isset._map_double && !(_map_double == rhs._map_double))
      return false;
    if (__isset._map_string != rhs.__isset._map_string)
      return false;
    else if (__isset._map_string && !(_map_string == rhs._map_string))
      return false;
    if (__isset._list_message != rhs.__isset._list_message)
      return false;
    else if (__isset._list_message && !(_list_message == rhs._list_message))
      return false;
    if (__isset._set_message != rhs.__isset._set_message)
      return false;
    else if (__isset._set_message && !(_set_message == rhs._set_message))
      return false;
    if (__isset._map_message != rhs.__isset._map_message)
      return false;
    else if (__isset._map_message && !(_map_message == rhs._map_message))
      return false;
    return true;
  }
  bool operator != (const ThriftMessage &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ThriftMessage &rhs) const {
	  return this->_sender_id < rhs._sender_id? true : false;
  }

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ThriftMessage &a, ThriftMessage &b);

std::ostream& operator<<(std::ostream& out, const ThriftMessage& obj);

typedef struct _InvalidOperationException__isset {
  _InvalidOperationException__isset() : code(false), description(false) {}
  bool code :1;
  bool description :1;
} _InvalidOperationException__isset;

class InvalidOperationException : public ::apache::thrift::TException {
 public:

  InvalidOperationException(const InvalidOperationException&);
  InvalidOperationException& operator=(const InvalidOperationException&);
  InvalidOperationException() : code(0), description() {
  }

  virtual ~InvalidOperationException() throw();
  int32_t code;
  std::string description;

  _InvalidOperationException__isset __isset;

  void __set_code(const int32_t val);

  void __set_description(const std::string& val);

  bool operator == (const InvalidOperationException & rhs) const
  {
    if (!(code == rhs.code))
      return false;
    if (!(description == rhs.description))
      return false;
    return true;
  }
  bool operator != (const InvalidOperationException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidOperationException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(InvalidOperationException &a, InvalidOperationException &b);

std::ostream& operator<<(std::ostream& out, const InvalidOperationException& obj);

} // namespace

#endif
