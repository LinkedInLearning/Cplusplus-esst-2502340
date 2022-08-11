#ifndef FAHRZEUG_H
#define FAHRZEUG_H


class Fahrzeug
{
public:
    Fahrzeug();
    virtual ~Fahrzeug() {};

    void showSpeed() const;

protected:
    float mSpeed = 0.0f;

private:
    float mPosition = 0.0f;
};

#endif // FAHRZEUG_H
