#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.4.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultPistolSetting.DefaultPistolSetting_C
// 0x0000 (0x0CD0 - 0x0CD0)
class ADefaultPistolSetting_C : public ATslWeapon_Trajectory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultPistolSetting.DefaultPistolSetting_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
