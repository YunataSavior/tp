lbl_80D25DEC:
/* 80D25DEC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80D25DF0  7C 08 02 A6 */	mflr r0
/* 80D25DF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80D25DF8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80D25DFC  7C 7F 1B 78 */	mr r31, r3
/* 80D25E00  38 7F 09 A4 */	addi r3, r31, 0x9a4
/* 80D25E04  7F E4 FB 78 */	mr r4, r31
/* 80D25E08  38 A0 00 00 */	li r5, 0
/* 80D25E0C  38 C0 00 00 */	li r6, 0
/* 80D25E10  4B 52 44 C8 */	b doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci
/* 80D25E14  2C 03 00 00 */	cmpwi r3, 0
/* 80D25E18  41 82 00 4C */	beq lbl_80D25E64
/* 80D25E1C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80D25E20  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80D25E24  38 63 4E C8 */	addi r3, r3, 0x4ec8
/* 80D25E28  4B 31 C6 40 */	b reset__14dEvt_control_cFv
/* 80D25E2C  38 00 00 01 */	li r0, 1
/* 80D25E30  98 1F 05 C9 */	stb r0, 0x5c9(r31)
/* 80D25E34  38 7F 09 A4 */	addi r3, r31, 0x9a4
/* 80D25E38  38 81 00 08 */	addi r4, r1, 8
/* 80D25E3C  4B 52 46 EC */	b getEventId__10dMsgFlow_cFPi
/* 80D25E40  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 80D25E44  28 00 00 0B */	cmplwi r0, 0xb
/* 80D25E48  40 82 00 14 */	bne lbl_80D25E5C
/* 80D25E4C  38 00 00 06 */	li r0, 6
/* 80D25E50  3C 60 80 43 */	lis r3, g_meter2_info@ha
/* 80D25E54  38 63 01 88 */	addi r3, r3, g_meter2_info@l
/* 80D25E58  98 03 00 C1 */	stb r0, 0xc1(r3)
lbl_80D25E5C:
/* 80D25E5C  38 00 00 04 */	li r0, 4
/* 80D25E60  98 1F 05 CA */	stb r0, 0x5ca(r31)
lbl_80D25E64:
/* 80D25E64  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80D25E68  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80D25E6C  7C 08 03 A6 */	mtlr r0
/* 80D25E70  38 21 00 20 */	addi r1, r1, 0x20
/* 80D25E74  4E 80 00 20 */	blr 