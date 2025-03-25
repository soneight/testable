#include <son8/overglad.hxx>

#include <glad/son8/define.h>

#if SON8_OVERGLAD_VERSION != 0x0406CE \
    || !defined(SON8_OVERGLAD_PROFILE_CORE) \
    || !defined(SON8_OVERGLAD_INCLUDE) \
    || !defined(SON8_OVERGLAD_VERSION_1_1) \
    || !defined(SON8_OVERGLAD_VERSION_1_5) \
    || !defined(SON8_OVERGLAD_VERSION_2_1) \
    || !defined(SON8_OVERGLAD_VERSION_3_3) \
    || !defined(SON8_OVERGLAD_VERSION_4_3) \
    || !defined(SON8_OVERGLAD_VERSION_4_6)
#define TEST_FAILED 1
#endif

#if defined(SON8_OVERGLAD_PROFILE_COMP) || defined(SON8_OVERGLAD_PROFILE_NONE)
#define TEST_FAILED 2
#endif

// TODO: add tests for enum constants

int main()
{
#ifdef TEST_FAILED
    return TEST_FAILED;
#endif
}

// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
