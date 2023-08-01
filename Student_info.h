#ifndef STUDENT_INFO
#define STUDENT_INFO

#include <iostream>
#include <string>

class Student
{

private:
    std::string first_name;
    std::string last_name;
    std::string ID;
    int16_t room_number;

public:
    Student();

    void set_first_name(std::string);
    void set_last_name(std::string);
    void set_ID(std::string);
    void set_room_number(int16_t);

    std::string get_first_name() const;
    std::string get_last_name() const;
    int16_t get_room_number() const;
    std::string get_ID() const;
};
#endif