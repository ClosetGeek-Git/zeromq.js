#!/bin/bash

g++ -c -fpic zmqbridge.cpp
g++ -shared -o libzmqbridge.so zmqbridge.o -lzmq

sudo cp zmqbridge.h /usr/local/include
sudo chmod 0644 /usr/local/include/zmqbridge.h
sudo cp libzmqbridge.so /usr/local/lib
sudo chmod 0777 /usr/local/lib/libzmqbridge.so
