/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat4_scale.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_MAT4_SCALE_HPP
#define VDEFIANT1_MATH_ENGINE_MAT4_SCALE_HPP

namespace vd1m{

    /**
     * Class that represents a 4x4 scaling Matrix
     */
    class Mat4_scale{
    private:
        float matrix4_scale[16];
    public:
        Mat4_scale();
        Mat4_scale(float _s);
        Mat4_scale(float _sX, float _sY, float _sZ);
    };
}

#endif //VDEFIANT1_MATH_ENGINE_MAT4_SCALE_HPP
