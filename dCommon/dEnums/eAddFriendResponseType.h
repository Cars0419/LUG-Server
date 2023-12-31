#pragma once

#ifndef __EADDFRIENDRESPONSETYPE__H__
#define __EADDFRIENDRESPONSETYPE__H__

#include <cstdint>

enum class eAddFriendResponseType : uint8_t {
	ACCEPTED = 0,
	ALREADYFRIEND,
	INVALIDCHARACTER,
	GENERALERROR,
	YOURFRIENDSLISTFULL,
	THEIRFRIENDLISTFULL,
	DECLINED,
	BUSY,
	NOTONLINE,
	WAITINGAPPROVAL,
	MYTHRAN,
	CANCELLED,
	FRIENDISFREETRIAL
};

#endif  //!__EADDFRIENDRESPONSETYPE__H__
