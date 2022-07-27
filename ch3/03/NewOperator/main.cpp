#include <iostream>

struct MyVector {
  int mNum = 0;
  int *mValues = nullptr;
};

int main()
{
    auto pMyVec = new MyVector;

    std::cout << "Wieviele Elemente brauchen Sie? ";
    std::cin >> pMyVec->mNum;

    pMyVec->mValues = new int [pMyVec->mNum];

    for(int i=0 ; i<pMyVec->mNum ; i++) {
        std::cout << "Element " << i << " hat folgenden Wert: ";
        std::cin >> pMyVec->mValues[i];
    }

    std::cout << "Eingebene Werte sind wie folgt:" << std::endl;

    int sum = 0;
    for(int i=0 ; i<pMyVec->mNum ; i++) {
        std::cout << pMyVec->mValues[i] << std::endl;
        sum += pMyVec->mValues[i];
    }

    std::cout << "Die Summe ist: " << sum << std::endl;

    // Aufräumen!!
    delete [] pMyVec->mValues;
    delete pMyVec;

    return 0;
}
