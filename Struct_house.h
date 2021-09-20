#pragma once
#include "Struct_flat.h"
#include "Struct_location.h"
#include "Struct_street.h"

struct houses {
	import struct location;//Расположение дома
	import struct flat;    // Квартира
}house;

inline void House_view();