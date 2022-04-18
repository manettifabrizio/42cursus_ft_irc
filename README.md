# ft_irc

![image](https://user-images.githubusercontent.com/51337012/144290467-63c1c0a7-7c62-4f0b-a5a1-803b4ce37a66.png)

## Description

The objective of this project is to write a custom IRC server working with a real IRC client. 

IRC is one of the earliest network protocols for text messaging and multi-participant chatting. It remains a popular standard and still sees heavy use in certain communities, specially the open source software community.

Internet is ruled by solid and standards protocols that allow a strong interaction between every connected computer. Hence our IRC server will have to respect these protocols.

## Skills
* Network & system administration
* Object-oriented programming
* Rigor
* Unix

## Introduction

Internet Relay Chat or IRC is a textual communication protocol on the Internet. It is instantaneous communication mainly in the form of discussions in groups via discussion channels, but can also be used for one-to-one communication.

IRC client programs connect to an IRC server to access a specific channel. IRC servers are connected between them to provide a global network with unique channels.

![image](https://user-images.githubusercontent.com/51337012/144290715-b1f46bfe-f05e-41a3-b971-a3d97006d374.png)

## Handled commands

- [x] Connection
  - [x] PASS
  - [x] NICK
  - [x] USER
  - [x] OPER
  - [x] QUIT
- [x] Channel operations
  - [x] JOIN
  - [x] PART
  - [x] MODE
  - [x] TOPIC
  - [x] NAMES
  - [x] LIST
  - [x] INVITE
  - [x] KICK

- [x] Sending messages
  - [x] PRIVMSG
  - [x] NOTICE
- [x] User
  - [x] WHO
  - [x] WHOIS
- [x] Miscellaneous
  - [x] KILL
  - [x] PING
  - [x] PONG
  - [x] ERROR


## Sources

* [Beej's Guide to Network Programming](http://beej.us/guide/bgnet/html/)
* [Tutorial: How To Make An IRC Server Connection](https://oramind.com/tutorial-how-to-make-an-irc-server-connection/)
* [ircgod](https://ircgod.com/)
* [Internet Relay Chat: Server Protocol](https://www.irchelp.org/protocol/rfc/rfc2813.txt)
* [How sockets work](https://www.ibm.com/docs/en/i/7.2?topic=programming-how-sockets-work)
* [Internet Relay Chat: Client Protocol used by irssi](https://datatracker.ietf.org/doc/html/rfc1459)
* [The UChicago χ-Projects: chirc](http://chi.cs.uchicago.edu/chirc/irc.html)
