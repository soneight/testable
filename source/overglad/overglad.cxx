#include <son8/overglad.hxx>

#if SON8_OVERGLAD_VERSION != 0x0406CE
#define TEST_FAILED 1
#endif

#if defined(SON8_OVERGLAD_PROFILE_NONE) \
    || defined(SON8_OVERGLAD_PROFILE_COMP)
#define TEST_FAILED 2
#endif

int main()
{
#ifdef TEST_FAILED
    return TEST_FAILED;
#endif
}
