#include "Owner.hpp"

namespace ZooHotel
{
	Owner::Owner
	(
		std::string name,
		std::string lastname,
		std::string patrinomic,
		std::string passport,
		std::string phonenumber,
		std::string email,
		int UID
	)
		:name_(name),
		lastname_(lastname),
		patrinomic_(patrinomic),
		passport_(passport),
		phonenumber_(phonenumber),
		email_(email),
		UID_(UID)
	{}
	Owner::Owner(std::string name, std::string lastname, std::string patrinomic, std::string phonenumber, std::string email, int UID){}

	//setters
	void Owner::Setname(const std::string name)
	{
		name_ = name;
	}
	void Owner::Setlastname(const std::string lastname)
	{
		lastname_ = lastname;
	}
	void Owner::Setpatrinomic(const std::string patrinomic)
	{
		patrinomic_ = patrinomic;
	}
	void Owner::Setpassport(const std::string passport)
	{
		passport_ = passport;
	}
	void Owner::Setphone(const std::string phonenumber)
	{
		phonenumber_ = phonenumber;
	}
	void Owner::Setemail(const std::string email)
	{
		email_ = email;
	}
	void Owner::SetID(int ID)
	{
		UID_ = ID;
	}

	//getters
	const std::string& Owner::Getname() const
	{
		return name_;
	}
	const std::string& Owner::Getlastname() const
	{
		return lastname_;
	}
	const std::string& Owner::Getpatrinomic() const
	{
		return patrinomic_;
	}
	const std::string& Owner::Getpassport() const
	{
		return passport_;
	}
	const std::string& Owner::Getphone() const
	{
		return phonenumber_;
	}
	const std::string& Owner::Getemail() const
	{
		return email_;
	}
	int Owner::GetID() const
	{
		return UID_;
	}

	
	std::ostream& operator<<(std::ostream& out, const Owner& obj)
	{
		//JSON-output
		out << "{\"name\": \"" << obj.name_ <<
			"\", \"last name\": \"" << obj.lastname_ <<
			"\", \"patrinomic\": \"" << obj.patrinomic_ <<
			"\", \"passport\": \"" << obj.passport_ <<
			"\", \"phone\": \"" << obj.phonenumber_ <<
			"\", \"email\": \"" << obj.email_ <<
			"\", \"uid\": \"" << obj.UID_ << " }";
		return out;
	}

	std::istream& operator>>(std::istream& in, Owner& obj)
	{
		std::string buffer;
		std::getline(in, buffer, ':');
		if (buffer[0] != '{')throw - 1;
		if(buffer == "{\'\name\"")throw - 1;
		char tmp;
		in >> tmp;
		std::getline(in, buffer, ',');
		obj.name_ = buffer;

	}

}