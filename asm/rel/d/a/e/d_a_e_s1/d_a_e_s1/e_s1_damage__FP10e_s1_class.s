lbl_8077C52C:
/* 8077C52C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8077C530  7C 08 02 A6 */	mflr r0
/* 8077C534  90 01 00 14 */	stw r0, 0x14(r1)
/* 8077C538  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8077C53C  7C 7F 1B 78 */	mr r31, r3
/* 8077C540  A8 03 06 98 */	lha r0, 0x698(r3)
/* 8077C544  2C 00 00 01 */	cmpwi r0, 1
/* 8077C548  41 82 00 38 */	beq lbl_8077C580
/* 8077C54C  40 80 00 9C */	bge lbl_8077C5E8
/* 8077C550  2C 00 00 00 */	cmpwi r0, 0
/* 8077C554  40 80 00 08 */	bge lbl_8077C55C
/* 8077C558  48 00 00 90 */	b lbl_8077C5E8
lbl_8077C55C:
/* 8077C55C  38 80 00 07 */	li r4, 7
/* 8077C560  3C A0 80 78 */	lis r5, lit_3905@ha
/* 8077C564  C0 25 0D CC */	lfs f1, lit_3905@l(r5)
/* 8077C568  38 A0 00 00 */	li r5, 0
/* 8077C56C  FC 40 08 90 */	fmr f2, f1
/* 8077C570  4B FF E6 89 */	bl anm_init__FP10e_s1_classifUcf
/* 8077C574  38 00 00 01 */	li r0, 1
/* 8077C578  B0 1F 06 98 */	sth r0, 0x698(r31)
/* 8077C57C  48 00 00 6C */	b lbl_8077C5E8
lbl_8077C580:
/* 8077C580  A8 1F 06 A6 */	lha r0, 0x6a6(r31)
/* 8077C584  2C 00 00 00 */	cmpwi r0, 0
/* 8077C588  41 82 00 10 */	beq lbl_8077C598
/* 8077C58C  A0 1F 05 8E */	lhz r0, 0x58e(r31)
/* 8077C590  60 00 00 80 */	ori r0, r0, 0x80
/* 8077C594  B0 1F 05 8E */	sth r0, 0x58e(r31)
lbl_8077C598:
/* 8077C598  80 9F 05 D4 */	lwz r4, 0x5d4(r31)
/* 8077C59C  38 A0 00 01 */	li r5, 1
/* 8077C5A0  88 04 00 11 */	lbz r0, 0x11(r4)
/* 8077C5A4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8077C5A8  40 82 00 1C */	bne lbl_8077C5C4
/* 8077C5AC  3C 60 80 78 */	lis r3, lit_3904@ha
/* 8077C5B0  C0 23 0D C8 */	lfs f1, lit_3904@l(r3)
/* 8077C5B4  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 8077C5B8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8077C5BC  41 82 00 08 */	beq lbl_8077C5C4
/* 8077C5C0  38 A0 00 00 */	li r5, 0
lbl_8077C5C4:
/* 8077C5C4  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8077C5C8  41 82 00 20 */	beq lbl_8077C5E8
/* 8077C5CC  3C 60 80 78 */	lis r3, lit_3904@ha
/* 8077C5D0  C0 03 0D C8 */	lfs f0, lit_3904@l(r3)
/* 8077C5D4  D0 1F 06 AC */	stfs f0, 0x6ac(r31)
/* 8077C5D8  38 00 00 02 */	li r0, 2
/* 8077C5DC  B0 1F 06 96 */	sth r0, 0x696(r31)
/* 8077C5E0  38 00 00 00 */	li r0, 0
/* 8077C5E4  B0 1F 06 98 */	sth r0, 0x698(r31)
lbl_8077C5E8:
/* 8077C5E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8077C5EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8077C5F0  7C 08 03 A6 */	mtlr r0
/* 8077C5F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8077C5F8  4E 80 00 20 */	blr 