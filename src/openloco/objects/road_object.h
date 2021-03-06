#pragma once

#include "../localisation/stringmgr.h"

namespace openloco
{
    namespace flags_12
    {
        constexpr uint8_t unk_01 = 1 << 1;
        constexpr uint8_t unk_03 = 1 << 3;
    }
#pragma pack(push, 1)
    struct road_object
    {
        string_id name;
        uint8_t pad_02[0x0E - 0x02];
        uint32_t var_0E;
        uint16_t flags; //0x12
        uint8_t pad_14[0x30 - 0x14];
    };
#pragma pack(pop)
}
