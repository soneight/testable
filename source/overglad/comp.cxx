#include <son8/overglad/comp.hxx>

#if SON8_OVERGLAD_VERSION != 0x0406CB
#define TEST_FAILED 1
#endif

int main()
{
#ifdef TEST_FAILED
    return TEST_FAILED;
#endif
}
