cmake_minimum_required(VERSION 3.14)
project(vDefiant1_Math_Engine)

set(CMAKE_CXX_STANDARD 14)

include_directories(vd1m)

add_executable(vDefiant1_Math_Engine src/main.cpp
        vd1m/vd1m/Mat2.hpp src/Mat2.cpp
        vd1m/vd1m/Vec2.hpp src/Vec2.cpp
        vd1m/vd1m/Mat3.hpp src/Mat3.cpp
        vd1m/vd1m/Vec3.hpp src/Vec3.cpp
        vd1m/vd1m/Mat4.hpp src/Mat4.cpp
        vd1m/vd1m/Vec4.hpp src/Vec4.cpp
        vd1m/vd1m/Quat.hpp src/Quat.cpp
        vd1m/vd1m/vd1m.hpp
        vd1m/vd1m/ext/Mat3_scale.hpp
        src/ext/Mat3_scale.cpp vd1m/vd1m/ext/Mat4_scale.hpp src/ext/Mat4_scale.cpp)