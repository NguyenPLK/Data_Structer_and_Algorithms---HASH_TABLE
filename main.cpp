#include <iostream>
#include "Hash.h"

#define CLEAN_CACHE std::cin.ignore()
#define PAUSE_PRESS_KEY std::getchar()

inline Student *Create_student_info();
inline void Setting_menu(Hash &);

int main()
{
    Hash _hash;
    Setting_menu(_hash);

    return 0;
}

Student *Create_student_info()
{
    Student *m_student = new Student;
    std::cout << "Please enter student name: \n";

    std::string first_name;
    std::string last_name;
    std::string ID;
    int16_t room_number;
    std::cout << "First name: ";
    getline(std::cin, first_name);
    m_student->set_first_name(first_name);

    std::cout << "Last name: ";
    getline(std::cin, last_name);
    m_student->set_last_name(last_name);

    std::cout << "ID number: ";
    getline(std::cin, ID);
    m_student->set_ID(ID);

    std::cout << "Room number: ";
    std::cin >> room_number;
    m_student->set_room_number(room_number);

    return m_student;
}

void Setting_menu(Hash &_hash)
{
    while (true)
    {
        std::cout << "Please choose a number in this list: \n";
        std::cout << "1.Adding a student infomation\n"
                  << "2.Show the hash table\n";

        int choice = 0;
        std::cin >> choice;
        system("clear");

        switch (choice)
        {
        case 1:
        {
            CLEAN_CACHE;
            Student *m_student = Create_student_info();
            CLEAN_CACHE;
            _hash.AddingProperties(*m_student);
            std::cout << "Creating sucessfully !" << std::endl;
            PAUSE_PRESS_KEY;
            system("clear");
            break;
        }

        case 2:
        {
            CLEAN_CACHE;
            _hash.PrintTable();
            CLEAN_CACHE;
            PAUSE_PRESS_KEY;
            system("clear");
            break;
        }

        case 3:
        {
            // CLEAN_CACHE;
            // int32_t index;
            // std::cout << "Please enter the index that you want to insert ater that element\n";
            // std::cin >> index;
            // CLEAN_CACHE;
            // Student *m_student = Create_student_info();
            // School_data.Insert_depend_on_index(index, *m_student);
            // std::cout << "Creating sucessfully !" << std::endl;
            // system("pause");
            // system("clear");
            // break;
        }

        case 4:
        {
            // CLEAN_CACHE;
            // std::string m_ID_number;
            // std::cout << "Please enter the student's ID number that you want to show!" << std::endl;
            // std::getline(std::cin, m_ID_number);
            // system("clear");
            // School_data.Print_list(m_ID_number);
            // CLEAN_CACHE;
            // std::getchar();
            // system("clear");
            // break;
        }
        default:
            break;
        }
    }
}