//
// Created by Tristan Brindle on 01/11/2017.
//

#ifndef MEMBER_ACCESS_EXAMPLE_HPP
#define MEMBER_ACCESS_EXAMPLE_HPP

#include <iostream>
#include <string>
#include <cctype>

class student {

    std::string first_name;
    std::string last_name;
    int id_number;

public:
    const std::string& get_first_name()const;

    const std::string& get_last_name()const;

    const int& get_student_id()const;

    void set_first_name(std::string first);

    student(const std::string& first, const std::string& second, const int id) : first_name(first), last_name(second), id_number(id) {};

private:
    student() = delete;

friend std::ostream& operator<<(std::ostream& os, const student& s);
friend void test_set_first_name();
friend void test_set_first_name_upperfirst();

};

std::ostream& operator<<(std::ostream& os, const student& s);

#endif //MEMBER_ACCESS_EXAMPLE_HPP
