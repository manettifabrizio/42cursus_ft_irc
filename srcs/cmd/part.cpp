#include "headers.hpp"

/*
	Command: PART
	Parameters: <channel> *( "," <channel> ) [ <Part Message> ]

	The PART command causes the user sending the message to be removed
	from the list of active members for all given channels listed in the
	parameter string.  If a "Part Message" is given, this will be sent
	instead of the default message, the nickname.  This request is always
	granted by the server.

	Servers MUST be able to parse arguments in the form of a list of
	target, but SHOULD NOT use lists when sending PART messages to
	clients.

	Numeric Replies:

		ERR_NEEDMOREPARAMS              ERR_NOSUCHCHANNEL
		ERR_NOTONCHANNEL

   Examples:

   PART #twilight_zone             ; Command to leave channel
                                   "#twilight_zone"

   PART #oz-ops,&group5            ; Command to leave both channels
                                   "&group5" and "#oz-ops".

   :WiZ!jto@tolsun.oulu.fi PART #playzone :I lost
                                   ; User WiZ leaving channel
                                   "#playzone" with the message "I
                                   lost".
*/

void		part( vector<string> args, User &usr, Server &srv ) {

	vector<string>	chans;
	Channel *		cnl;
	
	if ( args.size() < 2 ) {
		send_error( usr, ERR_NEEDMOREPARAMS, args[0] );
		return ;
	}

	if (args[1].back() == '\n')
		args[1] = args[1].substr(0, args[1].length()-1);

	chans = ft_split(args[1], ",");
	// TO DO : Is the use wildcards authorized ? If so should be implemented here with ft_match.

	for (size_t i = 0; i < chans.size(); i++) {
		cnl = srv.getChannelByName( chans[i] );
		if ( cnl == NULL ) {
			send_error( usr, ERR_NOSUCHCHANNEL, chans[i] );
			return ;
		}
		if ( !cnl->isOnChann(usr) ) {
			send_error( usr, ERR_NOTONCHANNEL, chans[i] );
			return ;
		}
		if ( args.size() > 2 ) {
			// TO DO: Send part msg to channel
			// ft_join(args, " ", 2)
		}
		usr.leaveChannel(cnl);
	}
}