lbl_80339014:
/* 80339014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80339018  7C 08 02 A6 */	mflr r0
/* 8033901C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80339020  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80339024  93 C1 00 08 */	stw r30, 8(r1)
/* 80339028  7C 9E 23 78 */	mr r30, r4
/* 8033902C  7C BF 2B 78 */	mr r31, r5
/* 80339030  A0 05 00 0C */	lhz r0, 0xc(r5)
/* 80339034  B0 04 00 1E */	sth r0, 0x1e(r4)
/* 80339038  A8 05 00 0A */	lha r0, 0xa(r5)
/* 8033903C  B0 04 00 06 */	sth r0, 6(r4)
/* 80339040  88 05 00 08 */	lbz r0, 8(r5)
/* 80339044  98 04 00 04 */	stb r0, 4(r4)
/* 80339048  88 05 00 09 */	lbz r0, 9(r5)
/* 8033904C  90 04 00 20 */	stw r0, 0x20(r4)
/* 80339050  C0 02 CA C0 */	lfs f0, lit_889(r2)
/* 80339054  D0 04 00 08 */	stfs f0, 8(r4)
/* 80339058  7F E3 FB 78 */	mr r3, r31
/* 8033905C  80 85 00 14 */	lwz r4, 0x14(r5)
/* 80339060  4B FD 15 19 */	bl func_8030A578
/* 80339064  90 7E 00 24 */	stw r3, 0x24(r30)
/* 80339068  7F E3 FB 78 */	mr r3, r31
/* 8033906C  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 80339070  4B FD 14 F1 */	bl func_8030A560
/* 80339074  90 7E 00 0C */	stw r3, 0xc(r30)
/* 80339078  7F E3 FB 78 */	mr r3, r31
/* 8033907C  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 80339080  4B FD 14 C9 */	bl func_8030A548
/* 80339084  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80339088  7F E3 FB 78 */	mr r3, r31
/* 8033908C  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 80339090  4B FD 14 D1 */	bl func_8030A560
/* 80339094  90 7E 00 14 */	stw r3, 0x14(r30)
/* 80339098  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033909C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803390A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803390A4  7C 08 03 A6 */	mtlr r0
/* 803390A8  38 21 00 10 */	addi r1, r1, 0x10
/* 803390AC  4E 80 00 20 */	blr 