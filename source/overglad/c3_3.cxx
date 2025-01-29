#include <son8/overglad/c3_3.hxx>

#if SON8_OVERGLAD_VERSION != 0x0303CB
    || !defined(SON8_OVERGLAD_PROFILE_COMP)
    || !defined(SON8_OVERGLAD_VERSION_1_1)
    || !defined(SON8_OVERGLAD_VERSION_1_5)
    || !defined(SON8_OVERGLAD_VERSION_2_1)
    || !defined(SON8_OVERGLAD_VERSION_3_3)
#define TEST_FAILED 1
#endif

#if defined(SON8_OVERGLAD_VERSION_4_3)
    || defined(SON8_OVERGLAD_VERSION_4_6)
    || defined(SON8_OVERGLAD_PROFILE_CORE)
    || defined(SON8_OVERGLAD_PROFILE_NONE)
#define TEST_FAILED 2
#endif

int main()
{
#ifdef TEST_FAILED
    return TEST_FAILED;
#endif
}
