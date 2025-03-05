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

    static std::string     askInputString();
    static bool             isPhoneNumber(std::string input);
    void    askForFirstN();
    void    askForLastN();
    void    askForNickN();
    void    askForPhoneNumber();
    void    askForSecret();
    void    setIndex(int i);

    std::string getFirstN();
    std::string getLastN();
    std::string getNickN();
    int     getIndex();

private:
    std::string _firstN;
    std::string _lastN;
    std::string _nickN;
    std::string _phoneNumber;
    std::string _secret;
    int         _index;

};

#endif