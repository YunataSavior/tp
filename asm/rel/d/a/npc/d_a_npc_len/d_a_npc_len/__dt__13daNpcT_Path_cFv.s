lbl_80A67FE8:
/* 80A67FE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A67FEC  7C 08 02 A6 */	mflr r0
/* 80A67FF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A67FF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A67FF8  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A67FFC  41 82 00 1C */	beq lbl_80A68018
/* 80A68000  3C A0 80 A7 */	lis r5, __vt__13daNpcT_Path_c@ha
/* 80A68004  38 05 99 70 */	addi r0, r5, __vt__13daNpcT_Path_c@l
/* 80A68008  90 1F 00 24 */	stw r0, 0x24(r31)
/* 80A6800C  7C 80 07 35 */	extsh. r0, r4
/* 80A68010  40 81 00 08 */	ble lbl_80A68018
/* 80A68014  4B 86 6D 28 */	b __dl__FPv
lbl_80A68018:
/* 80A68018  7F E3 FB 78 */	mr r3, r31
/* 80A6801C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A68020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A68024  7C 08 03 A6 */	mtlr r0
/* 80A68028  38 21 00 10 */	addi r1, r1, 0x10
/* 80A6802C  4E 80 00 20 */	blr 