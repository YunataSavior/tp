lbl_8030F294:
/* 8030F294  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030F298  7C 08 02 A6 */	mflr r0
/* 8030F29C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030F2A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030F2A4  93 C1 00 08 */	stw r30, 8(r1)
/* 8030F2A8  88 A4 00 00 */	lbz r5, 0(r4)
/* 8030F2AC  88 04 00 03 */	lbz r0, 3(r4)
/* 8030F2B0  50 05 63 26 */	rlwimi r5, r0, 0xc, 0xc, 0x13
/* 8030F2B4  64 A5 00 80 */	oris r5, r5, 0x80
/* 8030F2B8  54 66 08 3C */	slwi r6, r3, 1
/* 8030F2BC  38 06 00 E0 */	addi r0, r6, 0xe0
/* 8030F2C0  54 00 C0 0E */	slwi r0, r0, 0x18
/* 8030F2C4  7C BF 03 78 */	or r31, r5, r0
/* 8030F2C8  88 64 00 02 */	lbz r3, 2(r4)
/* 8030F2CC  88 04 00 01 */	lbz r0, 1(r4)
/* 8030F2D0  50 03 63 26 */	rlwimi r3, r0, 0xc, 0xc, 0x13
/* 8030F2D4  64 63 00 80 */	oris r3, r3, 0x80
/* 8030F2D8  38 06 00 E1 */	addi r0, r6, 0xe1
/* 8030F2DC  54 00 C0 0E */	slwi r0, r0, 0x18
/* 8030F2E0  7C 7E 03 78 */	or r30, r3, r0
/* 8030F2E4  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030F2E8  80 64 00 08 */	lwz r3, 8(r4)
/* 8030F2EC  38 63 00 0A */	addi r3, r3, 0xa
/* 8030F2F0  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8030F2F4  7C 03 00 40 */	cmplw r3, r0
/* 8030F2F8  40 81 00 08 */	ble lbl_8030F300
/* 8030F2FC  48 05 1D D9 */	bl GDOverflowed
lbl_8030F300:
/* 8030F300  38 C0 00 61 */	li r6, 0x61
/* 8030F304  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030F308  80 64 00 08 */	lwz r3, 8(r4)
/* 8030F30C  38 03 00 01 */	addi r0, r3, 1
/* 8030F310  90 04 00 08 */	stw r0, 8(r4)
/* 8030F314  98 C3 00 00 */	stb r6, 0(r3)
/* 8030F318  57 E5 46 3E */	srwi r5, r31, 0x18
/* 8030F31C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030F320  80 64 00 08 */	lwz r3, 8(r4)
/* 8030F324  38 03 00 01 */	addi r0, r3, 1
/* 8030F328  90 04 00 08 */	stw r0, 8(r4)
/* 8030F32C  98 A3 00 00 */	stb r5, 0(r3)
/* 8030F330  57 E5 86 3E */	rlwinm r5, r31, 0x10, 0x18, 0x1f
/* 8030F334  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030F338  80 64 00 08 */	lwz r3, 8(r4)
/* 8030F33C  38 03 00 01 */	addi r0, r3, 1
/* 8030F340  90 04 00 08 */	stw r0, 8(r4)
/* 8030F344  98 A3 00 00 */	stb r5, 0(r3)
/* 8030F348  57 E5 C6 3E */	rlwinm r5, r31, 0x18, 0x18, 0x1f
/* 8030F34C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030F350  80 64 00 08 */	lwz r3, 8(r4)
/* 8030F354  38 03 00 01 */	addi r0, r3, 1
/* 8030F358  90 04 00 08 */	stw r0, 8(r4)
/* 8030F35C  98 A3 00 00 */	stb r5, 0(r3)
/* 8030F360  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030F364  80 64 00 08 */	lwz r3, 8(r4)
/* 8030F368  38 03 00 01 */	addi r0, r3, 1
/* 8030F36C  90 04 00 08 */	stw r0, 8(r4)
/* 8030F370  9B E3 00 00 */	stb r31, 0(r3)
/* 8030F374  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030F378  80 64 00 08 */	lwz r3, 8(r4)
/* 8030F37C  38 03 00 01 */	addi r0, r3, 1
/* 8030F380  90 04 00 08 */	stw r0, 8(r4)
/* 8030F384  98 C3 00 00 */	stb r6, 0(r3)
/* 8030F388  57 C5 46 3E */	srwi r5, r30, 0x18
/* 8030F38C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030F390  80 64 00 08 */	lwz r3, 8(r4)
/* 8030F394  38 03 00 01 */	addi r0, r3, 1
/* 8030F398  90 04 00 08 */	stw r0, 8(r4)
/* 8030F39C  98 A3 00 00 */	stb r5, 0(r3)
/* 8030F3A0  57 C5 86 3E */	rlwinm r5, r30, 0x10, 0x18, 0x1f
/* 8030F3A4  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030F3A8  80 64 00 08 */	lwz r3, 8(r4)
/* 8030F3AC  38 03 00 01 */	addi r0, r3, 1
/* 8030F3B0  90 04 00 08 */	stw r0, 8(r4)
/* 8030F3B4  98 A3 00 00 */	stb r5, 0(r3)
/* 8030F3B8  57 C5 C6 3E */	rlwinm r5, r30, 0x18, 0x18, 0x1f
/* 8030F3BC  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030F3C0  80 64 00 08 */	lwz r3, 8(r4)
/* 8030F3C4  38 03 00 01 */	addi r0, r3, 1
/* 8030F3C8  90 04 00 08 */	stw r0, 8(r4)
/* 8030F3CC  98 A3 00 00 */	stb r5, 0(r3)
/* 8030F3D0  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030F3D4  80 64 00 08 */	lwz r3, 8(r4)
/* 8030F3D8  38 03 00 01 */	addi r0, r3, 1
/* 8030F3DC  90 04 00 08 */	stw r0, 8(r4)
/* 8030F3E0  9B C3 00 00 */	stb r30, 0(r3)
/* 8030F3E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030F3E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8030F3EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030F3F0  7C 08 03 A6 */	mtlr r0
/* 8030F3F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8030F3F8  4E 80 00 20 */	blr 