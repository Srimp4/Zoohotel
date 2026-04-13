#pragma once

#ifndef CONTRACT_HPP
#define CONTRACT_HPP

#include <string>
#include <iostream>
#include <memory>

#include "Pet.hpp"
#include "Owner.hpp"
#include"Room.hpp"
#include"Bench.hpp"
#include "Utilities.hpp"
#include "Employee.hpp"

namespace ZooHotel
{
	class Contract
	{
	public:
		Contract() = default;
		Contract(std::shared_ptr<Owner> owner,
			int CID,
			std::shared_ptr <Pet> pet,
			std::shared_ptr <Room> room,
			std::shared_ptr <Bench> bench,
			std::string address,
			DateTime::DateTime drop_off,
			DateTime::DateTime pick_up,
			std::shared_ptr <Employee> manager) :client_(owner)
		{
			client_.swap(owner);
			pet_.swap(pet);
			manager_.swap(manager);
			room_.swap(room);
			bench_.swap(bench);
			address_ = address;
			drop_off_ = drop_off;
			pick_up_ = pick_up;
		}

		//getters
		const Owner& Getowner()const
		{
			if (client_ == nullptr) throw - 1;
			return *client_;
		}
		const std::shared_ptr <Pet> Getpet()const;
		const std::shared_ptr <Room> Getroom()const;
		const std::shared_ptr <Bench> Getbench()const;
		const std::string Getaddress()const;
		const DateTime::DateTime Getdrop_off()const;
		const DateTime::DateTime Getpick_up()const;
		const std::shared_ptr <Employee> Getmanager()const;
		const int GetCID()const;

		//setters
		void Setowner(std::shared_ptr<Owner> owner)
		{
			if (owner == nullptr)throw - 1;
			client_.reset();
			client_ = owner;
		}
		void SetPet(std::shared_ptr<Pet> pet);
		void SetRoom(std::shared_ptr<Room> room);
		void SetBench(std::shared_ptr<Bench> bench);
		void SetManager(std::shared_ptr<Employee> manager);
		void SetCID(int ID);
		void Setaddress(std::string address);
		void Setdrop_off(DateTime::DateTime dropoff);
		void Setpick_up (DateTime::DateTime pickup);

	private:
		int CID_;
		std::shared_ptr <Owner> client_;
		std::shared_ptr <Pet> pet_;
		std::shared_ptr <Room> room_;
		std::shared_ptr <Bench> bench_;
		std::string address_;
		DateTime::DateTime drop_off_;
		DateTime::DateTime pick_up_;
		std::shared_ptr <Employee> manager_;
	};
};

#endif //!CONTRACT_HPP