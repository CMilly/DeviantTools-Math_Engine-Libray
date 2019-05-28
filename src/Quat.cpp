/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Quat.cpp
 * Date (Started) - 05/13/19
 */

#include <math.h>
#include <iostream>
#include <vd1m/Quat.hpp>
#include <vd1m/Vec3.hpp>
using namespace std;

vd1m::Quat::Quat() {
    w = 0.0f;
    v.x = 0.0f;
    v.y = 0.0f;
    v.z = 0.0f;
}

vd1m::Quat::Quat(float _w, const vd1m::Vec3 &_v) {
    w = _w;
    v.x = _v.x;
    v.y = _v.y;
    v.z = _v.z;
}

vd1m::Quat::Quat(const vd1m::Vec3 &_v, float theta) {
    w = cos(theta / 2);
    v.x = _v.x * sinf(theta / 2);
    v.y = _v.y * sinf(theta / 2);
    v.z = _v.z * sinf(theta / 2);
}

vd1m::Quat& vd1m::Quat::operator=(const vd1m::Quat &q2) {
    w = q2.w;
    v.x = q2.v.x;
    v.y = q2.v.y;
    v.z = q2.v.z;

    return *this;
}

vd1m::Quat& vd1m::Quat::operator+(const vd1m::Quat &q2) {
    w = w + q2.w;
    v = v + q2.v;

    return *this;
}

vd1m::Quat& vd1m::Quat::operator+=(const vd1m::Quat &q2) {
    w += q2.w;
    v += q2.v;

    return *this;
}

vd1m::Quat& vd1m::Quat::operator-(const vd1m::Quat &q2) {
    w = w - q2.w;
    v = v - q2.v;

    return *this;
}

vd1m::Quat& vd1m::Quat::operator-=(const vd1m::Quat &q2) {
    w -= q2.w;
    v -= q2.v;

    return *this;
}

vd1m::Quat vd1m::Quat::operator*(vd1m::Quat q2) {
    w = w * q2.w - v.dotp(q2.v); //formulate the resulting scalar or w
    v = q2.v * w + v * q2.w + v.crossp(q2.v); //formulate the resulting vector

    return *this;
}

vd1m::Quat vd1m::Quat::operator*=(vd1m::Quat q2) {
    w = w * q2.w - v.dotp(q2.v); //formulate the resulting scalar or w
    v = q2.v * w + v * q2.w + v.crossp(q2.v); //formulate the resulting vector

    return *this;
}

vd1m::Vec3 vd1m::Quat::operator*(const vd1m::Vec3 &_v) {
}

vd1m::Quat& vd1m::Quat::operator*(const float &k) {
    w = w * k;
    v = v * k;

    return *this;
}

vd1m::Quat& vd1m::Quat::operator*=(const float &k) {
    w *= k;
    v *= k;

    return *this;
}

vd1m::Quat& vd1m::Quat::scale(const float &k) {
    w *= k;
    v *= k;

    return *this;
}

float vd1m::Quat::norm() {
    return sqrtf((w * w) + (v.x * v.x) + (v.y * v.y) + (v.z * v.z));
}

vd1m::Quat& vd1m::Quat::normalize() {
    w *= 1/norm();
    v *= 1/norm();

    return *this;
}

vd1m::Quat& vd1m::Quat::conjugate() {
    // w will remain the sames
    v.x = -v.x;
    v.y = -v.y;
    v.z = -v.z;

    return *this;
}

vd1m::Quat& vd1m::Quat::inverse() {
    //float norm_absv = 1 / (norm() * norm());
    vd1m::Quat temp_qat = this->conjugate();

    w = temp_qat.w * (1.0/(pow(norm(), 2.0f)));
    v = temp_qat.v * (1.0/(pow(norm(), 2.0f)));

    return *this;
}

float vd1m::Quat::dotp(const vd1m::Quat &q2) {
    return ((w * q2.w) + (v.x * q2.v.x) + (v.y * q2.v.y) + (v.z * q2.v.z));
}

vd1m::Quat& vd1m::Quat::real() {
    v.x = 0;
    v.y = 0;
    v.z = 0;
}

vd1m::Quat& vd1m::Quat::pure() {
    w = 0;
}

vd1m::Quat& vd1m::Quat::unit(float theta, const vd1m::Vec3 &_v) {
    theta = theta / 360 * (float) M_PI * 2;  //convert degrees to radians

    w = cos(theta / 2);
    v.x = _v.x * sinf(theta / 2);
    v.y = _v.y * sinf(theta / 2);
    v.z = _v.z * sinf(theta / 2);
}

vd1m::Vec3 vd1m::Quat::rotate(vd1m::Vec3 _v) {
    vd1m::Quat p(0, _v);

    vd1m::Vec3 V = v.crossp(_v);
    return _v + V * (2 * w) + v.crossp(V) * 2;
}

void vd1m::Quat::to_string() {
    cout << "w (scalar) = " << w << "\n"
         << "axis of roatation = " << v.x << ", " << v.y << ", " << v.z << endl;
}

