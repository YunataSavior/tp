lbl_8030FC38:
/* 8030FC38  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8030FC3C  38 00 00 10 */	li r0, 0x10
/* 8030FC40  3C A0 CC 01 */	lis r5, 0xCC01 /* 0xCC008000@ha */
/* 8030FC44  98 05 80 00 */	stb r0, 0x8000(r5)
/* 8030FC48  38 00 00 0B */	li r0, 0xb
/* 8030FC4C  B0 05 80 00 */	sth r0, -0x8000(r5)
/* 8030FC50  54 80 14 3A */	rlwinm r0, r4, 2, 0x10, 0x1d
/* 8030FC54  B0 05 80 00 */	sth r0, -0x8000(r5)
/* 8030FC58  80 03 00 00 */	lwz r0, 0(r3)
/* 8030FC5C  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FC60  80 03 00 04 */	lwz r0, 4(r3)
/* 8030FC64  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FC68  80 03 00 08 */	lwz r0, 8(r3)
/* 8030FC6C  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FC70  C0 02 C9 34 */	lfs f0, lit_1460(r2)
/* 8030FC74  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8030FC78  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8030FC7C  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FC80  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8030FC84  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FC88  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8030FC8C  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FC90  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8030FC94  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FC98  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8030FC9C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8030FCA0  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FCA4  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8030FCA8  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FCAC  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8030FCB0  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FCB4  80 03 00 28 */	lwz r0, 0x28(r3)
/* 8030FCB8  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FCBC  D0 01 00 08 */	stfs f0, 8(r1)
/* 8030FCC0  80 01 00 08 */	lwz r0, 8(r1)
/* 8030FCC4  90 05 80 00 */	stw r0, -0x8000(r5)
/* 8030FCC8  38 21 00 20 */	addi r1, r1, 0x20
/* 8030FCCC  4E 80 00 20 */	blr 