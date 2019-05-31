#include <iostream>
#include <vd1m/ext/Mat3_rotX.hpp>
#include <vd1m/Vec3.hpp>
#include <cmath>
using namespace std;

vd1m::Mat3_rotX::Mat3_rotX() {
    for(int i = 0; i < 9; i++){
        matrix3_rotx[i] = 0.0f;
    }
}

vd1m::Mat3_rotX::Mat3_rotX(float theta) {
    for(int i = 0; i < 9; i++){
        matrix3_rotx[i] = 0.0f;
    }

    theta = theta * (M_PI / 180);
    matrix3_rotx[0] = 1.0f;
    matrix3_rotx[4] = cosf(theta);
    matrix3_rotx[5] = -sin(theta);
    matrix3_rotx[7] = sin(theta);
    matrix3_rotx[8] = cosf(theta);
}

vd1m::Vec3 vd1m::Mat3_rotX::operator*(const vd1m::Vec3 &v) {
    vd1m::Vec3 vec3_rot;
    vec3_rot.x = v.x;
    vec3_rot.y = (matrix3_rotx[4] * v.y) - (matrix3_rotx[5] * v.z);
    vec3_rot.z = (matrix3_rotx[7] * v.y) + (matrix3_rotx[8] * v.z);

    return vec3_rot;
}

void vd1m::Mat3_rotX::view() {
    cout << matrix3_rotx[0] << "   " << matrix3_rotx[1] << "   " << matrix3_rotx[2] << "\n" <<
            matrix3_rotx[3] << "   " << matrix3_rotx[4] << "   " << matrix3_rotx[5] << "\n" <<
            matrix3_rotx[6] << "   " << matrix3_rotx[7] << "   " << matrix3_rotx[8] << "\n" << endl;
}
