#include <son8/overglad/v2_1.hxx>

#if SON8_OVERGLAD_VERSION != 0x020100
#define TEST_FAILED 1
#endif

int main()
{
#ifdef TEST_FAILED
    return TEST_FAILED;
#endif
}
