#include <son8/overglad/v4_3.hxx>

#if SON8_OVERGLAD_VERSION != 0x0403CE
#define TEST_FAILED 1
#endif

int main()
{
#ifdef TEST_FAILED
    return TEST_FAILED;
#endif
}
