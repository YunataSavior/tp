lbl_8072C130:
/* 8072C130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8072C134  7C 08 02 A6 */	mflr r0
/* 8072C138  90 01 00 14 */	stw r0, 0x14(r1)
/* 8072C13C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8072C140  7C 7F 1B 79 */	or. r31, r3, r3
/* 8072C144  41 82 00 10 */	beq lbl_8072C154
/* 8072C148  7C 80 07 35 */	extsh. r0, r4
/* 8072C14C  40 81 00 08 */	ble lbl_8072C154
/* 8072C150  4B BA 2B EC */	b __dl__FPv
lbl_8072C154:
/* 8072C154  7F E3 FB 78 */	mr r3, r31
/* 8072C158  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8072C15C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8072C160  7C 08 03 A6 */	mtlr r0
/* 8072C164  38 21 00 10 */	addi r1, r1, 0x10
/* 8072C168  4E 80 00 20 */	blr 