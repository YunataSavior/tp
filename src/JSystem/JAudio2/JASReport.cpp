//
// Generated By: dol2asm
// Translation Unit: JASReport
//

#include "JSystem/JAudio2/JASReport.h"
#include "JSystem/JAudio2/JASMutex.h"
#include "stdio.h"

//
// Forward References:
//

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 80431660-80431678 05E380 0018+00 1/1 0/0 0/0 .bss             sMutex */
static OSMutex sMutex;

/* 80451220-80451224 000720 0004+00 1/1 0/0 0/0 .sbss            sBuffer */
static char* sBuffer;

/* 80451224-80451228 000724 0004+00 1/1 0/0 0/0 .sbss            sLineMax */
static int sLineMax;

/* 80451228-8045122C 000728 0004+00 1/1 0/0 0/0 .sbss            sLineCount */
static int sLineCount;

/* 8045122C-80451230 00072C 0004+00 1/1 0/0 0/0 .sbss            sTop */
static int sTop;

/* 80290F64-80291060 28B8A4 00FC+00 0/0 5/5 0/0 .text            JASReport__FPCce */
void JASReport(const char * str, ...) {
    if(sBuffer) {
        va_list vl;
        va_start(vl, str);
        JASMutexLock mutexLock(&sMutex);
        vsnprintf(sBuffer + (sTop * 64), 64, str, vl);
        va_end(vl);

        sTop++;
        if (sTop >= sLineMax)
            sTop = 0;

        if (sLineCount < sLineMax)
            sLineCount++;
    }
}

/* ############################################################################################## */
/* 80451230-80451238 -00001 0008+00 0/0 6/6 0/0 .sbss            None */
/* 80451230 0001+00 data_80451230 None */
/* 80451231 0007+00 data_80451231 None */
u8 struct_80451230[8];