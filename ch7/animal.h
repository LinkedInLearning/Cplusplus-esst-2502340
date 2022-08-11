#ifndef ANIMAL_H
#define ANIMAL_H

#include "zookeeper.h"
#include <memory>

class Animal
{
public:
    Animal();

    virtual void catchFoodFrom(std::unique_ptr<Zookeeper> &&zk) = 0;

    std::unique_ptr<Zookeeper> && releaseZooKeeper();

protected:
    std::unique_ptr<Zookeeper> mCurZookeeper;
};


class Elefant : public Animal
{
public:
    void catchFoodFrom(std::unique_ptr<Zookeeper> &&zk) override;
};

class Giraffe : public Animal
{
public:
    void catchFoodFrom(std::unique_ptr<Zookeeper> &&zk) override;
};

class Lion : public Animal
{
public:
    void catchFoodFrom(std::unique_ptr<Zookeeper> &&zk) override;
};


#endif // ANIMAL_H
