# Setup
To get started vDefiant Math Engine is a header driven ME. To utilize the math library all that is needed are the proper header files on what is wanted. The headers are specifically in a file called vd1m and can be included via ```<vd1m/..>```. More specifically are examples given below of both global definition headers as well as explicit headers:

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

# Global Headers
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



