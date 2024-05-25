#include <vector>

template <typename T> struct LinkedList
{
    std::pair<int, T> KeyValuePair;
    std::pair<LinkedList*, LinkedList*> PreviousNextPair;
    
    LinkedList(int key, T value)
    {
        this->KeyValuePair = std::pair<int, T>(key, value);
    }

    static void Link(LinkedList* node1, LinkedList* node2)
    {
        node1->PreviousNextPair.second = node2;
        node2->PreviousNextPair.first = node1;
    }

    static void LinkAll(std::vector<LinkedList*> nodes)
    {
        for(int i = 1; i < nodes.size(); i++)
        {
            Link(nodes[i-1], nodes[i]);
        }
    }
};