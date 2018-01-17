// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.4.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.UpdateReplayZoneAreaMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayZoneAreaMessage_C::UpdateReplayZoneAreaMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.UpdateReplayZoneAreaMessage");

	UReplayZoneAreaMessage_C_UpdateReplayZoneAreaMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReplayZoneAreaMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Construct");

	UReplayZoneAreaMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UReplayZoneAreaMessage_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Tick");

	UReplayZoneAreaMessage_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.ExecuteUbergraph_ReplayZoneAreaMessage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayZoneAreaMessage_C::ExecuteUbergraph_ReplayZoneAreaMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.ExecuteUbergraph_ReplayZoneAreaMessage");

	UReplayZoneAreaMessage_C_ExecuteUbergraph_ReplayZoneAreaMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
