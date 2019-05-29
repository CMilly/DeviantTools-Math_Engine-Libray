#include <iostream>
#include <vd1m/Vec3.hpp>
#include <vd1m/ext/Mat3_scale.hpp>
int main() {
    vd1m::Mat3_scale mat3s(1,2,3);
    vd1m::Vec3 vec3(1,1,1);
    vec3.to_string();
    vd1m::Vec3 vect;
    vect = mat3s * vec3;
    vect.to_string();
}