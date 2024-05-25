#include <iostream>
#include <string>
#include "linkedlist.h"

int main()
{
    std::vector<LinkedList<std::string>*> nodes;

    LinkedList<std::string> node1 = LinkedList<std::string>(1, "moi");
    LinkedList<std::string> node2 = LinkedList<std::string>(2, "lol");
    LinkedList<std::string> node3 = LinkedList<std::string>(3, "äää");
    nodes.push_back(&node1);
    nodes.push_back(&node2);
    nodes.push_back(&node3);

    LinkedList<std::string>::LinkAll(nodes);
}