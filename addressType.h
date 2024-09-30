#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <string>

class addressType {
public:
    addressType();
    addressType(const std::string& street, const std::string& city, const std::string& state, const std::string& zip);

    std::string getStreet() const;
    std::string getCity() const;
    std::string getState() const;
    std::string getZip() const;

    void setStreet(const std::string& street);
    void setCity(const std::string& city);
    void setState(const std::string& state);
    void setZip(const std::string& zip);

    friend std::istream& operator>>(std::istream& in, addressType& address);
    friend std::ostream& operator<<(std::ostream& out, const addressType& address);

private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;
};

#endif // ADDRESSTYPE_H
