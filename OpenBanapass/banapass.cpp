#include "banapass.h"
#include "log.h"

#define BANA_API_VERSION "Ver 1.6.0"

extern "C"
{

ULONGLONG BngRwAttach(UINT a1, char* a2, int a3, int a4, void* callback, long a6)
{
	log("BngRwAttach()\n");
	// Do something with the callback perhaps?
	// Idk what it does
	return 1;
}

long BngRwInit()
{
	log("BngRwInit()\n");
	return 0;
}

ULONGLONG BngRwReqSetLedPower()
{
	log("BngRwSetLedPower()\n");
	return 0;
}

int BngRwDevReset(UINT a, ULONGLONG b, ULONGLONG c)
{
	log("BngRwDevReset()\n");
	return 0;
}

ULONGLONG BngRwExReadMifareAllBlock()
{
	log("BngRwExReadMifareAllBlock()\n");
	return 0xffffff9c;
}

// Finalise?
void BngRwFin()
{
	log("BngRwFin()\n");
}

UINT BngRwGetFwVersion(UINT a)
{
	log("BngRwGetFwVersion()\n");
	return 0;
}

UINT BngRwGetStationID(UINT a)
{
	log("BngRwGetStationID()\n");
	return 0;
}

const char* BngRwGetVersion()
{
	log("BngRwGetVersion()\n");
	return BANA_API_VERSION;
}

ULONGLONG BngRwIsCmdExec(UINT a)
{
	log("BngRwIsCmdExec()\n");
	return 0xFFFFFFFF;
}

UINT BngRwGetTotalRetryCount(UINT a)
{
	log("BngRwGetTotalRetryCount()\n");
	return 0;
}

int BngRwReqLed(UINT a, UINT b, ULONGLONG c, ULONGLONG d)
{
	log("BngRwReqLed()\n");
	return 1;
}

int BngRwReqAction(UINT a, UINT b, ULONGLONG c, ULONGLONG d)
{
	log("BngRwReqAction()\n");
	return 1;
}

int BngRwReqAiccAuth(UINT a, int b, UINT c, int* d, ULONGLONG e, ULONGLONG f, ULONGLONG* g)
{
	log("BngRwReqAiccAuth()\n");
	return 1;
}

int BngRwReqBeep(UINT a, UINT b, ULONGLONG c, ULONGLONG d)
{
	log("BngRwReqBeep()\n");
	return 1;
}

int BngRwReqCancel(UINT a)
{
	log("BngRwReqCancel()\n");
	if (7 < a)
	{
		return -100;
	}
	return 1;
}

int BngRwReqFwCleanup(UINT, ULONGLONG, ULONGLONG)
{
	log("BngRwReqFwCleanup()\n");
	return 1;
}

int BngRwReqFwVersionup(UINT a, ULONGLONG b, ULONGLONG c, ULONGLONG d)
{
	log("BngRwReqFwVersionup()\n");
	return 1;
}

int BngRwReqLatchID(UINT a, ULONGLONG b, ULONGLONG c)
{
	log("BngRwReqLatchId()\n");
	if (a < 8)
	{
		return -100;
	}
	return 1;
}

int BngRwReqSendMailTo(UINT a, int b, UINT c, int* d,
	char* e, char* f, char* g, char* h, ULONGLONG i, ULONGLONG j)
{
	log("BngRwReqSendMailTo()\n");
	if (7 < a)
	{
		return -100;
	}
	if (!e)
	{
		return -100;
	}
	return 1;
}

int BngRwReqSendUrlTo(UINT a, int b, UINT c, int* d,
	char* e, char* f, ULONGLONG g, ULONGLONG h)
{
	log("BngRwReqSendUrlTo()\n");
	if (7 < a)
	{
		return -100;
	}
	if (!e)
	{
		return -100;
	}
	return 1;
}

int BngRwReqWaitTouch(UINT a, int b, UINT c, ULONGLONG d, ULONGLONG e)
{
	log("BngRwReqWaitTouch()\n");
	return GetAsyncKeyState(VK_RETURN) ? 0 : -1;
}

}