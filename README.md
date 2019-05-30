# Deviant Tools - Math Engine / Math Library | vDefiant1.0 ME (documentation)

# Table of Contents
1. [Overview](#Overview)
2. [Setup](#Setup)
3. [Global Headers](#GlobalHeaders)
4. [Explicit Headers]()
5. [Vectors]()
6. [Matrices]()
7. [Quaternions]()

## Overview
In my study to understand the basics of computer graphics and game development, I came across a general consensus about the order in which projects for understanding should be tackled. It was almost unanimously that people would say to understand and grasp the fundamentals, it is important to first start with the understanding of how the math works. This being said, the importance of starting with developing a math engine will allow for an understanding between the rendering, physics and other engines inlcuded in an all in one game engine. The way I went about to develop this math engine came from the inspiration of OpenGL's math library and how their system was organized, as I felt that for a beginner like me, It would be an easier basis to understand

## Setup
To get started Deviant Tools ME / ML | vDefiant Math Engine is a header driven ME. To utilize the math library all that is needed are the proper header files on what is wanted. The headers are specifically in a file called vd1m and can be included via ```<vd1m/..>```. More specifically are examples given below of both global definition headers as well as explicit headers:

- Global:
```cpp
#include <vd1m/vd1m.hpp> //Vec2,Mat2,...
#include <vd1m/ext/..> //Include EXT
```
- Explicit:
```cpp
#include <vd1m/Mat2.hpp> //Matrix2-D
#include <vd1m/Vec3.hpp> //Vector3-D
#include <vd1m/ext/Mat3_scale> //Matrix3-D scale
```

## GlobalHeaders
Global headers allow for the use of one header having to be included. This is done by creating a header that then takes in multiple headers from the specific sybsystem. It has been noted that this is considered to be bad practice due to having to compile all headers within the global header, but this is optional as explicit headers may be used. In this case as mentioned above, the global header ```<vd1m/vd1m.hpp>``` includes all basic headers within the basic subsystem of the math engine. Below will be the global headers that have been added and the headers included within them:

- vDefiant1.0 ME - BASIC - 
    Under the basic global header that includes all basic implementations for the math engine, this includes (not limited to):
    ```cpp
    #include <vd1m/vd1m.hpp> //Vec2,Mat2,...
    
    
    #include <vd1m/Vec2.hpp> //Vector2-D
    #include <vd1m/Vec3.hpp> //Vector3-D
    #include <vd1m/Vec4.hpp> //Vector4-D
    #include <vd1m/Mat2.hpp> //Matrix2-D
    #include <vd1m/Mat3.hpp> //Matrix3-D
    #include <vd1m/Mat4.hpp> //Matrix4-D
    #include <vd1m/Quat.hpp> //Quaternion
    ```
- vDefiant1.0 ME - EXT
    Under the extended global header that includes extended implementations for the math engine, this includes (not limit to):
    ```cpp
    #include <vd1m/ext.hpp> //Mat3_s, Mat4_s,....
    
    #include <vd1m/ext/Mat3_scale> //3-D scaling Matrix
    #include <vd1m/ext/Mat4_scale> //4-D scaling Matrix
    ```

!It should be noted that these implementations are subject to change and are not final!


