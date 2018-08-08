#include <relic/relic_bn.h>

#include "bn.h"

void test_add()
{
    bn_t a, b, c;
    bn_init(a, 1);
    bn_init(b, 2);
    bn_init(c, 1);
    bn_add(c, a, b);
}