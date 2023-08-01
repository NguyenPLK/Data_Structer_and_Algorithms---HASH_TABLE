#include "Student_info.h"

Student::Student() : last_name("Unknown"), first_name("Unknown"), ID("Unknown"), room_number(0){};

std::string Student::get_first_name() const
{
    return first_name;
};

std::string Student::get_last_name() const
{
    return last_name;
};

std::string Student::get_ID() const
{
    return ID;
};

int16_t Student::get_room_number() const
{
    return room_number;
};

void Student::set_first_name(std::string student_first_name)
{
    first_name = student_first_name;
};

void Student::set_last_name(std::string student_last_name)
{
    last_name = student_last_name;
};

void Student::set_ID(std::string m_ID)
{
    ID = m_ID;
};

void Student::set_room_number(int16_t m_room_ID)
{
    room_number = m_room_ID;
};