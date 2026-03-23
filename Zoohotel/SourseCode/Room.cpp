#include "Room.hpp"

namespace ZooHotel
{
	//place control
	void Room::SetspaceCapacity(int n)
	{
		if (n < FilledSpaces())
		{
			throw std::runtime_error("trying to destroy a full place!!!\n");
		}

		if (n > spaces_.size())
		{
			(spaces_.resize(n));
		}

		else if (n >= FilledSpaces())
		{
			for (size_t i = 0; i < spaces_.size(); i++)
			{
				if (spaces_[i].Isempty())
				{
					for (size_t j = i; j < spaces_.size(); j++)
					{
						if (!spaces_[j].Isempty())
						{
							std::swap(spaces_[i], spaces_[j]);
							break;
						}
					}
				}
			}
			spaces_.resize(n);
		}

		NormalizeBenchID();
	}

	void Room::SetspaceType(int space_n, Types new_type)
	{
		if (!spaces_[space_n].Isempty())
		{
			throw std::runtime_error("this space is occupied, go away\n");
		}
		spaces_[space_n].Settype(new_type);
	}

	void Room::RemoveSpace(int space_n)
	{
		if (!spaces_[space_n].Isempty())
		{
			throw std::runtime_error("this space is occupied, go away\n");
		}
		auto it = spaces_.begin() + space_n;
		spaces_.erase(it);
		NormalizeBenchID();
	}

	void Room::AddSpace(Types new_type)
	{
		spaces_.push_back(Bench{ spaces_.size(), new_type }	);

	}

	//place properties
	int Room::EmptySpaces() const
	{
		int count = 0;
		for (size_t i = 0; i < spaces_.size(); i++)
		{
			if (spaces_[i].Isempty())
			{
				count++;
			}
		}
		return count;
	}

	int Room::FilledSpaces() const
	{
		int count = 0;
		for (size_t i = 0; i < spaces_.size(); i++)
		{
			if (!spaces_[i].Isempty())
			{
				count++;
			}
		}
		return count;
	}

	int Room::AllSpaces() const
	{
		return spaces_.size();
	}

	const Pet* Room::Whoat(int space_n) const
	{
		return nullptr;
	}

	const Bench* Room::at(int space_n) const
	{
		return nullptr;
	}

	void Room::NormalizeBenchID()
	{
		for (size_t i = 0; i < spaces_.size(); i++)
		{
			spaces_[i].SetID(i);
		}
	}


}
