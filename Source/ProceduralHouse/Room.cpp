// Fill out your copyright notice in the Description page of Project Settings.


#include "Room.h"

Room::Room()
{
}

Room::~Room()
{
}

bool Room::AddConnectedRoom(Room* ConnectedRoom)
{
	for (auto Room : ConnectedRooms)
	{
		if (Room->RoomId == ConnectedRoom->RoomId)
		{
			//room already connected
			return false;
		}
	}
	//add room to list of connected rooms
	ConnectedRooms.push_back(ConnectedRoom);
	return true;
}