#ifndef CLASS_HPP
 #define CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
public:
    Contact();
    ~Contact();

    static std::string     _askInputString();
    static bool             _isPhoneNumber(std::string input);
    void    _askForFirstN();
    void    _askForLastN();
    void    _askForNickN();
    void    _askForPhoneNumber();
    void    _askForSecret();
    void    _setIndex(int i);

    std::string _getFirstN();
    std::string _getLastN();
    std::string _getNickN();
    int     _getIndex();

private:
    std::string _firstN;
    std::string _lastN;
    std::string _nickN;
    std::string _phoneNumber;
    std::string _secret;
    int         _index;

};

#endif