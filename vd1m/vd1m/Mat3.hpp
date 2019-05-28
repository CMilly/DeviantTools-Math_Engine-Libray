/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat3.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_MAT3_HPP
#define VDEFIANT1_MATH_ENGINE_MAT3_HPP

#include <vd1m/Vec3.hpp>

namespace vd1m{
    /**
     * Matrix3 class
     * - Represents a Matrix in 3-Dimensional space
     */
    class Mat3{
    private:
        float matrix3[9];
    public:
        Mat3();
        Mat3(float e0, float e1, float e2,
                float e3, float e4, float e5,
                float e6, float e7, float e8);
        Mat3& operator=(const Mat3 &m2);
        Mat3& operator+(const Mat3 &m2);
        Mat3& operator+=(const Mat3 &m2);
        Mat3& operator-(const Mat3 &m2);
        Mat3& operator-=(const Mat3 &m2);
        Mat3& operator*(const float &k);
        Mat3& operator*=(const float &k);
        Mat3& operator*(const Mat3 &m2);
        Mat3& operator*=(const Mat3 &m2);
        Vec3 operator*(const Vec3 &v);
        Vec3 operator*=(const Vec3 &v);
        void set_as_identity();
        void set_as_rotation90_x_axis();
        void set_as_rotationTheta_x_axis(float theta);
        void set_as_rotation90_y_axis();
        void set_as_rotationTheta_y_axis(float theta);
        void set_as_rotation90_z_axis();
        void set_as_rotationTheta_z_axis(float theta);
        void transpose();
        float determinant();
        Mat3& inverse();
        void to_string();
    };
}
#endif //VDEFIANT1_MATH_ENGINE_MAT3_HPP
