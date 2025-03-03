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

    std::string     validateInputString();
    std::string     validateInputNumber();
    void    setFirstN();
    void    setLastN();
    void    setNickN();
    void    setPhoneNumber();
    void    setSecret();
    void    setIndex(int i);

    std::string getFirstN();
    std::string getLastN();
    std::string getNickN();
    std::string getPhoneNumber();
    int     getIndex();

    std::string formatFirstN();
    std::string formatLastN();
    std::string formatNickN();
};

#endif