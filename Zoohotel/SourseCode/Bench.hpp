#pragma once

#ifndef BENCH_HPP
#define BENCH_HPP

#include <string>
#include <iostream>
#include "Pet.hpp"
#include "Utilities.hpp"

namespace ZooHotel
{
	class Bench
	{
	public:

		Bench();/* :ID_(0),
			benchtype(Types::large_room), 
			holder_(nullptr)
		{}*/

		Bench(int ID, Types type, Pet* holder = nullptr); /*
			:ID_(ID),
			benchtype(type),
			holder_(nullptr)
		{}*/

		//setters
		void SetID(int ID);
		void Settype(Types type);
		void Setholder(Pet* holder);

		//getters
		int GetID()const;
		Types Gettype()const;
		const Pet* Getpet()const;

		//checks
		bool Isempty()const;
		bool Issuitable(const Pet* pet)const;

	private:
		int ID_;
		Types benchtype;
		Pet* holder_;
	};
}

#endif // !BENCH_HPP
