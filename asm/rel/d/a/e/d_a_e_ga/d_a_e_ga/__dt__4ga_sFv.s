lbl_804FBAB8:
/* 804FBAB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804FBABC  7C 08 02 A6 */	mflr r0
/* 804FBAC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 804FBAC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804FBAC8  7C 7F 1B 79 */	or. r31, r3, r3
/* 804FBACC  41 82 00 10 */	beq lbl_804FBADC
/* 804FBAD0  7C 80 07 35 */	extsh. r0, r4
/* 804FBAD4  40 81 00 08 */	ble lbl_804FBADC
/* 804FBAD8  4B DD 32 64 */	b __dl__FPv
lbl_804FBADC:
/* 804FBADC  7F E3 FB 78 */	mr r3, r31
/* 804FBAE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804FBAE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804FBAE8  7C 08 03 A6 */	mtlr r0
/* 804FBAEC  38 21 00 10 */	addi r1, r1, 0x10
/* 804FBAF0  4E 80 00 20 */	blr 