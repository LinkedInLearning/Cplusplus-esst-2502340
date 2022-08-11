#ifndef MATHVEC3D_H
#define MATHVEC3D_H


class MathVec3D
{
public:    

    // Constructors
    MathVec3D();

    MathVec3D(const MathVec3D &newVal) :
        mX(newVal.mX), mY(newVal.mY), mZ(newVal.mZ) {}

    MathVec3D(const float x, const float y, const float z) :
        mX(x), mY(y), mZ(z) {}

    // Getters for components
    float getX() const { return mX; }
    float getY() const { return mY; }
    float getZ() const { return mZ; }

    // Setters for components
    void setValue(const MathVec3D &newVal)
    {
        mX = newVal.mX;
        mY = newVal.mY;
        mZ = newVal.mZ;
    }
    void setValue(const float x, const float y, const float z)
    {
        mX = x;
        mY = y;
        mZ = z;
    }

    // Vector Operations
    MathVec3D add(const MathVec3D &newVal)
    {
        mX += newVal.mX;
        mY += newVal.mY;
        mZ += newVal.mZ;
        return *this;
    }

    MathVec3D add(const float x, const float y, const float z)
    {
        mX += x; mY += y; mZ += z;
        return *this;
    }


private:
    float mX = 0.0f;
    float mY = 0.0f;
    float mZ = 0.0f;
};

#endif // MATHVEC3D_H
