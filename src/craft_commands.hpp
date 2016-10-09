#if !defined __CRAFT_COMMANDS_HPP__
#define __CRAFT_COMMANDS_HPP__

#include "structs.h"

namespace craft
{
	// Subcommands for the "craft" command
	const int SCMD_NOTHING = 0;

	/// Defines for the "craft" command (base craft command)
	namespace cmd
	{
		/// Minimal position for base craft command
		const int MINIMAL_POSITION = POS_SITTING;

		// Minimal level for base craft command
		const int MINIMAL_LEVEL = 0;

		// Probability to stop hide when using base craft command
		const int UNHIDE_PROBABILITY = 0;	// -1 - always, 0 - never

		extern void do_craft(CHAR_DATA *ch, char *argument, int cmd, int subcmd);
	};
};

#endif // __CRAFT_COMMANDS_HPP__

/* vim: set ts=4 sw=4 tw=0 noet syntax=cpp :*/
