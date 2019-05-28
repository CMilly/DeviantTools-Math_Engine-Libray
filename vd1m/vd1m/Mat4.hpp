/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat4.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_MAT4_HPP
#define VDEFIANT1_MATH_ENGINE_MAT4_HPP

#include <vd1m/Vec4.hpp>

namespace vd1m{
    /**
     * Matrix4 class
     * - Represents a Matrix in 4-Dimensional space
     */
    class Mat4 {
    private:
        float matrix4[16];
    public:
        Mat4();
        Mat4(float e0, float e1, float e2, float e3,
                float e4, float e5, float e6, float e7,
                float e8, float e9, float e10, float e11,
                float e12, float e13, float e14, float e15);
        Mat4& operator=(const Mat4 &m2);
        Mat4& operator+(const Mat4 &m2);
        Mat4& operator+=(const Mat4 &m2);
        Mat4& operator-(const Mat4 &m2);
        Mat4& operator-=(const Mat4 &m2);
        Mat4& operator*(const float &k);
        Mat4& operator*=(const float &k);
        Mat4& operator*(const Mat4 &m2);
        Mat4& operator*=(const Mat4 &m2);
        Vec4 operator*(const Vec4 &v);
        Vec4 operator*=(const Vec4 &v);
        void set_as_identity();
        void set_as_rotation90_x_axis();
        void set_as_rotationTheta_x_axis(float theta);
        void set_as_rotation90_y_axis();
        void set_as_rotationTheta_y_axis(float theta);
        void set_as_rotation90_z_axis();
        void set_as_rotationTheta_z_axis(float theta);
        void transpose();
        float determinant();
        Mat4& inverse();
        void to_string();
    };
}

#endif //VDEFIANT1_MATH_ENGINE_MAT4_HPP
