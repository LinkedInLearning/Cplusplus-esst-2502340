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
    float getX() { return mX; }
    float getY() { return mY; }
    float getZ() { return mZ; }

    // Setters for components
    void setValue(const MathVec3D &newVal);
    void setValue(const float x, const float y, const float z);

private:
    float mX = 0.0f;
    float mY = 0.0f;
    float mZ = 0.0f;
};

#endif // MATHVEC3D_H
