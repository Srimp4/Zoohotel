#include "Pet.hpp"

namespace ZooHotel
{
    //getters
    const std::string Pet::Getname() const
    {
        return name_;
    }
    const Size Pet::Getsize() const
    {
        return size_;
    }
    const std::string Pet::Getspecies() const
    {
        return species_;
    }
    const std::string Pet::Getbride() const
    {
        return bride_;
    }
    const DateTime::DateTime Pet::Getbirthday() const
    {
        return birthday_;
    }
    const int Pet::GetID() const
    {
        return UID_;
    }

    //setters
    void Pet::Setname(std::string name)
    {
        name_ = name;
    }
    void Pet::Setsize(Size size)
    {
        size_ = size;
    }
    void Pet::Setspecies(std::string species)
    {
        species_ = species;
    }
    void Pet::Setbride(std::string bride)
    {
        bride_ = bride;
    }
    void Pet::Setbirthday(DateTime::DateTime birthday)
    {
        birthday_ = birthday;
    }
    void Pet::SetID(int ID)
    {
        UID_ = ID;
    }

}