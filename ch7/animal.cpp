#include "animal.h"

Animal::Animal()
{}

std::unique_ptr<Zookeeper> && Animal::releaseZooKeeper()
{
    return std::move(mCurZookeeper);
}

void Elefant::catchFoodFrom(std::unique_ptr<Zookeeper> &&zk)
{
    mCurZookeeper = std::move(zk);
    mCurZookeeper->takeFood(20);
}

void Giraffe::catchFoodFrom(std::unique_ptr<Zookeeper> &&zk)
{
    mCurZookeeper = std::move(zk);
    mCurZookeeper->takeFood(10);
}

void Lion::catchFoodFrom(std::unique_ptr<Zookeeper> &&zk)
{
    mCurZookeeper = std::move(zk);
    mCurZookeeper->takeFood(5);
}
