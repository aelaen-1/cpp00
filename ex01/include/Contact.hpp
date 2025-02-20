#ifndef CONTACT_CLASS_HPP
 #define CONTACT_CLASS_HPP

#include <string>

class Contact
{
private:
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string phone_number;
    std::string secret;
    int index;

public:
    Contact();
    ~Contact();
    void    set_data(int i);
    void    print_data();
    int     get_index();
    std::string get_fname();
    std::string get_lname();
    std::string get_nname();
};

#endif