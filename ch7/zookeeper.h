#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H


class Zookeeper
{
public:
    Zookeeper();

    void takeFood(const int amnt);

    void printResources();

private:
    int mBagsOfFood = 100;
};

#endif // ZOOKEEPER_H
