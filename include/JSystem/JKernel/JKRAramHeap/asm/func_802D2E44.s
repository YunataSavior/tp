/* __ct__11JKRAramHeapFUlUl __ct__11JKRAramHeapFUlUl::__ct(unsigned long, unsigned long) */
/* JKRAramHeap */
/* 802D2E44 002CFD84  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D2E48 002CFD88  7C 08 02 A6 */	mflr r0
/* 802D2E4C 002CFD8C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D2E50 002CFD90  39 61 00 20 */	addi r11, r1, 0x20
/* 802D2E54 002CFD94  48 08 F3 89 */	bl _savegpr_29
/* 802D2E58 002CFD98  7C 7D 1B 78 */	mr r29, r3
/* 802D2E5C 002CFD9C  7C 9E 23 78 */	mr r30, r4
/* 802D2E60 002CFDA0  7C BF 2B 78 */	mr r31, r5
/* 802D2E64 002CFDA4  4B FF E6 19 */	bl __ct__11JKRDisposerFv
/* 802D2E68 002CFDA8  3C 60 80 3D */	lis r3, lbl_803CC168@ha
/* 802D2E6C 002CFDAC  38 03 C1 68 */	addi r0, r3, lbl_803CC168@l
/* 802D2E70 002CFDB0  90 1D 00 00 */	stw r0, 0(r29)
/* 802D2E74 002CFDB4  38 7D 00 18 */	addi r3, r29, 0x18
/* 802D2E78 002CFDB8  48 06 C1 91 */	bl OSInitMutex
/* 802D2E7C 002CFDBC  7F A3 EB 78 */	mr r3, r29
/* 802D2E80 002CFDC0  4B FF B9 BD */	bl findFromRoot__7JKRHeapFPv
/* 802D2E84 002CFDC4  90 7D 00 30 */	stw r3, 0x30(r29)
/* 802D2E88 002CFDC8  57 E0 00 34 */	rlwinm r0, r31, 0, 0, 0x1a
/* 802D2E8C 002CFDCC  90 1D 00 3C */	stw r0, 0x3c(r29)
/* 802D2E90 002CFDD0  38 1E 00 1F */	addi r0, r30, 0x1f
/* 802D2E94 002CFDD4  54 00 00 34 */	rlwinm r0, r0, 0, 0, 0x1a
/* 802D2E98 002CFDD8  90 1D 00 34 */	stw r0, 0x34(r29)
/* 802D2E9C 002CFDDC  80 7D 00 34 */	lwz r3, 0x34(r29)
/* 802D2EA0 002CFDE0  80 1D 00 3C */	lwz r0, 0x3c(r29)
/* 802D2EA4 002CFDE4  7C 03 02 14 */	add r0, r3, r0
/* 802D2EA8 002CFDE8  90 1D 00 38 */	stw r0, 0x38(r29)
/* 802D2EAC 002CFDEC  38 00 00 FF */	li r0, 0xff
/* 802D2EB0 002CFDF0  98 1D 00 40 */	stb r0, 0x40(r29)
/* 802D2EB4 002CFDF4  38 60 00 24 */	li r3, 0x24
/* 802D2EB8 002CFDF8  80 9D 00 30 */	lwz r4, 0x30(r29)
/* 802D2EBC 002CFDFC  38 A0 00 00 */	li r5, 0
/* 802D2EC0 002CFE00  4B FF BD D9 */	bl __nw__FUlP7JKRHeapi
/* 802D2EC4 002CFE04  7C 64 1B 79 */	or. r4, r3, r3
/* 802D2EC8 002CFE08  41 82 00 20 */	beq lbl_802D2EE8
/* 802D2ECC 002CFE0C  80 9D 00 34 */	lwz r4, 0x34(r29)
/* 802D2ED0 002CFE10  38 A0 00 00 */	li r5, 0
/* 802D2ED4 002CFE14  80 DD 00 3C */	lwz r6, 0x3c(r29)
/* 802D2ED8 002CFE18  38 E0 00 FF */	li r7, 0xff
/* 802D2EDC 002CFE1C  39 00 00 00 */	li r8, 0
/* 802D2EE0 002CFE20  48 00 04 25 */	bl __ct__12JKRAramBlockFUlUlUlUcb
/* 802D2EE4 002CFE24  7C 64 1B 78 */	mr r4, r3
lbl_802D2EE8:
/* 802D2EE8 002CFE28  3C 60 80 43 */	lis r3, lbl_8043430C@ha
/* 802D2EEC 002CFE2C  38 63 43 0C */	addi r3, r3, lbl_8043430C@l
/* 802D2EF0 002CFE30  38 84 00 04 */	addi r4, r4, 4
/* 802D2EF4 002CFE34  48 00 90 59 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 802D2EF8 002CFE38  7F A3 EB 78 */	mr r3, r29
/* 802D2EFC 002CFE3C  39 61 00 20 */	addi r11, r1, 0x20
/* 802D2F00 002CFE40  48 08 F3 29 */	bl _restgpr_29
/* 802D2F04 002CFE44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D2F08 002CFE48  7C 08 03 A6 */	mtlr r0
/* 802D2F0C 002CFE4C  38 21 00 20 */	addi r1, r1, 0x20
/* 802D2F10 002CFE50  4E 80 00 20 */	blr