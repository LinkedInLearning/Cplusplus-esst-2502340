#include "animal.h"

#include <memory>
#include <iostream>

int main()
{
    auto elefant = std::make_unique<Elefant>();
    auto giraffe = std::make_unique<Giraffe>();
    auto lion = std::make_unique<Lion>();

    auto zookeeper = std::make_unique<Zookeeper>();

    std::cout << "Zookeeper feeding the elefant." << std::endl;
    elefant->catchFoodFrom( std::move(zookeeper) );

    if(!zookeeper)
    {
        std::cout << "Zookeeper is busy feeding one animal." << std::endl;
    }

    zookeeper = std::move(elefant->releaseZooKeeper());

    if(zookeeper)
    {
        std::cout << "Zookeeper is ready to feed another animal." << std::endl;
    }

    zookeeper->printResources();

    std::cout << "Zookeeper feeding the giraffe." << std::endl;
    giraffe->catchFoodFrom( std::move(zookeeper) );
    zookeeper = std::move(giraffe->releaseZooKeeper());

    zookeeper->printResources();

    std::cout << "Zookeeper feeding the lion." << std::endl;
    lion->catchFoodFrom( std::move(zookeeper) );
    zookeeper = std::move(lion->releaseZooKeeper());

    std::cout << "Zookeeper fed every animal." << std::endl;
    zookeeper->printResources();


    return 0;
}
