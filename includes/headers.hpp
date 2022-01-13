#ifndef HEADERS_HPP
# define HEADERS_HPP

# define BACKLOG 5
# define MAXCLI 5
# define BUFSIZE 128
# define SERVER_VERSION "0.7.13"
# define MAX_CHAN_PER_USR 10
# define MAX_USR_PER_CHAN 10
# define MAX_CHAN_NAME_LEN 50
# define MOTD "\n             __ _          \n  _ __ ___  / _(_)_ __ ___ \n | '_ ` _ \\| |_| | '__/ __|\n | | | | | |  _| | | | (__ \n |_| |_| |_|_| |_|_|  \\___|"
# define AVAILABLE_USER_MODES "iswo"
# define AVAILABLE_CHANNEL_MODES "opsitnmlbvk"

# define TRUNC(str, len) (str.substr(0, min(name.length(), (unsigned long)len)))

# include <iostream>
# include <vector>
# include <map>
# include <string>
# include <exception>
# include <sstream>
# include <iterator>
# include <cerrno>
# include <cstring>
# include <cstdlib>
# include <ctime>
# include <algorithm>
# include <fstream>

# include <sys/types.h>
# include <sys/socket.h>
# include <arpa/inet.h>
# include <netdb.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
//# include <system_error>
# include <fcntl.h>
# include <poll.h>

using namespace std;

# include "colors.hpp"
# include "User.hpp"
# include "Channel.hpp"
# include "utils.hpp"
# include "errors.hpp"
# include "parsing.hpp"
# include "Server.hpp"
# include "cmd.hpp"

//void		nick( vector<string> args, User &usr, Server &srv );
//void		user( vector<string> args, User &usr, Server &srv );

#endif
