#include "Employee.hpp"

namespace ZooHotel
{
	//setters
	Employee::Role Employee::Setrole_(Role newrole)
	{
		role_ = newrole;
	}
	void Employee::Setname_(const std::string& new_name)
	{
		name_ = new_name;
	}
	void Employee::Setlastname_(const std::string& new_lastname)
	{
		lastname_ = new_lastname;
	}
	void Employee::Setpassword_(const std::string& new_password)
	{
		password_ = new_password;
	}
	void Employee::Setpassport_(const std::string& new_passport)
	{
		passport_ = new_passport;
	}
	void Employee::Setphonenumber_(const std::string& new_phone)
	{
		phonenumber_ = new_phone;
	}
	void Employee::Setemail_(const std::string& new_email)
	{
		email_ = new_email;
	}
	int Employee::SetEID_(int new_EID)
	{
		EID_ = new_EID;
	}

	//getters
	Employee::Role Employee::Getrole_()
	{
		return role_;
	}
	const std::string& Employee::Getname_()
	{
		return name_;
	}
	const std::string& Employee::Getlastname_()
	{
		return lastname_;
	}
	const std::string& Employee::Getpassword_()
	{
		return password_;
	}
	const std::string& Employee::Getpassport_()
	{
		return passport_;
	}
	const std::string& Employee::Getphonenumber_()
	{
		return phonenumber_;
	}
	const std::string& Employee::Getemail_()
	{
		return email_;
	}
	int Employee::GetEID_()
	{
		return EID_;
	}
}
