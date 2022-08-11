#include <iostream>
#include <memory>

struct SimpleNode {
  int mItem = 0;
  std::shared_ptr<SimpleNode> mNext;
};

std::shared_ptr<SimpleNode> list;

void addElement(const int value)
{
    auto cur = std::make_shared<SimpleNode>();
    cur->mItem = value;
    cur->mNext = list;

    list = cur;
}
void printList()
{
    std::shared_ptr<SimpleNode> cur = list;
    while (cur)
    {
        std::cout << cur->mItem << std::endl;
        cur = cur->mNext;
    }
}

int main()
{
    addElement(12);
    addElement(22);
    addElement(342);
    addElement(145);

    printList();

    return 0;
}
