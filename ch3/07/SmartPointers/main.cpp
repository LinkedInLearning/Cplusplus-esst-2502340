#include <iostream>
#include <memory>

#define mypointer std::shared_ptr

struct MyVector {
  int mNum = 0;
  mypointer<int[]> mValues = nullptr;
};

mypointer<MyVector> readValues()
{
    auto pMyVec = std::unique_ptr<MyVector>(new MyVector);
    int num = 0;

    std::cout << "Wieviele Elemente brauchen Sie? ";
    std::cin >> num;

    pMyVec->mNum = num;
    pMyVec->mValues.reset(new int [pMyVec->mNum]);

    for(int i=0 ; i<pMyVec->mNum ; i++) {
        std::cout << "Element " << i << " hat folgenden Wert: ";
        std::cin >> pMyVec->mValues[i];
    }

    return pMyVec;
}

void printValues(mypointer<MyVector> pMyVec)
{
    std::cout << "Eingebene Werte sind wie folgt:" << std::endl;

    int sum = 0;
    for(int i=0 ; i<pMyVec->mNum ; i++) {
        std::cout << pMyVec->mValues[i] << std::endl;
        sum += pMyVec->mValues[i];
    }

    std::cout << "Die Summe ist: " << sum << std::endl;
}


int main()
{
    auto pMyVec = readValues();
    printValues(pMyVec);

    return 0;
}
