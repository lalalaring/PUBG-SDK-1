#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.4.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.UpdateReplayZoneAreaMessage
struct UReplayZoneAreaMessage_C_UpdateReplayZoneAreaMessage_Params
{
};

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Construct
struct UReplayZoneAreaMessage_C_Construct_Params
{
};

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Tick
struct UReplayZoneAreaMessage_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.ExecuteUbergraph_ReplayZoneAreaMessage
struct UReplayZoneAreaMessage_C_ExecuteUbergraph_ReplayZoneAreaMessage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
