//
// Created by Tristan Brindle on 01/11/2017.
//

#include "example.hpp"

std::ostream& operator<<(std::ostream& os, const student& s)
{
    os << "First name: " << s.first_name << '\n'
       << "Last name: " << s.last_name << '\n'
       << "ID number: " << s.id_number << '\n';
    return os;
}

const std::string &student::get_first_name() const {

     return this->first_name;
}

const std::string& student::get_last_name()const{

    return this->last_name;

}

const int& student::get_student_id()const{

    return this->id_number;

}

void student::set_first_name(std::string first) {

    for(int i = 0; i<first.size(); i++){

        if(i==0){

            first[i] = toupper(first[i]);

        }
        else
        {
           first[i] =  tolower(first[i]);
        }

    }


    this->first_name = first;

}
