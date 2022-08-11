#ifndef MATHVEC3D_H
#define MATHVEC3D_H

#include <cassert>

class MathVec3D
{
public:    

    // Constructors
    MathVec3D();

    MathVec3D(const MathVec3D &newVal) :
        mX(newVal.mX), mY(newVal.mY), mZ(newVal.mZ) {}

    MathVec3D(const float x, const float y, const float z) :
        mX(x), mY(y), mZ(z) {}

    // Overloaded Operators
    MathVec3D operator=(const MathVec3D &newVal)
    {
        mX = newVal.mX;
        mY = newVal.mY;
        mZ = newVal.mZ;
        return *this;
    }

    MathVec3D operator+(const MathVec3D &newVal)
    {
        MathVec3D res;
        res.mX = mX + newVal.mX;
        res.mY = mY + newVal.mY;
        res.mZ = mZ + newVal.mZ;
        return res;
    }

    float operator[](const int idx) const
    {
        assert(idx < 3 && idx >= 0);
        if(idx == 0)
            return mX;
        else if(idx == 1)
            return mY;
        else
            return mZ;
    }

    operator bool()
    {
        return !(mX == 0.0f && mY == 0.0f && mZ == 0.0f);
    }

private:
    float mX = 0.0f;
    float mY = 0.0f;
    float mZ = 0.0f;
};

#endif // MATHVEC3D_H
