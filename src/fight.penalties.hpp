#ifndef __FIGHT_PENALTIES_HPP__
#define __FIGHT_PENALTIES_HPP__

#include "structs.h"

class CHAR_DATA;	// to avoid inclusion of "char.hpp"

class GroupPenalty
{
public:
	constexpr static int DEFAULT_PENALTY = 100;

	GroupPenalty(const CHAR_DATA* killer, const CHAR_DATA* leader, const int max_level, const decltype(grouping)& grouping):
		m_killer(killer),
		m_leader(leader),
		m_max_level(max_level),
		m_grouping(grouping)
	{
	}

	int get() const;

private:
	const CHAR_DATA* m_killer;
	const CHAR_DATA* m_leader;
	const int m_max_level;
	const decltype(grouping)& m_grouping;

	int get_penalty(const CHAR_DATA* player) const;
};

#endif // __FIGHT_PENALTIES_HPP__
