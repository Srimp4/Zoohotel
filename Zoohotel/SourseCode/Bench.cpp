#include "Bench.hpp"


namespace ZooHotel
{
	Bench::Bench()
		:ID_(0),
		benchtype(Types::large_room),
		holder_(nullptr)
	{}

	Bench::Bench(int ID, Types type, Pet* holder = nullptr)
		:ID_(ID),
		benchtype(type),
		holder_(nullptr)
	{}

	void Bench::SetID(int ID)
	{
		ID_ = ID;
	}

	void Bench::Settype(Types type)
	{
		benchtype = type;
	}

	void Bench::Setholder(Pet* holder)
	{
		if (holder && Issuitable(holder))
		{
			holder_ = holder;
		}
		else
		{
			throw std::runtime_error("pointer miss or animal didn't match the suite\n");
		}
	}

	int Bench::GetID() const
	{
		return ID_;
	}

	Types Bench::Gettype() const
	{
		return benchtype;
	}

	const Pet* Bench::Getpet() const
	{
		return holder_;
	}

	bool Bench::Isempty() const
	{
		return !holder_;
	}

	bool Bench::Issuitable(const Pet* pet) const
	{
		return false;
	}


}