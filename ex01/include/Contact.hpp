#ifndef CLASS_HPP
 #define CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

struct Contact
{
private:
    std::string _firstN;
    std::string _lastN;
    std::string _nickN;
    std::string _phoneNumber;
    std::string _secret;
    int _index;
public:
    Contact();
    ~Contact();

    void    setFirstN(std::string first);
    void    setLastN(std::string last);
    void    setNickN(std::string nick);
    void    setPhoneNumber(std::string  n);
    void    setSecret(std::string s);
    void    setIndex(int i);

    std::string getFirstN();
    std::string getLastN();
    std::string getNickN();
    std::string getPhoneNumber();
    int     getIndex();
};

#endif