#pragma once
#include "Struct_flat.h"
#include "Struct_location.h"
#include "Struct_street.h"

struct houses {
	import struct location;//������������ ����
	import struct flat;    // ��������
}house;

inline void House_view();