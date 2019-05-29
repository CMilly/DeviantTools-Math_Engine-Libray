# Setup
To get started vDefiant Math Engine is a header driven ME. To utilize the math library all that is needed are the proper header files on what is wanted. The headers are specifically in a file called vd1m and can be included via ```<vd1m/..>```. More specifically are examples given below of both global definition headers as well as explicit headers:

- Global:
```cpp
#include <vd1m/vd1m.hpp>
#include <vd1m/ext/..>
```
- Explicit:
```cpp
#include <vd1m/Mat2.hpp>
#include <vd1m/Vec3.hpp>
#include <vd1m/ext/Mat3_scale>
```

# Global Headers
Global headers allow for the use of one header having to be included. This is done by creating a header that then takes in multiple headers from the specific sybsystem. It has been noted that this is considered to be bad practice due to having to compile all headers within the global header, but this is optional as explicit headers may be used. In this case as mentioned above, the global header ```<vd1m/vd1m.hpp>``` includes all basic headers within the basic subsystem of the math engine. Below will be the global headers that have been added and the headers included within them:



