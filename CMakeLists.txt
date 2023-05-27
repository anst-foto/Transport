cmake_minimum_required(VERSION 3.25)
project(Transport)

set(CMAKE_CXX_STANDARD 17)

add_executable(Transport main.cpp lib/Transport.h lib/MotorTransport/MotorTransport.h lib/MotorTransport/Bus.h lib/IPassenger.h lib/ICargo.h lib/MotorTransport/Truck.h lib/AirTransport/AirTransport.h lib/AirTransport/AirBus.h)
