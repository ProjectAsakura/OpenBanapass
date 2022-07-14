#include "banapass.h"
#include "log.h"
#include <thread>
#include <chrono>
#include <string>
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

int BngRwReqWaitTouch(UINT a, int maxIntSomehow, UINT c, void (*callback)(int, int, void*, void*), void* e)
{
	log("BngRwReqWaitTouch()\n");
	
	if (GetAsyncKeyState('C')) {
		// Raw card data and some other stuff, who cares
		unsigned char rawCardData[168] = {
			0x01, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x92, 0x2E, 0x58, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x7F, 0x5C, 0x97, 0x44, 0xF0, 0x88, 0x04, 0x00,
			0x43, 0x26, 0x2C, 0x33, 0x00, 0x04, 0x06, 0x10, 0x30, 0x30, 0x30, 0x30,
			0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,
			0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,
			0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x30,
			0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,
			0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
			0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x4E, 0x42, 0x47, 0x49, 0x43, 0x36, 0x00, 0x00, 0xFA, 0xE9, 0x69, 0x00,
			0xF6, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};

		std::string accessCode = "30764352518498791337";
		std::string chipId = "7F5C9744F111111143262C3300040610";

		memcpy(rawCardData + 0x50, accessCode.c_str(), accessCode.size() + 1);
		memcpy(rawCardData + 0x2C, chipId.c_str(), chipId.size() + 1);

		int dn = 0;
		int reader_status = 0;

		std::thread t(callback, dn, reader_status, rawCardData, e);
		t.detach();

		// this is a really ugly hack, forgive me
		using namespace std::chrono_literals;
		std::this_thread::sleep_for(100ms);
		return 1;
	}
	else {
		return -1;
	}

}

}