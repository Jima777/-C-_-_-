#include "sqr.h"  // �����������붨����ͷ�ļ�����Ȼ�ᱨ��

__int64 power2(int n)
{
	if (0 == n) return 1;
	return (n & 1) ? sqr((power2(n >> 1))) << 1 : sqr(power2(n >> 1));
}