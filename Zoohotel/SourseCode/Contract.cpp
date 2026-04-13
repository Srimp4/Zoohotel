#include "Contract.hpp"

namespace ZooHotel
{
	//getters
	const std::shared_ptr<Pet> Contract::Getpet() const
	{
		return pet_;
	}
	const std::shared_ptr<Room> Contract::Getroom() const
	{
		return room_;
	}
	const std::shared_ptr<Bench> Contract::Getbench() const
	{
		return bench_;
	}
	const std::string Contract::Getaddress() const
	{
		return address_;
	}
	const DateTime::DateTime Contract::Getdrop_off() const
	{
		return drop_off_;
	}
	const DateTime::DateTime Contract::Getpick_up() const
	{
		return pick_up_;
	}
	const std::shared_ptr<Employee> Contract::Getmanager() const
	{
		return manager_;
	}
	const int Contract::GetCID() const
	{
		return CID_;
	}

	//setters
	void Contract::SetPet(std::shared_ptr<Pet> pet)
	{
		pet_ = pet;
	}
	void Contract::SetRoom(std::shared_ptr<Room> room)
	{
		room_ = room;
	}
	void Contract::SetBench(std::shared_ptr<Bench> bench)
	{
		bench_ = bench;
	}
	void Contract::SetManager(std::shared_ptr<Employee> manager)
	{
		manager_ = manager;
	}
	void Contract::SetCID(int ID)
	{
		CID_ = ID;
	}
	void Contract::Setaddress(std::string address)
	{
		address_ = address;
	}
	void Contract::Setdrop_off(DateTime::DateTime dropoff)
	{
		drop_off_ = dropoff;
	}
	void Contract::Setpick_up(DateTime::DateTime pickup)
	{
		pick_up_ = pickup;
	}
}