#include <iostream>

struct MyVector {
  int mNum = 0;
  int *mValues = nullptr;
};

struct SmartPtr {

    SmartPtr(const int numElem) {
        pMyVec = new MyVector;
        pMyVec->mNum = numElem;
        pMyVec->mValues = new int [pMyVec->mNum];
    };

    ~SmartPtr() {
      delete [] pMyVec->mValues;
      pMyVec->mValues = nullptr;
      delete pMyVec;
      pMyVec = nullptr;

      std::cout << "Speicher wurde freigegeben." << std::endl;
    };

    MyVector *pMyVec = nullptr;
};

int main()
{    
    int num = 0;

    std::cout << "Wieviele Elemente brauchen Sie? ";
    std::cin >> num;

    auto smartVec = SmartPtr(num);

    for(int i=0 ; i<smartVec.pMyVec->mNum ; i++) {
        std::cout << "Element " << i << " hat folgenden Wert: ";
        std::cin >> smartVec.pMyVec->mValues[i];
    }

    std::cout << "Eingebene Werte sind wie folgt:" << std::endl;

    int sum = 0;
    for(int i=0 ; i<smartVec.pMyVec->mNum ; i++) {
        std::cout << smartVec.pMyVec->mValues[i] << std::endl;
        sum += smartVec.pMyVec->mValues[i];
    }

    std::cout << "Die Summe ist: " << sum << std::endl;

    return 0;
}
