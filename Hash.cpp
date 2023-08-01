#include "Hash.h"

Hash::Hash()
{
    for (int i = 0; i < tableSize; ++i)
    {
        HashTable[i] = new Node();
        HashTable[i]->next = NULL;
    }
}

int Hash::Hashing(std::string &key)
{
    int hash = 0;
    for (int i = 0; i < key.length(); i++)
    {

        hash = hash + static_cast<int>(key[i]);
    }

    return hash % tableSize;
}

void Hash::AddingProperties(const Student &_student)
{
    std::string _studentName = _student.get_first_name() + " " + _student.get_last_name();

    int index = Hashing(_studentName);

    if (HashTable[index]->m_student.get_first_name() == "Unknown")
    {
        HashTable[index]->m_student.set_first_name(_student.get_first_name());
        HashTable[index]->m_student.set_last_name(_student.get_last_name());
        HashTable[index]->m_student.set_ID(_student.get_ID());
        HashTable[index]->m_student.set_room_number(_student.get_room_number());
    }
    else
    {
        Node *m_ptr = HashTable[index];
        Node *new_node = new Node;
        new_node->m_student.set_first_name(_student.get_first_name());
        new_node->m_student.set_last_name(_student.get_last_name());
        new_node->m_student.set_ID(_student.get_ID());
        new_node->m_student.set_room_number(_student.get_room_number());
        new_node->next = NULL;

        while (m_ptr->next != NULL)
        {
            m_ptr = m_ptr->next;
        }
        m_ptr->next = new_node;
    }
}

int Hash::Number_Of_Elements_In_Index(const int &index)
{
    int count = 0;
    if (HashTable[index]->m_student.get_first_name() == "Unknown")
    {
        return count;
    }
    else
    {
        Node *count_ptr = HashTable[index];
        count++;
        while (count_ptr->next != NULL)
        {
            count_ptr = count_ptr->next;
            count++;
        }
    }
    return count;
}

void Hash::PrintTable()
{
    std::cout << "------------ INFOMATION OF STUDENT IN TABLE ------------\n\n";
    for (int i = 0; i < tableSize; ++i)
    {
        std::cout << "----------------------------\n";
        std::cout << "Key [" << i << "] : ";
        std::cout << "The number of element in that key: " << Number_Of_Elements_In_Index(i) << std::endl;
        std::cout << "----------------------------\n\n";
    }
}
