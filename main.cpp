#include <iostream>
#include <vector>
#include <cassert>

#include "example.hpp"


void test_set_first_name() {

    student a{"Saad", "Rathore", 1};
    assert(a.first_name == "Saad" && a.last_name == "Rathore" && a.id_number == 1);

    a.set_first_name("John");
    assert(a.first_name == "John");
}

void test_set_first_name_upperfirst(){

    student b{"Saad", "Rathore", 2};
    b.set_first_name("jOHN");
    assert(b.first_name == "John");

}

void test_get_last_name(){

    student a{"Saad", "RATHORE", 1};
    std::cout << a.get_last_name() << '\n';

}

void test_get_student_id(){

    student a{"Saad", "Rathore", 1};
    std::cout << a.get_student_id() << '\n';

}


int main()
{
    std::vector<student> students;

    students.push_back(student{"Harry", "Potter", 1});
    students.push_back(student{"Ron", "Weasley", 2});
    students.push_back(student{"Hermione", "Granger", 3});

    for (const auto& s : students) {
        std::cout << s << '\n';
    }

    //2. get name returns first name of the students

    for (const student& a : students){

        std::cout << a.get_first_name() << '\n';

    }

    test_set_first_name();
    test_set_first_name_upperfirst();
    test_get_last_name();
    test_get_student_id();

}