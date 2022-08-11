#include <iostream>
#include <memory>

struct SimpleNode {
  int mItem = 0;
  std::shared_ptr<SimpleNode> mNext;
};

std::shared_ptr<SimpleNode> list;

void addElement(const int value)
{
	// TODO: Code that appends a value to the linked list 
}
void printList()
{
	// TODO: Print all the list items
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
