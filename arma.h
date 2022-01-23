#pragma once

#include <DirectXMath.h>
#include "../framework.h"
#include <iostream>
#include "../../../Window-Test/json.hpp"
using json = nlohmann::json;


namespace a3
{
	namespace DynamicOffsets {
		inline float* pitch; /* ptr[1] to get value :) */
	}
	namespace offsets
	{

		/* version changelog */
		// world :  v2.04 -> +C8

		inline 	extern uintptr_t recoil_off = 0;
		inline 	uintptr_t func_get_plyidentity = 0;
		inline 	uintptr_t func_get_grass = 0;
		inline 	uintptr_t func_end_mission = 0;
		inline 	uintptr_t func_get_damage = 0;
		inline uintptr_t func_add_impulse = 0;
		inline uintptr_t func_get_in = 0;
		// 4C 8B DC 48 83 EC 68 0F 29 74 24 ?
		inline uintptr_t func_get_terrain_height = 0;
		// rel + 3] + 7
		// 48 8B 0D ? ? ? ? 48 85 C9 74 09 48 8B 01 FF 90 ? ? ? ? 80 A3 ? ? ? ? ?
		inline 	uintptr_t enginedd11 = 0;

		inline uintptr_t ammomgr = 0;
		inline uintptr_t weapon_manager = 0;
		inline uintptr_t SWAY = 0;
		inline uintptr_t recoil = 0;
		inline uintptr_t weaponswaycontroller = 0;
		inline uintptr_t pitch_controller = 0;

		constexpr auto enginedd11_device = 0xBD0;
		constexpr auto enginedd11_swapchain = 0xBE0;
		constexpr auto enginedd11_unlock_mouse = 0x9A1;

		// rel + 3] + 7
		// 48 8B 0D ? ? ? ? BA ? ? ? ? 48 8B 01 FF 50 08 33 FF 48 8B D8 48 85 C0 74 36
		inline uintptr_t malloc_table = 0x223BB80;

		// rel + 3] + 7
		// 48 8B 05 ? ? ? ? 48 8B 40 48
		inline uintptr_t network_mgr = 0x254A660;
		constexpr auto network_client_server_name = 0x8B8;

		constexpr auto ply_identity_name = 0x188;
		constexpr auto ply_identity_steamid = 0x18;

		// rel + 3] + 7
		// 4C 8B 15 ? ? ? ? 33 D2 4C 8D 40 30

		inline uintptr_t world = 0x258C9F0;
		constexpr auto world_camera_on = 0x27E8;
		constexpr auto world_localplayer = 0x2818;

		constexpr auto world_disable_input = 0x291C; // not good  (still not good (but idc))
		constexpr auto world_camera = 0x918; // kk ? 0x50 dif
		constexpr auto world_map_open = 0x28F3;
		constexpr auto world_map = 0x1318; // kk 0x50 diff 
		constexpr auto world_ingameui = 0x5A0; // 0x50 also 

		constexpr auto ingameui_looking_at_pos = 0x46C;

		constexpr auto map_static_map = 0x190;

		// 48 8B 0D ? ? ? ? F3 0F 11 45 ? F3 41 0F 10 44 24 ?
		// F3 0F 11 4D ? F3 41 0F 10 4C 24 ? F3 0F 10 D0
		// 48 8B 0D ? ? ? ? F3 0F 11 45 ? F3 41 0F 10 44 24 ?
		// 3 diff sigs you better work fucking bitch
		inline auto landscape = 0x25B4230;

		// F3 0F 10 0D ? ? ? ? 48 83 C1 50

		// rel + 3] + 7
		// 48 8B 0D ? ? ? ? 8B D7 E8 ? ? ? ? 0F B6 D0
		inline uintptr_t dlcs_manager = 0x2488A98;
		constexpr auto dlcs_manager_tables = 0x30;
		constexpr auto dlc_id = 0x18;
		constexpr auto dlc_owned = 0x1C;
		constexpr auto dlc_name = 0x20;

		constexpr uintptr_t dlcs_tables[] = { 0x0ul, 0x78ul, 0x90ul, 0xa8ul, 0xf0ul };

		constexpr auto unit_type = 0x150;

		constexpr auto unit_type_str = 0x68;
		constexpr auto unit_type_basic_str = 0xD0;
		constexpr auto unit_clean_type_str = 0x11C8;

		constexpr auto unit_ply_id = 0xB9C;
		constexpr auto unit_mass = 0x354;
		constexpr auto unit_wep_state = 0xBA0;
		constexpr auto unit_future_visual_state = 0xD0;
		constexpr auto unit_visual_state = 0x190;
		constexpr auto unit_dead = 0x504;
		constexpr auto unit_grounded = 0x345;
		constexpr auto unit_falling = 0x1190;
		constexpr auto unit_bullet_parent = 0x4E8;
		constexpr auto unit_locked = 0xDBC + 0x8;
		constexpr auto unit_driver = 0xDD8 + 0x8;
		constexpr auto unit_passengers = 0xE88 + 0x8;

		constexpr auto unit_turrets = 0xF48 + 0x8;
		constexpr auto unit_bullet_owner = 0x4E8;
		constexpr auto unit_network_owns = 0x348;
		constexpr auto unit_side = 0x340;
		constexpr auto unit_ai = 0xa80;
		constexpr auto unit_ai_group = 0xdd60;

		constexpr auto turret_unit = 0x1D8;

		constexpr auto visual_state_matrix = 0x8;

		constexpr auto visual_state_dim = 0x8;
		constexpr auto visual_state_rot = 0x14;
		constexpr auto visual_state_dir = 0x20;
		constexpr auto visual_state_pos = 0x2C;

		constexpr auto visual_state_vel = 0x54;
		constexpr auto visual_state_vel_2 = 0x58;
		constexpr auto visual_state_speed = 0x68;
		constexpr auto visual_state_acceleration = 0x6C;

		constexpr auto visual_state_head_pos = 0x168;

		// rel + 3] + 7
		// 48 8D 0D ? ? ? ? 4C 89 65 F8 E8 ? ? ? ?
		constexpr auto veh_type_bank = 0x25F5840;

		// rel + 3] + 7
		// 48 8D 0D ? ? ? ? 48 8B D7 E8 ? ? ? ? 48 85 FF 74 04 F0 FF 47 08 48 8B D6
		constexpr auto wep_types = 0x2629D18;

		// rel + 3] + 7
		// 48 8D 0D ? ? ? ? 49 8B D6 E8 ? ? ? ? 4D 85 F6 0F 84 ? ? ? ? F0 41 FF 46 ? 48 8B 0D ? ? ? ?
		constexpr auto mag_types = 0x2629CF8;

		constexpr auto param_class_name = 0x8;
		constexpr auto param_class_parent = 0x60;

		constexpr auto wep_type_name = 0x30;
		constexpr auto wep_type_type_name = 0x40;
		constexpr auto wep_type_class = 0x20;

		constexpr auto mag_type_type_name = 0x40;
		constexpr auto mag_type_class = 0x30;
		constexpr auto mag_ammotype = 0x28;

		constexpr auto ent_type_class_name = 0x68;
		constexpr auto ent_type_parent = 0x90;

		// 40 53 48 83 EC 30 48 8B D9 48 C7 44 24 ? ? ? ? ? 48 83 CA FF 48 FF C2 80 3C 11 00
		constexpr auto func_create_a3_string = 0x1C2D60; // take any fucking string and u will have it 
		// 48 8B C4 48 89 50 10 57 41 56 48 81 EC ? ? ? ?
		constexpr auto func_create_wep_inst = 0x1371FE0; /* gunclouds && gunfire in same fnc*/
		// 1.82
		// 40 56 57 41 56 48 81 EC ? ? ? ? 48 8B 02
		// 1.84
		// 40 56 57 41 56 48 83 EC 70 48 8B F9 (CfgMagazines) (Function called before %s, "Inventory item with given name: [%s] not found")
		constexpr auto func_create_item_from_type = 0x1354E20;
		// 48 89 5C 24 ? 57 48 83 EC 20 49 8B 00 41 B1 FF  (Duplicate weapon %s detected for %s)
		constexpr auto func_add_weapon = 0xCE37A0;
		// 48 89 5C 24 ? 57 48 83 EC 30 80 B9 ? ? ? ? ? 41 8B F8 48 8B DA
		constexpr auto func_add_item = 0x5FD750;
		// 40 55 53 57 48 8B EC 48 83 EC 70 48 8B 02 48 8B F9
		constexpr auto func_force_delete_object = 0x93FA40;
		// 48 83 EC 28 48 8B 05 ? ? ? ? 0F 29 74 24 ?
		inline DWORD func_static_map_w2s = 0x121A170;
		// 4C 89 44 24 ? 48 83 EC 38 48 8B 05 ? ? ? ?
		constexpr auto func_static_map_s2w = 0x1174700;

		// does not even work :(
		constexpr auto func_spawn_backpack = 0xDD03A0;
		constexpr auto func_add_backpack = 0xB6EBB0;

		// 48 8B C4 4C 89 48 20 4C 89 40 18 F3 0F 11 48 ?
		inline DWORD func_ray_trace = 0xEB6F30;//0xE8FC30;

		// 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 81 EC ? ? ? ? 48 8B EA
		constexpr auto func_update_matrix = 0x3C5930;

		constexpr auto vfunc_net_mgr_get_ply_identity = 230;
		constexpr auto vfunc_net_mgr_add_impulse = 382;
		constexpr auto vfunc_net_mgr_move = 386;
		constexpr auto vfunc_net_mgr_get_in = 164;
		constexpr auto vfunc_net_mgr_get_out = 168;
	}
	enum raytracing : int
	{
		PHYSX = 4,
		IFIRE = 3,
		GEOM = 2,
		VIEW = 1,
		FIRE = 0
	};

	enum namespaces : int
	{
		mission,
		ui,
		parsing,
		profile,
		local
	};

