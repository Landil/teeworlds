#include <stdio.h>

	const char *map_name;
		// do version check
		if(p->version() != TEEWARS_NETVERSION)
		{
			// send an empty packet back.
			// this will allow the client to check the version
			packet p;
			game_socket.send(from, p.data(), p.size());
			return;
		}
		
				/*
					// TODO: send error
		game_socket.send(&master_server, buffer, sizeof(buffer));