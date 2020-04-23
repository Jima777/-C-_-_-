#include "sqr.h"  // 内联函数必须定义在头文件，不然会报错

__int64 power2(int n)
{
	if (0 == n) return 1;
	return (n & 1) ? sqr((power2(n >> 1))) << 1 : sqr(power2(n >> 1));
}