	template <typename T>
	class table
	{
	private:
		T* data = nullptr;
		uint32_t size = 0;
	public:
		T operator [] (const uint32_t& i)
		{
			if (i >= 0 && i < size)
				return data[i];
			return nullptr;
		}

		const uint32_t get_size() { return size; }

		template <typename F>
		void for_each(const F& func)
		{
			for (uint32_t i = 0; i < size; ++i)
			{
				if (data[i] != nullptr)
				{
					func(data[i], i);
				}
			}
		}
		void add(T te)
		{
			int cursize = size;
			size++;
			data[cursize++] = te;
		}

		void remove(const uint32_t& idx)
		{
			for (uint32_t i = idx + 1; i < size - 1; ++i)
			{
				data[i - 1] = data[i];
			}
			size--;
		}
	};

	class enginedd11;
	class world;
	class landscape;
	class network_mgr;
	class dlc_manager;
	class unit;
	class wep_type;
	class mag_type;
	class qf_bank;
	class veh_type_bank;
	class WeaponModeType;
	class AmmoType;
	class MagazineType;
	class MuzzleType;
	class AVWeaponType;
	class weapon_mgr;
	class ConfigShared;
	class AVMuzzleState;
	class game_namespace;
	class game_var;
	class string;


	inline uintptr_t base;
	inline uintptr_t malloc_inst;

	inline world* wld;
	inline landscape* terrain;
	inline network_mgr* net_mgr;
	inline dlc_manager* dlc_mgr;
	inline table<wep_type*>* wep_types;
	inline table<mag_type*>* mag_types;
	inline table<qf_bank*>* pbos;
	inline veh_type_bank* type_bank;
	inline enginedd11* dd11;
	inline ConfigShared* sharedconf;
	inline std::vector<std::string> whitelisted;
	inline bool is_initialized;
	inline int curdif;
	inline int zeroing;

	class ConfigShared
	{
	public:
		bool is_menu_open;

		/* ESP */
		bool esp_enable;

		/*ESP ENT FILTER*/
		bool esp_players;
		bool esp_ai;

		/*ESP FRIEND FILTER*/
		bool esp_hide_group;
		bool esp_hide_team;
		bool esp_show_whitelisted;

		/*ESP DRAWING FILTER*/
		bool esp_box, esp_skeleton, esp_nametag, esp_show_prediction, esp_show_fov;

		/*ESP LIMITS*/
		float esp_max_distance;


		/*MAP ESP*/   
		bool mapesp_enable;
		float mapesp_max_distance;
		bool mapesp_show_players, mapesp_show_ai, mapesp_show_localplayer;


		/* AIMBOT */
		bool aimbot_enabled;
		bool aimbot_prediction;
		int aimbot_key;
		float aimbot_at_pelvis_after_range;
		float aimbot_fov;
		bool disable_gravity;
		bool disable_sway;
		bool old_pred;
		float last_know_gravity;
		/* MISC */
		float recoil_value;
		float sway_value;
		int collision_key;
		bool activate_in_local;


		/* PLAYER LIST TESTS */
		char playerasjson[0x100000];
		char whitelistedasjson[10000];
		char script_to_execute[2000000]; // 2000000 char ?  (2mo 2e+6)
		char scriptvars[0x100000];
	};
	static __int64 game_malloc(size_t size)
	{ // 2618A28

		return (__int64)malloc(size);
	}
	class vector2
	{
	public:
		vector2()
		{
			x = y = 0.f;
		}

		vector2(float fx, float fy)
		{
			x = fx;
			y = fy;
		}

		float x, y;

		vector2 operator+(const vector2& input) const
		{
			return vector2{ x + input.x, y + input.y };
		}

		vector2 operator-(const vector2& input) const
		{
			return vector2{ x - input.x, y - input.y };
		}

		vector2 operator/(float input) const
		{
			return vector2{ x / input, y / input };
		}

		vector2 operator*(float input) const
		{
			return vector2{ x * input, y * input };
		}

		vector2& operator-=(const vector2& v)
		{
			x -= v.x;
			y -= v.y;
			return *this;
		}

		vector2& operator/=(float input)
		{
			x /= input;
			y /= input;
			return *this;
		}

		vector2& operator*=(float input)
		{
			x *= input;
			y *= input;
			return *this;
		}

		float length() const
		{
			return std::sqrt((x * x) + (y * y));
		}

		vector2 normalized() const
		{
			return { x / length(), y / length() };
		}

		float dot_product(vector2 input) const
		{
			return (x * input.x) + (y * input.y);
		}

		float distance(vector2 input) const
		{
			return (*this - input).length();
		}

