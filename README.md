# How to Use Thrift

## Purpose
This repository is designed to make source codes based on a general IDL file, ./gen/messenger.thrift. 

## Prerequisite
Thfit should  be installed on your machine
- Windows: use vcpkg
- Linux: make source
- Mac: use brew

## Move to the gen folder
```
$ mv gen
```

## Run thrift
```
$ thrift -r --gen cpp messenger.thrift
$ thrift -r --gen java messenger.thrift
$ thrift -r --gen py messenger.thrift
```

## Copy generated files to the specific folder to use them as source in c++ environment. 
```
$ cp ./gen-cpp/* ../../../inclue/thrift/
```
or you can use cp_genfiles.sh

## Change folder name
gen-(language)-(version)
```
$ mv gen-cpp gen-cpp-0.12.0
```

## Modification
### Case of C++
You have to modify the funtion of "ThriftMessage::operator<" in messenger-types.h 
```
bool operator < (const ThriftMessage &) const;
```
to
```
bool operator < (const ThriftMessage &rhs) const {
    return this->_sender_id < rhs._sender_id? true : false;
}
```
## Option setting in a .thrift file
### Server - Client
Client: "required" is necessary to set a parameter you want to use
Server: "optional" is OK 
### Server - Client : C++ - Java
Client: "required" is necessary to set a parameter you want to use
Server: "optional" is OK 
### Server - Client : Java - Java
Client: "optional" is OK
Server: "optional" is OK

