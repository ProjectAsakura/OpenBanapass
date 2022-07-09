#include "log.h"
#include <stdio.h>
#include <cstdarg>
#include <cstdlib>
#include <cstring>

void log(const char* format, ...)
{
	va_list args;
	va_start(args, format);
	printf("[OpenBanapass] ");
	vprintf(format, args);
	va_end(args);
}