		bool empty() const
		{
			return x == 0.f && y == 0.f;
		}
	};
	class WeaponModeType
	{
	public:
		int get_ammo_to_remove()
		{
			return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 40);
		}
		void set_ammo_to_remove(int newammotoremove)
		{
			*reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 40) = newammotoremove;
		}
		float get_ammo(__int32* Magazine)
		{
			auto ammo_to_remove = get_ammo_to_remove();
			auto currammo = ((Magazine[0x23] + Magazine[0x25]) ^ 0xBABAC8B6);
			return currammo;
		}
		void set_ammo(__int32* Magazine, int count)
		{
			DWORD garbage1, garbage2;

			garbage1 = (count ^ 0xBABAC8B6) >> 1;
			garbage2 = (count ^ 0xBABAC8B6) - garbage1;
			Magazine[0x23] = garbage1;
			Magazine[0x25] = garbage2;
		}
		float GetTimeBetweenShot()
		{
			return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58);
		}
		void SetTimeBetweenShot(float new_value)
		{
			*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x58) = new_value;
		}

		float getInitSpeed()
		{
			return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x4EC);
		}
	};
	class AmmoType
	{
	public:
		float getthrust()
		{
			return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3B0);
		}
		void setthrust(float f)
		{
			*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3B0) = f;
		}
		float getthrusttime()
		{
			return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3AC);
		}
		void setthrusttime(float f)
		{
			*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x3AC) = f;
		}
	};
	class MagazineType
	{
	public:
		AmmoType* GetAmmoType()
		{
			return *reinterpret_cast<AmmoType**>(reinterpret_cast<uintptr_t>(this) + 0x28);
		}

		float GetVelocity()
		{
			return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84);
		}
	};
	class MuzzleType
	{
	public:
		MagazineType* getMagazinType()
		{
			return *reinterpret_cast<MagazineType**>(reinterpret_cast<uintptr_t>(this) + 0x5A0);
		}
	};
	class AVWeaponType
	{
	public:
		float GetVelocity()
		{
			return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x118);
		}
		void SetVelociy(float new_value)
		{
			*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x118) = new_value;
		}
	};
	class AVMuzzleState
	{
	public:

	};
	class weapon_mgr
	{
	public:
		WeaponModeType* GetWeaponModeType(int dif = 0)
		{
			return *reinterpret_cast<WeaponModeType**>((reinterpret_cast<uintptr_t>(this) + 0x0) + (0x8 * a3::curdif));
		}
		AVWeaponType* GetWeaponType(int dif = 0)
		{
			return *reinterpret_cast<AVWeaponType**>((reinterpret_cast<uintptr_t>(this) + 0x8) + (0x8 * a3::curdif));
		}
		MuzzleType* GetMuzzleType(int dif = 0)
		{
			return *reinterpret_cast<MuzzleType**>((reinterpret_cast<uintptr_t>(this) + 0x10) + (0x8 * a3::curdif));
		}
		AVMuzzleState* GetAVMuzzleState(int dif = 0)
		{
			return *reinterpret_cast<AVMuzzleState**>((reinterpret_cast<uintptr_t>(this) + 0x18) + (0x8 * a3::curdif));
		}
	};
	class enginedd11
	{
	public:
		char unk_0000[0x9C]; //0x0000
		float leftFOV; //0x009C
		float topFOV; //0x00A0
		vector2 uiTopLeft; //0x00A4
		vector2 uiBottomRight; //0x00AC
		float tripleHead; //0x00B4
		char unk_00B8[0xB88]; //0x00B8
		uint32_t BB_WIDTH; //0x0C40
		uint32_t BB_HEIGHT; //0x0C44
		char unk_0C48[0x4]; //0x0C48

		int GetWidthBB() { return BB_WIDTH; }
		int GetHeightBB() { return BB_HEIGHT; }

		float Top2D() { return uiTopLeft.y * BB_HEIGHT; }
		float Left2D() { return uiTopLeft.x * BB_WIDTH; }

		ID3D11Device* get_device()
		{
			return *reinterpret_cast<ID3D11Device**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::enginedd11_device);
		}

		ID3D11DeviceContext* get_devicec()
		{
			return *reinterpret_cast<ID3D11DeviceContext**>(
				reinterpret_cast<uintptr_t>(this)
				+ 0xBD8);
		}

		IDXGISwapChain* get_swapchain()
		{
			return *reinterpret_cast<IDXGISwapChain**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::enginedd11_swapchain);
		}

		float get_screen_w()
		{
			return static_cast<float>(*reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0xC40));
		}

		float get_screen_h()
		{
			return static_cast<float>(*reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0xC44));
		}
	};
	class string
	{
	public:
		char pad_0x0000[0x8]; //0x0000
		int64_t size; // 0x8 + 0x2 (int16)
		char str[200]; // 0x10
		std::string get_str()
		{
			auto size = *reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x8);

			if (size == 0)
				return "";

			return reinterpret_cast<char*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x10);
		}

		void set_str2(string* newstr)
		{
			auto size = *reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x8);

			if (size == 0)
				return;

			for (int i = 0; i < size; i++)
			{
				*reinterpret_cast<uint32_t*>(
					reinterpret_cast<uintptr_t>(this)
					+ (0x10 + i)) = 0; // nulling
			}

			*reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x8) = *reinterpret_cast<uint32_t*>(newstr + 0x8);
		}

		void set_str(const std::string set)
		{
			auto size = *reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x8);

			if (size == 0)
				return;

			for (int i = 0; i < size; i++)
			{
				*reinterpret_cast<uint32_t*>(
					reinterpret_cast<uintptr_t>(this)
					+ (0x10 + i)) = 0; // nulling
			}

			*reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x8) = set.size();

			memcpy(
				reinterpret_cast<void*>(
					reinterpret_cast<uintptr_t>(this)
					+ 0x10),
				set.data(),
				set.size());
		}

		static string* create(std::string str)
		{
			using fn_create_a3_string_t = string * (__fastcall*)(const char*);
			auto fn_create_a3_string =
				reinterpret_cast<fn_create_a3_string_t>(
					a3::base + offsets::func_create_a3_string
					);

			return fn_create_a3_string(str.c_str());
		}
	};
	struct vector3
	{
		vector3(float x = 0.f, float y = 0.f, float z = 0.f)
			: x(x), y(y), z(z)
		{ }

		float x, y, z;

		float len()
		{
			return sqrt((x * x) + (y * y) + (z * z));
		}

		float Dot(const vector3& vector)
		{
			return x * vector.x + y * vector.y + z * vector.z;
		}

		float Distance(const vector3& vector)
		{
			return sqrt(
				(x - vector.x) * (x - vector.x) +
				(y - vector.y) * (y - vector.y) +
				(z - vector.z) * (z - vector.z));
		}
		bool is_null()
		{
			return x == 0 && y == 0 && z == 0;
		}
		float Area()
		{
			return x * x + y * y + z * z;
		}

		float magnitude()
		{
			return sqrt(Area());
		}
		vector3 operator+(vector3 v)
		{
			vector3 res;
			res.x = x + v.x;
			res.y = y + v.y;
			res.z = z + v.z;
			return res;
		}
		vector3 operator/(vector3 v)
		{
			vector3 res;
			res.x = x / v.x;
			res.y = y / v.y;
			res.z = z / v.z;
			return res;
		}

		vector3 operator/(float v)
		{
			vector3 res;
			res.x = x / v;
			res.y = y / v;
			res.z = z / v;
			return res;
		}

		vector3 operator-(vector3 v)
		{
			vector3 res;
			res.x = x - v.x;
			res.y = y - v.y;
			res.z = z - v.z;
			return res;
		}

		vector3 operator*(vector3 v)
		{
			vector3 res;
			res.x = x * v.x;
			res.y = y * v.y;
			res.z = z * v.z;
			return res;
		}

		vector3 operator+(float v)
		{
			vector3 res;
			res.x = x + v;
			res.y = y + v;
			res.z = z + v;
			return res;
		}

		vector3 operator-(float v)
		{
			vector3 res;
			res.x = x - v;
			res.y = y - v;
			res.z = z - v;
			return res;
		}

		vector3 operator*(float v)
		{
			vector3 res;
			res.x = x * v;
			res.y = y * v;
			res.z = z * v;
			return res;
		}

		vector3 normalize()
		{
			auto l = len();
			if (l == 0) return *this;;
			x /= l;
			y /= l;
			z /= l;
			return *this;
		}
	};
	struct vector4
	{
		vector4(float x = 0.f, float y = 0.f, float z = 0.f, float w = 0.f)
			: x(x), y(y), z(z), w(w)
		{ }

		float x, y, z, w;

		float len()
		{
			return sqrt((x * x) + (y * y) + (z * z) + (w * w));
		}

		vector4 operator+(vector4 v)
		{
			vector4 res;
			res.x = x + v.x;
			res.y = y + v.y;
			res.z = z + v.z;
			res.w = w + v.w;
			return res;
		}

		vector4 operator-(vector4 v)
		{
			vector4 res;
			res.x = x - v.x;
			res.y = y - v.y;
			res.z = z - v.z;
			res.w = w - v.w;
			return res;
		}

		vector4 operator*(vector4 v)
		{
			vector4 res;
			res.x = x * v.x;
			res.y = y * v.y;
			res.z = z * v.z;
			res.w = w * v.w;
			return res;
		}

		vector4 operator/(vector4 v)
		{
			vector4 res;
			res.x = x / v.x;
			res.y = y / v.y;
			res.z = z / v.z;
			res.w = w / v.w;
			return res;
		}

		vector4 operator+(float v)
		{
			vector4 res;
			res.x = x + v;
			res.y = y + v;
			res.z = z + v;
			res.w = w + w;
			return res;
		}

		vector4 operator-(float v)
		{
			vector4 res;
			res.x = x - v;
			res.y = y - v;
			res.z = z - v;
			res.w = w - w;
			return res;
		}

		vector4 operator*(float v)
		{
			vector4 res;
			res.x = x * v;
			res.y = y * v;
			res.z = z * v;
			res.w = w * w;
			return res;
		}

		vector4 operator/(float v)
		{
			vector4 res;
			res.x = x / v;
			res.y = y / v;
			res.z = z / v;
			res.w = w / w;
			return res;
		}
		bool check_skeleton()
		{
			return x < a3::dd11->get_screen_w() && z < a3::dd11->get_screen_w() && x > 0 && z > 0;
		}
		vector4 normalize()
		{
			auto l = len();
			x /= l;
			y /= l;
			z /= l;
			w /= l;
			return *this;
		}
	};
	class camera
	{
	public:
		char pad0[8];
		DirectX::XMFLOAT3 inv_view_right;
		DirectX::XMFLOAT3 inv_view_up;
		DirectX::XMFLOAT3 inv_view_forward;
		DirectX::XMFLOAT3 inv_view_translation;
		DirectX::XMFLOAT2 pad1;
		DirectX::XMFLOAT3 view_port_matrix1;
		DirectX::XMFLOAT3 view_port_matrix2;
		DirectX::XMFLOAT3 view_port_matrix3;
		DirectX::XMFLOAT3 view_port_matrix_unk;
		DirectX::XMFLOAT3 projo1;
		DirectX::XMFLOAT3 projo2;
		DirectX::XMFLOAT3 projo3;
		DirectX::XMFLOAT3 projo4;
		DirectX::XMFLOAT3 proj1;
		DirectX::XMFLOAT3 proj2;
		DirectX::XMFLOAT3 proj3;
		DirectX::XMFLOAT3 proj4;
		DirectX::XMFLOAT3 projd1;
		DirectX::XMFLOAT3 projd2;
		DirectX::XMFLOAT3 projd3;
		DirectX::XMFLOAT3 projd4;
		DirectX::XMFLOAT2 pad14;
		DirectX::XMFLOAT3 view_right;
		DirectX::XMFLOAT3 view_up;
		DirectX::XMFLOAT3 view_forward;
		DirectX::XMFLOAT3 view_translation;
		

		vector3 get_pos()
		{
			return *reinterpret_cast<vector3*>(&inv_view_translation);
		}

		bool world_to_screen(vector3 pos, vector3& out, vector3 screen_size = { 1920.f, 1080.f })
		{
			if (!dd11)
				return false;
			screen_size.x = dd11->get_screen_w();
			screen_size.y = dd11->get_screen_h();
			auto in = DirectX::XMVECTOR{ pos.x, pos.y, pos.z };

			auto translation_temp = inv_view_translation;
			auto translation = DirectX::XMVECTOR{ translation_temp.x, translation_temp.y, translation_temp.z };

			auto temp = DirectX::XMVectorSubtract(in, translation);

			auto view_right_temp = inv_view_right;
			auto view_up_temp = inv_view_up;
			auto view_forward_temp = inv_view_forward;

			auto view_right = DirectX::XMVECTOR{ view_right_temp.x, view_right_temp.y, view_right_temp.z };
			auto view_up = DirectX::XMVECTOR{ view_up_temp.x, view_up_temp.y, view_up_temp.z };
			auto view_forward = DirectX::XMVECTOR{ view_forward_temp.x, view_forward_temp.y, view_forward_temp.z };

			auto proj_d1 = projd1;
			auto proj_d2 = projd2;

			float x = DirectX::XMVectorGetX(DirectX::XMVector3Dot(temp, view_right));
			float y = DirectX::XMVectorGetX(DirectX::XMVector3Dot(temp, view_up));
			float z = DirectX::XMVectorGetX(DirectX::XMVector3Dot(temp, view_forward));

			if (z == 0) return false;

			out.x = (screen_size.x / 2.f) * (1 + (x / proj_d1.x / z));
			out.y = (screen_size.y / 2.f) * (1 - (y / proj_d2.y / z));
			out.z = z;

			return z > 0.f;
		}
	};
	class game_var
	{
	public:
		string* get_name()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x8);
		}
		bool get_bool()
		{
			auto game_var = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x18);
			if (!game_var)
				return 0;
			return *reinterpret_cast<bool*>(
				game_var
				+ 0x18);
		}
		float get_float()
		{
			auto game_var = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x18);
			if (!game_var)
				return 0;
			return *reinterpret_cast<float*>(
				game_var
				+ 0x18);
		}
		string* get_str_or_code()
		{
			auto game_var = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x18);

			if (!game_var)
				return 0;

			auto game_var_2 = *reinterpret_cast<uintptr_t*>(
				game_var
				+ 0x18);

			if (!game_var_2)
				return 0;

			return  *reinterpret_cast<string**>(
				game_var
				+ 0x18);
		}
		const char* get_type()
		{
			auto game_var = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x18);

			auto type_coded = *reinterpret_cast<__int64*>(
				game_var
				+ 0x0);

			auto type_coded2 = *reinterpret_cast<__int64*>(
				type_coded
				+ 0x0);

			auto var_bool = *reinterpret_cast<__int64*>(
				a3::base
				+ 0x1CEDBD0);

			auto var_scalar = *reinterpret_cast<__int64*>(
				a3::base
				+ 0x1CED7E0);

			auto var_function = *reinterpret_cast<__int64*>(
				a3::base
				+ 0x1CEDE90);

			auto var_string = *reinterpret_cast<__int64*>(
				a3::base
				+ 0x1CEDAD8);

			//0x131A330

			//auto var_float = *reinterpret_cast<__int64*>(
				//a3::base
				//+ 0x131A330);

			if (type_coded2 == var_bool)
				return "BOOL";
			else if (type_coded2 == var_scalar)
				return "FLOAT";
			else if (type_coded2 == var_function)
				return "FUNC";
			else if (type_coded2 == var_string)
				return "STR";
			else
				return "UNK";
		}

		void set_float_ptr(__int64 val)
		{
			*reinterpret_cast<__int64*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x18) = val;
		}
		void set_float(bool val)
		{
			auto game_var = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x18);

			if (!game_var)
				return;

			*reinterpret_cast<bool*>(
				game_var
				+ 0x18) = val;
		}
	};
	class dlc_item
	{
	public:
		uint32_t get_id()
		{
			return *reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::dlc_id);
		}
		string* get_name()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::dlc_name);
		}
		void set_owned(bool owned)
		{
			*reinterpret_cast<uint8_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::dlc_owned) = owned;
		}
		bool get_owned()
		{
			return *reinterpret_cast<uint8_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::dlc_owned);
		}
	};
	class dlc_manager
	{
	public:
		std::vector<dlc_item*> get_all_dlcs()
		{
			auto dlc_tables = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::dlcs_manager_tables);

			std::vector<dlc_item*> dlcs;

			for (auto table_off : offsets::dlcs_tables)
			{
				auto dlc_table = reinterpret_cast<table<dlc_item*>*>(dlc_tables + table_off);

				dlc_table->for_each([&](dlc_item* dlc, const int idx)
					{
						dlcs.push_back(dlc);
					});
			}

			return dlcs;
		}
	};
	class static_map
	{
	public:
		a3::vector3 world_to_screen(a3::vector3 pos)
		{
			using fn_map_w2s_t = void(__fastcall*)(static_map*, a3::vector3*, a3::vector3);
			auto fn_map_w2s = reinterpret_cast<fn_map_w2s_t>(
				a3::base
				+ offsets::func_static_map_w2s);

			a3::vector3 map_pos;
			fn_map_w2s(this, &map_pos, pos);

			map_pos.x = map_pos.x * get_w() + a3::dd11->Left2D();
			map_pos.y = map_pos.y * get_h() + a3::dd11->Top2D();

			return map_pos;
		}

		a3::vector3 screen_to_world(a3::vector3 screen_pos)
		{
			using fn_map_s2w_t = void(__fastcall*)(static_map*, a3::vector3*, uint64_t);
			auto fn_map_s2w = reinterpret_cast<fn_map_s2w_t>(
				a3::base
				+ offsets::func_static_map_s2w);

			a3::vector3 pos
			{
				(screen_pos.x / get_w()) + get_top_x(),
				(screen_pos.y / get_h()) + get_top_y()
			};

			a3::vector3 world_pos;
			fn_map_s2w(this, &world_pos, *reinterpret_cast<uint64_t*>(&pos));

			return world_pos;
		}

		float get_top_x()
		{
			return *reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x86C);
		}

		float get_top_y()
		{
			return *reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x870);
		}

		float get_w()
		{
			return *reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0xB34);
		}

		float get_h()
		{
			return *reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0xB38);
		}
	};
	class display_map
	{
	public:
		static_map* get_static_map()
		{
			return *reinterpret_cast<static_map**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::map_static_map);
		}
	};
	class CursorTargetClass
	{
	public:
		unit* get_entity()
		{
			return *reinterpret_cast<unit**>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x08);
		}
	}; //Size=0x0010
	class ingame_ui
	{
	public:
		vector3 get_looking_at_pos()
		{
			return *reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::ingameui_looking_at_pos);
		}
		CursorTargetClass* get_cursor_ent()
		{
			return *reinterpret_cast<CursorTargetClass**>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x30);
		}
	};
	class landscape
	{
	public:
		float get_height_at_pos(a3::vector3 pos)
		{
			using fn_get_terrain_height_t = float(__fastcall*)(landscape*, float, float);
			auto fn_get_terrain_height = reinterpret_cast<fn_get_terrain_height_t>(
				a3::base
				+ offsets::func_get_terrain_height);

			return fn_get_terrain_height(this, pos.x, pos.z);
		}

		float ray_trace(a3::vector3 a, a3::vector3 b, unit* skip = nullptr, unit* target = nullptr)
		{
	/*		using fn_ray_trace_t = float(__fastcall*)(landscape*, int, a3::vector3*, a3::vector3*, float, unit* skip1, unit* target, int, char, char);
			auto fn_ray_trace = reinterpret_cast<fn_ray_trace_t>(
				a3::base
				+ 0xF22940);
			return fn_ray_trace(this, 0, &a, &b, .1f, skip, target, raytracing::IFIRE, 1, 1);*/
			return 1;
		}
	};
	class game_namespace
	{
	public:
		std::string get_name()
		{
			auto base = reinterpret_cast<uintptr_t>(this);
			if (!base)
				return xorstr_("undefined");
			auto name = *reinterpret_cast<a3::string**>(base + 0x30);
			if (!name)
				return xorstr_("undefined");

			auto as_str = name->get_str();
			if (as_str.empty())
				return xorstr_("undefined");

			return as_str;
		}
		std::vector<game_var*> get_script_vars()
		{
			std::vector<game_var*> vars;

			if (!this) return vars;

			// plaer namespace at solider + 0x710
			auto mission_namespace = reinterpret_cast<uint64_t>(this);
			if (!mission_namespace) return vars;
			auto game_var_array = *reinterpret_cast<uintptr_t*>(mission_namespace + 0x20);
			auto game_var_array_size = *reinterpret_cast<uint32_t*>(mission_namespace + 0x20 + 0x8);

			if (!game_var_array) return vars;
			if (!game_var_array) return vars;

			for (auto i = 0; i < game_var_array_size; i++)
			{
				auto game_vars_array = *reinterpret_cast<uintptr_t*>(game_var_array + (i * 0x18));
				auto game_vars_array_size = *reinterpret_cast<uint32_t*>(game_var_array + (i * 0x18) + 0x8);

				if (!game_vars_array) continue;
				if (!game_vars_array_size) continue;

				for (int j = 0; j < game_vars_array_size; j++)
				{
					auto var = reinterpret_cast<game_var*>(game_vars_array + (j * 0x28));
					if (!var) continue;
					if (!var->get_name())
						continue;

					auto var_name = var->get_name()->get_str();

					// filtering gay BIS shit
					if (var_name.find(xorstr_("bis_")) != std::string::npos) continue;
					if (var_name.find(xorstr_("fnc_")) != std::string::npos) continue;
					if (var_name.find(xorstr_("rscdisplayloading")) != std::string::npos) continue;
					if (var_name.find(xorstr_("paramsarray")) != std::string::npos) continue;
					if (var_name.find(xorstr_("deltatime")) != std::string::npos) continue;
					if (var_name.find(xorstr_("cheat")) != std::string::npos) continue;


					vars.push_back(var);

				}
			}

			return vars;
		}
	};
	class world
	{
	public:
		ingame_ui* get_ingame_ui()
		{
			return *reinterpret_cast<ingame_ui**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::world_ingameui);
		}

		game_namespace* get_specific_namespace(namespaces enumnamespace)
		{
			if (enumnamespace == namespaces::mission)
				return *reinterpret_cast<game_namespace**>(reinterpret_cast<uintptr_t>(this) + 0x1330);
			else if (enumnamespace == namespaces::ui)
				return  reinterpret_cast<game_namespace*>(a3::base + 0x2665940);
			else if (enumnamespace == namespaces::parsing)
				return  reinterpret_cast<game_namespace*>(a3::base + 0x2665000);
			else if (enumnamespace == namespaces::profile)
				return *reinterpret_cast<game_namespace**>(reinterpret_cast<uintptr_t>(this) + 0x1340);
			else if (enumnamespace == namespaces::local)
				return *reinterpret_cast<game_namespace**>(reinterpret_cast<uintptr_t>(this) + 0x1338);

			return 0; // failed
		}

		std::vector<game_namespace*> get_namespaces()
		{
			std::vector<game_namespace*> result;
			for (int i = 0; i < sizeof(namespaces); i++)
			{
				auto current_namespace = (get_specific_namespace(namespaces(i)));

				if (!(current_namespace->get_name().find(xorstr_("undefined")) != std::string::npos))
				{
					result.push_back(current_namespace);
				}
			}
			return result;
		}

		std::vector<game_var*> get_script_vars(boolean local)
		{
			std::vector<game_var*> vars;

			if (!this) return vars;

			// plaer namespace at solider + 0x710
			auto mission_namespace = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uint64_t>(this) + (local ? 0x1338 : 0x1330));
			if (!mission_namespace) return vars;
			auto game_var_array = *reinterpret_cast<uintptr_t*>(mission_namespace + 0x20);
			auto game_var_array_size = *reinterpret_cast<uint32_t*>(mission_namespace + 0x20 + 0x8);

			if (!game_var_array) return vars;
			if (!game_var_array) return vars;

			for (auto i = 0; i < game_var_array_size; i++)
			{
				auto game_vars_array = *reinterpret_cast<uintptr_t*>(game_var_array + (i * 0x18));
				auto game_vars_array_size = *reinterpret_cast<uint32_t*>(game_var_array + (i * 0x18) + 0x8);

				if (!game_vars_array) continue;
				if (!game_vars_array_size) continue;

				for (int j = 0; j < game_vars_array_size; j++)
				{
					auto var = reinterpret_cast<game_var*>(game_vars_array + (j * 0x28));
					if (!var) continue;
					if (!var->get_name())
						continue;

					auto var_name = var->get_name()->get_str();

					// filtering gay BIS shit
					if (var_name.find(xorstr_("bis_")) != std::string::npos) continue;
					if (var_name.find(xorstr_("fnc_")) != std::string::npos) continue;
					if (var_name.find(xorstr_("rscdisplayloading")) != std::string::npos) continue;
					if (var_name.find(xorstr_("paramsarray")) != std::string::npos) continue;
					if (var_name.find(xorstr_("deltatime")) != std::string::npos) continue;
					if (var_name.find(xorstr_("cheat")) != std::string::npos) continue;


					vars.push_back(var);

				}
			}

			return vars;
		}
		__int64 __fastcall get_units_ptr(int a2)
		{
			int v2; // edx@2
			int v3; // edx@3
			int v4; // edx@4
			__int64 result; // rax@6


			auto a1 = reinterpret_cast<uintptr_t*>(this);

			if (!a2)
				return a1[1248];
			v2 = a2 - 1;
			if (!v2)
				return a1[1249];
			v3 = v2 - 1;
			if (!v3)
				return a1[1250];
			v4 = v3 - 1;
			if (!v4)
				return a1[1251];
			if (v4 == 4)
				return a1[1252];
			return 0i64;
		}
		void Battleye_print(std::string str)
		{
			typedef __int64(__fastcall* beMsg)(const char*);
			beMsg printbeclientmsg = (beMsg)(a3::base + 0x63E7A0);
			if (get_local_player()) // don't print if not in game
				printbeclientmsg(str.c_str());

		}
		std::vector<unit*> get_units()
		{
			std::vector<unit*> units;
			__int64 v2; // rbx
			__int64 v3; // rcx
			void* v4; // r12
			int i; // er13
			__int64 v6; // rax
			__int64 v7; // r15
			int v8; // ebp
			__int64 v9; // r14
			__int64 unit; // rsi
			int v11; // edi
			__int64 v12; // rax
			__int64 v13; // rbx
			__int64 v14; // rdx
			__int64* v15; // rax
			__int64 v16; // rcx
			void** v18; // [rsp+20h] [rbp-48h]
			__int64 v19; // [rsp+28h] [rbp-40h]
			__int64 v20; // [rsp+70h] [rbp+8h]
			__int64 v21; // [rsp+88h] [rbp+20h]
			for (i = 0; i < 4; ++i)
			{
				v6 = (get_units_ptr(i));
				v7 = v6;
				v21 = v6;
				if (v6)
				{
					v8 = 0;
					if (*(DWORD*)(v6 + 0x50) > 0)
					{
						v9 = 0i64;
						do
						{
							unit = *(__int64*)(v9 + *(__int64*)(v7 + 0x48));
							if (unit)
							{
								v11 = 0;
								if (*(DWORD*)(unit + 0x168) > 0)
								{
									do
									{
										__int64 result; // rax

										if (v11 < 0 || v11 >= *(DWORD*)(unit + 0x168))
											result = 0i64;
										else
											result = *(__int64*)(*(__int64*)(0x38i64 * v11 + *(__int64*)(unit + 0x160)) + 8i64);

										v12 = result;
										v13 = v12;
										if (v12)
										{
											v14 = *(__int64*)(*(__int64*)(v13 + 0xC8) + 8i64);
											if (v14)
											{
												units.push_back((a3::unit*)v14);
											}
										}
										++v11;
									} while (v11 < *(DWORD*)(unit + 0x168));
									v7 = v21;
								}
							}
							++v8;
							v9 += 8i64;
						} while (v8 < *(DWORD*)(v7 + 0x50));
					}
				}
			}

			return units;
		}

		unit* get_camera_on()
		{
			auto unit_link = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::world_camera_on);

			if (!unit_link)
				return nullptr;

			return *reinterpret_cast<unit**>(
				unit_link + 0x8);
		}

		unit* get_local_player()
		{
			auto unit_link = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::world_localplayer);

			if (!unit_link)
				return nullptr;

			return *reinterpret_cast<unit**>(
				unit_link + 0x8);
		}

		void disable_input(bool disable)
		{
			*reinterpret_cast<bool*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::world_disable_input) = disable;
		}

		bool is_map_open()
		{
			return *reinterpret_cast<bool*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::world_map_open);
		}

		display_map* get_map()
		{
			return *reinterpret_cast<display_map**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::world_map);
		}

		camera* get_camera()
		{
			return *reinterpret_cast<camera**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::world_camera);
		}

		uint64_t spawn_backpack(a3::string* type)
		{
			using fn_spawn_backpack_t = uint64_t(__fastcall*)(world*, a3::string** type, uintptr_t*, uint8_t);
			auto fn_spawn_backpack = reinterpret_cast<fn_spawn_backpack_t>(
				a3::base
				+ offsets::func_spawn_backpack);

			uintptr_t unk = 0;
			return fn_spawn_backpack(this, &type, &unk, 1);
		}
		void removegrass()
		{
			if (!this)
				return;

			*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2FC8) = 50;
		}
		void putgrass()
		{
			if (!this)
				return;

			*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x2FC8) = 25;
		}
	};
	class param_class
	{
	public:
		string* get_class()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::param_class_name);
		}

		param_class* get_parent()
		{
			return *reinterpret_cast<param_class**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::param_class_parent);
		}

		bool inherits_from(std::string type)
		{
			auto parent = get_parent();

			while (parent)
			{
				if (parent->get_class()->get_str() == type)
					break;
				parent = parent->get_parent();
			}

			return parent;
		}
	};
	class wep_type
	{
	public:
		string* get_name()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::wep_type_name);
		}

		param_class* get_param_class()
		{
			return *reinterpret_cast<param_class**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::wep_type_class);
		}

		string* get_type()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::wep_type_type_name);
		}

		bool is_weapon()
		{
			auto type = get_type();

			if (!type) return false;

			if (type->get_str() == xorstr_("Pistol")) return true;
			if (type->get_str() == xorstr_("mgun")) return true;
			if (type->get_str() == xorstr_("rifle")) return true;

			return false;
		}
	};
	class mag_type
	{
	public:
		param_class* get_param_class()
		{
			return *reinterpret_cast<param_class**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::mag_type_class);
		}

		string* get_type()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::mag_type_type_name);
		}
	};
	class unit_type
	{
	public:
		string* get_type_str()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::unit_type_str);
		}

		string* get_basic_type_str()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::unit_type_basic_str);
		}

		string* get_clean_type_str()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::unit_clean_type_str);
		}
	};
	class matrix3
	{
	public:
		float m[3][3];
		vector3 PositionModelToWorld(vector3 model)
		{
			if (this)
			{
				float* visual = (float*)this;
				float _x = (model.y * visual[5]) + (model.x * visual[2]) + (model.z * visual[8]) + visual[11];
				float _y = (model.y * visual[6]) + (model.x * visual[3]) + (model.z * visual[9]);
				float _z = (model.y * visual[7]) + (model.x * visual[4]) + (model.z * visual[10]);

				float __z = _z + visual[13];
				float __y = _y + visual[12];
				float __x = _x;
				return vector3(__x, __y, __z);
			}
			else
			{
				float __z = 0.0;
				float __y = 0.0;
				float __x = 0.0;
				return vector3(__x, __y, __z);
			}
		}
	};
	class matrix4
	{
	public:
		matrix3 orientation;
		vector3 position;
	};
	class visual_state_visual_pos
	{
	public:
		char pad[0x24];
		vector3 pos;
	};
	class visual_state
	{
	public:
		vector3 get_pos(bool subtract_vel = false)
		{
			auto pos = *reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_pos);

			if (subtract_vel)
				pos = pos - get_vel();

			return pos;
		}
		void set_pos(vector3 pos)
		{
			*reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_pos) = pos;
		}
		void set_pos(vector3 newpos, float limit_ground_height)
		{
			auto ground_height = a3::terrain->get_height_at_pos(newpos);
			if (newpos.y < ground_height)
				newpos.y = ground_height;

			if (limit_ground_height != -1.f) {
				if (newpos.y > ground_height + limit_ground_height) {
					newpos.y = ground_height + limit_ground_height;
				}
			}

			*reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_pos) = newpos;
		}
		vector3 get_head_pos()
		{
			return *reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_head_pos);
		}

		vector3 get_dim()
		{
			return *reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_dim);
		}

		void set_dim(a3::vector3 vec)
		{
			*reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_dim) = vec;
		}

		vector3 get_dim2()
		{
			return *reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x84);
		}

		void set_dim2(a3::vector3 vec)
		{
			*reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x84) = vec;
		}

		vector3 get_dir2()
		{
			return *reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x9C);
		}

		void set_dir2(a3::vector3 vec)
		{
			*reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x9C) = vec;
		}
		float get_x_axis()
		{
			float x1 = *reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x20);
			float x2 = *reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x28);
			return atan2f(x1, x2) * 57.295776;
		}

		float get_y_axis()
		{
			float x1 = *reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x38);
			float x2 = *reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x40);
			return atan2f(x1, x2) * 57.295776;
		}
		void set_x_axis(float x1, float x2)
		{
			*reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x20) = x1;
			*reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x28) = x2;
		}
		void set_y_axis(float x1, float x2)
		{
			*reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x08) = x1;
			*reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x10) = x2;
		}

		vector3 get_dir()
		{
			return *reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_dir);
		}

		matrix4& get_matrix()
		{
			return *reinterpret_cast<matrix4*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_matrix);
		}
		float getSpeed()
		{
			return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + offsets::visual_state_speed);
		}
		vector3 get_vel()
		{
			return *reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_vel);
		}
		vector3 get_vel2()
		{
			return *reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_vel_2);
		}
		vector3 get_acc()
		{
			return *reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_acceleration);
		}

		void set_vel(vector3 vel)
		{
			*reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_vel) = vel;
		}

		void set_dir(vector3 dir)
		{
			*reinterpret_cast<vector3*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::visual_state_dir) = dir;
		}

		vector3 model_to_world(a3::visual_state* ptr, vector3 model)
		{
			if (ptr)
			{
				float* visual = (float*)ptr;
				float _x = (model.y * visual[5]) + (model.x * visual[2]) + (model.z * visual[8]) + visual[11];
				float _y = (model.y * visual[6]) + (model.x * visual[3]) + (model.z * visual[9]);
				float _z = (model.y * visual[7]) + (model.x * visual[4]) + (model.z * visual[10]);

				float __z = _z + visual[13];
				float __y = _y + visual[12];
				float __x = _x;
				return a3::vector3(__x, __y, __z);
			}
			else
			{
				return a3::vector3();
			}
		}
	};
	class unit_link
	{
	public:
		uint64_t ref_count;

		unit* get_unit()
		{
			return *reinterpret_cast<unit**>(
				reinterpret_cast<uintptr_t>(this)
				+ sizeof(uint64_t));
		}

		void set_unit(unit* new_unit)
		{
			*reinterpret_cast<unit**>(
				reinterpret_cast<uintptr_t>(this)
				+ sizeof(uint64_t)) = new_unit;
		}
	};
	class turret
	{
	public:
		unit* get_unit()
		{
			return *reinterpret_cast<unit**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::turret_unit);
		}
	};
	class index_sel
	{
	public:
		int32_t get_index()
		{
			auto idx_ptr = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x18);

			if (idx_ptr)
			{
				return *reinterpret_cast<int32_t*>(
					idx_ptr);
			}
			else
				return -1;
		}

		string* get_name()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x40);
		}
	};
	class shape
	{
	public:
		int32_t get_idx_by_name(std::string name)
		{
			auto index_table = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x1F8);

			if (!index_table)
				return 0;

			auto index_table_size = *reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x200);

			for (auto i = 0; i < index_table_size; i++)
			{

				auto sel = reinterpret_cast<index_sel*>(index_table + (i * 0xB0));

				if (!sel)
					continue;

				auto sel_name = sel->get_name();

				if (!sel_name)
					continue;

				if (sel_name->get_str() == name)
					return sel->get_index();
			}

			return -1;
		}

		std::string get_idx_name(int32_t idx)
		{
			auto index_table = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x1F8);

			auto index_table_size = *reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x200);

			for (auto i = 0; i < index_table_size; i++)
			{
				auto sel = reinterpret_cast<index_sel*>(index_table + (i * 0xB0));

				if (sel->get_index() == idx)
					return sel->get_name()->get_str();
			}

			return "";
		}

		std::vector<int32_t> get_all_idxs()
		{
			std::vector<int32_t> idxs;

			auto index_table = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x1F8);

			if (!index_table)
				return idxs;

			auto index_table_size = *reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x200);

			for (auto i = 0; i < index_table_size; i++)
			{
				auto sel = reinterpret_cast<index_sel*>(index_table + (i * 0xB0));

				if (!sel)
					continue;

				idxs.push_back(sel->get_index());
			}

			return idxs;
		}
	};
	class lod_shape
	{
	public:
		shape* get_shape(int level)
		{
			auto shape_ref = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x138 + (level * sizeof(uintptr_t)));

			if (!shape_ref)
				return nullptr;

			return *reinterpret_cast<shape**>(
				shape_ref
				+ 0x10);
		}

		uint8_t get_mem_lvl()
		{
			return *reinterpret_cast<uint8_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x30D);
		}

		uint8_t get_geom_lvl()
		{
			return *reinterpret_cast<uint8_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x30E);
		}

		uint8_t get_hitpoints_lvl()
		{
			return *reinterpret_cast<uint8_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x31C);
		}
	};
	class ply_identity
	{
	public:
		string* get_name()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::ply_identity_name);
		}
		std::string get_steam_id()
		{
			if (!this)
				return xorstr_("0");

			auto steamid = *reinterpret_cast<__int64*>(reinterpret_cast<uintptr_t>(this) + offsets::ply_identity_steamid);
			return std::to_string(steamid);
		}
		bool is_whitelisted()
		{
			//if (!this)
				return false;

			//if (whitelisted.empty())
			//	return false;

			//auto whitelist_status = std::find(whitelisted.begin(), whitelisted.end(), this->get_steam_id()) != whitelisted.end();
			//return whitelist_status;
		}
	};
	class unit
	{
	public:
		enum side : uint32_t
		{
			opfor,
			blufor,
			independent,
			civ
		};

		void change_fov(float new_fov)
		{
			*reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0xE90) = new_fov;
		}
		bool network_owned()
		{
			return *reinterpret_cast<bool*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x348);
		}
		double gettotal_damage()
		{
			return 	*reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0xF0);
		}
		float get_recoil()
		{
			return 			*reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x1068);
		}
		void set_recoil(float new_value)
		{
			*reinterpret_cast<float*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x1068) = new_value;
		}
		void should_affect(bool new_value)
		{
			*reinterpret_cast<bool*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x10AC) = new_value;
		}
		unit* get_parent()
		{
			if ( *(BYTE*)(reinterpret_cast<uintptr_t>(this) + 0x366) )
				return *(unit**)(*(uintptr_t*)(reinterpret_cast<uintptr_t>(this) + 0x368) + 8i64);
			
			 return 0;
		}
		void set_dammage(double newdamage)
		{
			*reinterpret_cast<bool*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x10AC) = newdamage;
		}
		weapon_mgr* get_weapon_mgr()
		{
			auto avai_unit = *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0xA88);
			if (!avai_unit)
				return 0;

			auto soldier = *(unsigned __int64*)(*(unsigned __int64*)(avai_unit + 0xD0) + 8i64);
			if (!soldier)
				soldier = *(unsigned __int64*)(*(unsigned __int64*)(avai_unit + 0xC8) + 8i64);

			if (!soldier)
				return 0;

			return *reinterpret_cast<weapon_mgr**>(soldier + 0xCE0);
		}

		float getsway()
		{
			return *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x10C0);
		}
		void set_sway(float newsway)
		{
			*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x10C0) = newsway;
		}
		void set_csway(float newsway)
		{
			auto ptr_rplayer = *reinterpret_cast<unsigned __int64*>(reinterpret_cast<uintptr_t>(this) + 0x1070);
			if (ptr_rplayer)
			{
				*reinterpret_cast<float*>(ptr_rplayer + 0x38) = newsway;
				*reinterpret_cast<float*>(ptr_rplayer + 0x4C) = newsway;
				*reinterpret_cast<float*>(ptr_rplayer + 0x60) = newsway;
				*reinterpret_cast<float*>(ptr_rplayer + 0x74) = newsway;
			}
		}
		void set_pos1(vector3 pos)
		{
			uint64_t _entitylink = *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x10);
			if (!_entitylink)
				return;
			uint64_t _object = *reinterpret_cast<uint64_t*>(_entitylink + 0x8);
			if (!_object)
				return;
			uint64_t _visualstate = *reinterpret_cast<uint64_t*>(_object + 0x190);
			if (!_visualstate)
				return;

			*reinterpret_cast<vector3*>(
				_visualstate
				+ offsets::visual_state_pos) = pos;
		}
		float getHeal()
		{
			if (!this)
				return 0.f;

			auto ptr_1 = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uint64_t>(this) + 0xF0);
			if (!ptr_1)
				return 0.f;
			auto damage = *reinterpret_cast<float*>(ptr_1 + 0x0);

			if (damage >= 1.0)
				damage = 1.0;

			damage = (1.f - damage) * 100;

			return damage;
		}

		void re_fuel()
		{
			*reinterpret_cast<float*>(reinterpret_cast<uint64_t>(this->get_future_vis_state()) + 0xC8) = 16.f;
		}
		void setDamage(float newdmg)
		{
			if (!this)
				return;

			auto ptr_1 = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uint64_t>(this) + 0xF0);
			if (!ptr_1)
				return;

			float* partdamage = *reinterpret_cast<float**>(reinterpret_cast<uint64_t>(this) + 0x270);
			if (partdamage && this->is_vehicle())
			{
				__int32 part_count = *reinterpret_cast<unsigned __int32*>(reinterpret_cast<uint64_t>(this) + 0x278);
				for (int i = 0; i < part_count; i++)
				{
					partdamage[i] = 0.f; // anti crash check p100
				}
			}
			/* ^^ 
			   if above not working
			   try this (https://github.com/JakeDahl/Arma3Internal/blob/master/World.cpp)
			   
			       uintptr_t partsTable = *(uintptr_t*)(cameraOn + this->offsets.parts);
    
				if (partsTable)
				{
					int partsTableSz = *(int*)(cameraOn + this->offsets.parts + 0x8); //TArray, size follows + 0x8 from table pointer.

					for (size_t i = 0; i < partsTableSz; i++)
					{
						*(float*)(partsTable + (i * 0x4)) = 0.f; //0 = fully repaired.
					}
				}
			*/

			*reinterpret_cast<float*>(ptr_1 + 0x0) = (100 - newdmg) / 100;
		}
		a3::vector3 get_pos1()
		{
			uint64_t _entitylink = *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x10);
			if (!_entitylink)
				return a3::vector3();
			uint64_t _object = *reinterpret_cast<uint64_t*>(_entitylink + 0x8);
			if (!_object)
				return a3::vector3();
			uint64_t _visualstate = *reinterpret_cast<uint64_t*>(_object + 0x190);
			if (!_visualstate)
				return a3::vector3();

			return *reinterpret_cast<vector3*>(
				_visualstate
				+ offsets::visual_state_pos);
		}

		a3::vector3 get_eye_pos()
		{
			using fn_get_eye_pos_t = void(__thiscall*)(unit*, vector3*, visual_state*);
			auto fn_get_eye_pos = *reinterpret_cast<fn_get_eye_pos_t*>(
				*reinterpret_cast<uintptr_t*>(this)
				+ 0x6D8);

			auto future_vis_state = get_future_vis_state();

			if (!future_vis_state)
				return {};

			a3::vector3 pos;
			fn_get_eye_pos(this, &pos, future_vis_state);
			return pos;
		}

		__int64 get_group()
		{
			auto gamedata_ptr = (*(__int64(__fastcall**)(__int64))(*(__int64*)reinterpret_cast<uintptr_t>(this) + 0x1260i64))((__int64)reinterpret_cast<uintptr_t>(this));

			if (gamedata_ptr)
			{
				return (*(__int64(__fastcall**)(__int64))(*(__int64*)gamedata_ptr + 0x1E8i64))((__int64)gamedata_ptr);
			}
			return 0;
		}
		side get_side()
		{
			return *reinterpret_cast<side*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::unit_side);
		}

		lod_shape* get_lod()
		{
			return *reinterpret_cast<lod_shape**>(
				reinterpret_cast<uintptr_t>(this)
				+ 0xC8);
		}
		
		void animate_point(vector3* pos, visual_state* vs, uint32_t level, int32_t index)
		{
			using fn_anim_pt_t = void* (__fastcall*)(unit*, vector3*, visual_state*, uint32_t, int32_t);
			auto fn_anim_pt = *reinterpret_cast<fn_anim_pt_t*>(
				*reinterpret_cast<uintptr_t*>(this)
				+ 0x970);

			fn_anim_pt(this, pos, vs, level, index);
		}
		void AnimatePoint(vector3& pos, visual_state& vs, int level, int index)
		{
			typedef void(__fastcall* tFunction)(unit*, vector3&, visual_state&, int, int);
			tFunction oFunction = (tFunction)((*(DWORD_PTR**)(DWORD_PTR)this)[302]);



			oFunction(this, pos, vs, level, index);
		}

		unit_type* get_type()
		{
			return *reinterpret_cast<unit_type**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::unit_type);
		}

		uint32_t get_ply_id()
		{
			return *reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::unit_ply_id);
		}

		visual_state* get_future_vis_state()
		{
			if (!this)
				return NULL;

			return *reinterpret_cast<visual_state**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::unit_future_visual_state);
		}

		visual_state* rendered_vis_state()
		{
			using fn_rendered_vis_state_t = visual_state * (__fastcall*)(unit*);
			auto fn_rendered_vis_state = *reinterpret_cast<fn_rendered_vis_state_t*>(
				*reinterpret_cast<uintptr_t*>(this)
				+ 0x1A0);

			return fn_rendered_vis_state(this);
		}

		visual_state* get_vis_state()
		{
			return *reinterpret_cast<visual_state**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::unit_visual_state);
		}

		bool is_dead()
		{
			return *reinterpret_cast<bool*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::unit_dead);
		}

		void set_vel(vector3 new_vel)
		{
			using fn_set_vel_t = uint32_t(__fastcall*)(unit* unit, vector3& new_vel);
			auto fn_set_vel = *reinterpret_cast<fn_set_vel_t*>(
				*reinterpret_cast<uintptr_t*>(this)
				+ 0xA78);

			fn_set_vel(this, new_vel);
		}
		 
		bool is_vehicle()
		{
			auto type = get_type();

			if (!type)
				return false;

			auto basic_type_str = type->get_basic_type_str();

			if (!basic_type_str)
				return false;

			auto str = basic_type_str->get_str();

			std::transform(str.begin(), str.end(), str.begin(), ::tolower);

			if (str.find(xorstr_("heli")) != std::string::npos)
				return true;
			if (str.find(xorstr_("car")) != std::string::npos)
				return true;
			if (str.find(xorstr_("tank")) != std::string::npos)
				return true;
			if (str.find(xorstr_("plane")) != std::string::npos)
				return true;
			if (str.find(xorstr_("motorcycle")) != std::string::npos)
				return true;
			if (str.find(xorstr_("parachute")) != std::string::npos)
				return true;
			if (str.find(xorstr_("paraglide")) != std::string::npos)
				return true;
			if (str.find(xorstr_("ship")) != std::string::npos)
				return true;
			if (str.find(xorstr_("submarine")) != std::string::npos)
				return true;
			if (str.find(xorstr_("van")) != std::string::npos)
				return true;
			if (str.find(xorstr_("fuel")) != std::string::npos)
				return true;

			return false;
		}

		bool is_soldier()
		{
			const auto type = get_type();

			if (!type)
				return false;

			const auto type_basic_str = type->get_basic_type_str();

			if (!type_basic_str)
				return false;

			if (type_basic_str->get_str().find(xorstr_("soldier")) != std::string::npos)
				return true;

			return false;
		}

		bool is_player()
		{
			using fn_get_ply_identity_t = ply_identity * (__fastcall*)(__int64, uint32_t);
			auto fn_get_ply_identity = reinterpret_cast<fn_get_ply_identity_t>(
				a3::base
				+ a3::offsets::func_get_plyidentity);//0x08EA700);

			auto net_mgr = a3::net_mgr;
			if (net_mgr)
			{
				auto net_cl = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(a3::net_mgr) + 0x48);
				if (net_cl)
				{
					if (fn_get_ply_identity(net_cl, get_ply_id()))
					{
						return true;
					}
				}
			}

			return false;
		}

		bool is_bullet()
		{
			if (!get_type() || !get_type()->get_basic_type_str()) return false;

			auto type = get_type()->get_basic_type_str()->get_str();

			if (type.find(xorstr_("shotbullet")) != std::string::npos)
				return true;

			return false;
		}

		unit_link* get_bullet_owner()
		{
			return *reinterpret_cast<unit_link**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::unit_bullet_parent);
		}

		void set_locked(bool locked)
		{
			*reinterpret_cast<bool*>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::unit_locked) = locked;
		}

		unit* get_driver()
		{
			if (!this) return nullptr;
			return *reinterpret_cast<unit**>(reinterpret_cast<uintptr_t>(this) + offsets::unit_driver);
		}

		std::vector<unit*> get_passengers()
		{
			std::vector<unit*> passengers;

			intptr_t passenger_list = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(this) + offsets::unit_passengers);
			uint32_t passenger_list_size = *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + offsets::unit_passengers + sizeof(uintptr_t));

			if (!passenger_list)
				return passengers;

			if (!passenger_list_size)
				return passengers;

			for (auto i = 0; i < passenger_list_size; i++)
			{
				auto passenger = *reinterpret_cast<unit**>(passenger_list + (0x10 * i));
				if (!passenger)
					continue;

				passengers.push_back(passenger);
			}

			return passengers;
		}
		std::vector<int> get_seat()
		{
			std::vector<int> passengers;

			intptr_t passenger_list = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(this) + offsets::unit_passengers);
			uint32_t passenger_list_size = *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + offsets::unit_passengers + sizeof(uintptr_t));

			if (!passenger_list)
				return passengers;

			if (!passenger_list_size)
				return passengers;

			for (auto i = 0; i < passenger_list_size; i++)
			{
				auto passenger = *reinterpret_cast<unit**>(passenger_list + (0x10 * i));
				if (!passenger)
					passengers.push_back(i);
			}

			return passengers;
		}

		std::vector<turret*> get_turrets()
		{
			std::vector<turret*> turrets;

			intptr_t turret_list = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(this) + offsets::unit_turrets);
			uint32_t turret_list_size = *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + offsets::unit_turrets + sizeof(uintptr_t));

			if (!turret_list)
				return turrets;

			if (!turret_list_size)
				return turrets;

			for (int i = 0; i < turret_list_size; i++)
			{
				auto t = *reinterpret_cast<turret**>(turret_list + sizeof(uintptr_t) * i);

				if (!t) continue;

				turrets.push_back(t);
			}

			return turrets;
		}

		std::vector<unit*> get_crew()
		{
			auto crew = get_passengers();
			auto turrets = get_turrets();

			for (auto turret : turrets)
			{
				auto unit = turret->get_unit();
				if (unit) crew.push_back(unit);
			}

			auto driver = get_driver();

			if (driver)
				crew.push_back(driver);

			return crew;
		}

		vector3 get_render_pos()
		{
			auto vis_state = get_future_vis_state();

			if (!vis_state)
				return {};

			return vis_state->get_pos();
		}

		matrix4 get_smooth_matrix()
		{
			auto vis_state = rendered_vis_state();

			if (!vis_state)
				return matrix4();

			return *reinterpret_cast<matrix4*>(reinterpret_cast<uintptr_t>(vis_state) + 0x8);
		}

		vector3 get_selection(std::string name)
		{
			vector3 pos = { 0,0,0 };

			auto vis_state = get_vis_state();

			if (!vis_state)
				return {};

			auto lod = get_lod();

			if (!lod)
				return {};

			auto shape = lod->get_shape(lod->get_mem_lvl());

			if (!shape)
				return{};

			auto sel = shape->get_idx_by_name(name);

			if (sel != -1)
			{
				a3::vector3 model_pos;
				AnimatePoint(model_pos, *vis_state, lod->get_mem_lvl(), sel);
				pos = vis_state->model_to_world(vis_state, model_pos);
			}
			name.clear();
			return pos;
		}

		std::vector<std::tuple<vector3, int32_t>> get_bones()
		{
			std::vector<std::tuple<vector3, int32_t>> bones;

			auto vis_state = rendered_vis_state();

			if (!vis_state)
				return {};
			auto lod = get_lod();

			if (!lod)
				return {};

			auto shape = lod->get_shape(lod->get_mem_lvl());

			if (!shape)
				return{};

			auto idxs = shape->get_all_idxs();

			for (auto idx : idxs)
			{
				a3::vector3 model_pos;
				animate_point(&model_pos, vis_state, lod->get_mem_lvl(), idx);

				bones.push_back(std::make_tuple(vis_state->model_to_world(vis_state, model_pos), idx));
			}

			return bones;
		}
	};

	class ent_type
	{
	public:
		bool inherits_from(std::string type)
		{
			auto parent = get_parent();

			while (parent)
			{
				if (parent->get_class()->get_str() == type)
					break;
				parent = parent->get_parent();
			}

			return parent;
		}

		string* get_class()
		{
			return *reinterpret_cast<string**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::ent_type_class_name);
		}

		ent_type* get_parent()
		{
			return *reinterpret_cast<ent_type**>(
				reinterpret_cast<uintptr_t>(this)
				+ offsets::ent_type_parent);
		}
	};

	template <typename T>
	class track_link
	{
	public:
		T get_obj()
		{
			return *reinterpret_cast<T*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x10);
		}
	};

	class veh_type_bank
	{
	public:
		std::vector<ent_type*> get_types()
		{
			std::vector<ent_type*> types;

			auto tables = *reinterpret_cast<uintptr_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x20);

			auto tables_size = *reinterpret_cast<uint32_t*>(
				reinterpret_cast<uintptr_t>(this)
				+ 0x28);

			for (auto i = 0; i < tables_size; i++)
			{
				auto tbl = reinterpret_cast<table<track_link<ent_type*>*>*>(tables + (i * 0x18));

				tbl->for_each([&](track_link<ent_type*>* link, const int idx)
					{
						auto type = link->get_obj();

						types.push_back(type);
					});
			}

			return types;
		}
	};

	class net_client
	{
	public:
		std::string get_server_name() {
			if ((uintptr_t)this) {
				auto server_name = *reinterpret_cast<string**>(reinterpret_cast<uintptr_t>(this) + 0x8A8);
				return server_name->get_str();
			}

			return "";
		}
	};
	class network_mgr
	{
	public:
		std::string get_server_name() {
			auto net_cl = *reinterpret_cast<uintptr_t*>(this + 0x48);
			if (net_cl) {
				auto server_name = *reinterpret_cast<string**>(net_cl + 0x8A8);
				return server_name->get_str();
			}

			return "";
		}
		net_client* get_nclient()
		{
			if (this)
				return *reinterpret_cast<net_client**>(reinterpret_cast<uintptr_t>(this) + 0x48);
		}
		ply_identity* get_ply_identity(uint32_t ply_id)
		{
			//Server error: Player without identity %s (id %d)
			// do not remove that its just for me in ida
			using fn_get_ply_identity_t = ply_identity * (__fastcall*)(__int64, uint32_t);
			auto fn_get_ply_identity = reinterpret_cast<fn_get_ply_identity_t>(
				a3::base
				+ a3::offsets::func_get_plyidentity);//0x08EA700);

			auto net_mgr = a3::net_mgr;
			if (net_mgr)
			{
				auto net_cl = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(a3::net_mgr) + 0x48);
				if (net_cl)
				{
					return fn_get_ply_identity(net_cl, ply_id);
				}
			}
			return NULL;
		}
		void Crash(void* entity)
		{
			//patched by BI team

			//not delete object actually
			using fn_force_delete_object_t = void(__fastcall*)(__int64 a1, void* a2, int a3, volatile signed __int32** a4);
			auto fn_force_delete_object = reinterpret_cast<fn_force_delete_object_t>(
				a3::base
				+ 0x9B5A30);

			auto net_mgr = a3::net_mgr;
			if (net_mgr)
			{
				auto net_cl = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(a3::net_mgr) + 0x48);
				if (net_cl)
				{
					std::string payload = xorstr_("#");
					for (int i = 0; i < 1024; i++)
						payload.append("a");
					volatile signed __int32* test = (volatile signed __int32*)string::create(payload);
					fn_force_delete_object(net_cl, entity, 0, &test);
				}
			}
		}
		std::vector<unit*> get_players()
		{
			std::vector<unit*> units;

			for (auto unit : wld->get_units())
			{
				if (/*userinterface::settings::esp_players_vehicle &&*/ unit->is_vehicle())
				{
					for (auto veh_unit : unit->get_crew())
					{
						if (veh_unit->is_soldier())
						{
							units.push_back(veh_unit);
						}
					}
				}
				if (unit->is_soldier())
				{
					units.push_back(unit);
				}
			}
			return units;
		}
	};
	class Utils
	{
	public:

		static bool world_update()
		{
			a3::wld = *reinterpret_cast<a3::world**>(a3::base + a3::offsets::world);

			if (a3::wld)
				return true;

			return false;
		}

		static bool dlc_update()
		{
			a3::dlc_mgr = *reinterpret_cast<a3::dlc_manager**>(a3::base + a3::offsets::dlcs_manager);

			if (a3::dlc_mgr)
				return true;

			return false;
		}

		static bool netmgr_update()
		{
			a3::net_mgr = *reinterpret_cast<a3::network_mgr**>(a3::base + a3::offsets::network_mgr);

			if (a3::net_mgr)
				return true;

			return false;
		}
		static bool ingame_check()
		{
			auto net_cl = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(a3::net_mgr) + 0x48);

			if (!net_cl)
				return false;

			a3::world* wld = a3::wld;
			auto local_camera_on = wld->get_camera_on();
			if (!local_camera_on)
				return false;

			auto local_ply = wld->get_camera_on();
			if (!local_ply)
				return false;

			return true;
		}
		static bool engine_check()
		{
			a3::dd11 = *reinterpret_cast<a3::enginedd11**>(a3::base + a3::offsets::enginedd11);

			if (!a3::dd11)
				return false;

			return true;
		}
		static bool terrain_check()
		{
			a3::terrain = *reinterpret_cast<a3::landscape**>(a3::base + a3::offsets::landscape);

			if (!a3::terrain)
				return false;

			return true;
		}
	};

	enum WorldInfo : int
	{
		NeedUpdate,
		NotInGame,
		Map_Open,
		OK
	};

	enum PlayerState : int
	{
		BadEnt,
		OnlyGoodEntForMap,
		AI,
		Player,
		LocalPlayer,
		Vehicle,
		SameTeam,
		SameGroup
	};

	class PlayerInfo
	{
	public:
		PlayerState player_state;
		a3::unit* unit;
	};
	class utils
	{
	public:
		inline static const char* WorldInfoToStr(WorldInfo WI)
		{
			const char* Possiblity[4] = { "NeedUpdate", "NotInGame", "Map_Open", "Ok" };
			return Possiblity[WI];
		}
		static WorldInfo GetWorldStatus()
		{
			if (!wld)
				if (!Utils::world_update())
					return NeedUpdate;

			if (!net_mgr)
				if (!Utils::netmgr_update())
					return NeedUpdate;

			if (!dlc_mgr)
				if (!Utils::dlc_update())
					return NeedUpdate;

			if (!dd11)
				if (!Utils::engine_check())
					return NeedUpdate;

			if (!a3::terrain)
				if (!Utils::terrain_check())
					return NeedUpdate;

			if (!Utils::ingame_check())
				return NotInGame;

			if (wld->is_map_open())
				return Map_Open;

			return OK;
		}
		static PlayerInfo SetPlayerState(PlayerInfo player, PlayerState state)
		{
			player.player_state = state;
			return player;
		}
		static bool VerifyEnt(PlayerInfo player)
		{
			if (player.unit)
				return true;
			return false;
		}
		static bool IsGoodEnt(unit* unit, bool map)
		{
			/* variables */
			if (!unit || unit->is_dead() || !unit->get_future_vis_state())
			{
				return false;
			}

			float dist = (unit->get_render_pos() - wld->get_camera_on()->get_render_pos()).len();

			if ( unit && !unit->is_dead() && unit != wld->get_local_player() )
			{
				if ( !map )
					if ( dist <= sharedconf->esp_max_distance )
						return true;
					else
						return false;
				else
					return true;
			}
			return false;
		}
		static bool IsPlayer(unit* unit, bool map)
		{
			if (!IsGoodEnt(unit, map))
				return false;

			a3::ply_identity* identity = a3::net_mgr->get_ply_identity(unit->get_ply_id());

			if (map ? sharedconf->mapesp_show_ai : sharedconf->esp_ai)
				return true;
			else if (identity)
				return true;
			else
				return false;


		}
		static DirectX::XMFLOAT4 rainbow() {

			static float x = 0, y = 0;
			static float r = 0, g = 0, b = 0;

			if (y >= 0.0f && y < 255.0f) {
				r = 255.0f;
				g = 0.0f;
				b = x;
			}
			else if (y >= 255.0f && y < 510.0f) {
				r = 255.0f - x;
				g = 0.0f;
				b = 255.0f;
			}
			else if (y >= 510.0f && y < 765.0f) {
				r = 0.0f;
				g = x;
				b = 255.0f;
			}
			else if (y >= 765.0f && y < 1020.0f) {
				r = 0.0f;
				g = 255.0f;
				b = 255.0f - x;
			}
			else if (y >= 1020.0f && y < 1275.0f) {
				r = x;
				g = 255.0f;
				b = 0.0f;
			}
			else if (y >= 1275.0f && y < 1530.0f) {
				r = 255.0f;
				g = 255.0f - x;
				b = 0.0f;
			}

			x += 0.5f; //increase this value to switch colors faster
			if (x >= 255.0f)
				x = 0.0f;

			y += 0.5f; //increase this value to switch colors faster
			if (y > 1530.0f)
				y = 0.0f;


			return DirectX::XMFLOAT4((int)r, (int)g, (int)b, 255);
		} // lazy fuck
		static DirectX::XMFLOAT4 GetXColorBySide(a3::unit::side side)
		{
			//from arma wiki
			DirectX::XMFLOAT4 color = { 0,0,0,0 };
			switch (side)
			{
			case a3::unit::side::opfor:
				color = { 128,0,26,255 };
				break;
			case a3::unit::side::blufor:
				color = { 0,78,153,255 };
				break;
			case a3::unit::side::independent:
				color = { 0,128,26,255 };
				break;
			case a3::unit::side::civ:
				color = { 102,0,128,255 };
				break;
			default:
				break;
			}

			return color;
		}
	};
}
