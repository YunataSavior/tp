lbl_8030E064:
/* 8030E064  39 00 00 00 */	li r8, 0
/* 8030E068  39 20 00 00 */	li r9, 0
/* 8030E06C  39 40 00 05 */	li r10, 5
/* 8030E070  38 C0 00 05 */	li r6, 5
/* 8030E074  38 E0 00 00 */	li r7, 0
/* 8030E078  28 04 00 14 */	cmplwi r4, 0x14
/* 8030E07C  41 81 00 D0 */	bgt lbl_8030E14C
/* 8030E080  3C A0 80 3D */	lis r5, lit_951@ha
/* 8030E084  38 A5 D8 2C */	addi r5, r5, lit_951@l
/* 8030E088  54 80 10 3A */	slwi r0, r4, 2
/* 8030E08C  7C 05 00 2E */	lwzx r0, r5, r0
/* 8030E090  7C 09 03 A6 */	mtctr r0
/* 8030E094  4E 80 04 20 */	bctr 
/* 8030E098  39 40 00 00 */	li r10, 0
/* 8030E09C  39 00 00 01 */	li r8, 1
/* 8030E0A0  48 00 00 AC */	b lbl_8030E14C
/* 8030E0A4  39 40 00 01 */	li r10, 1
/* 8030E0A8  39 00 00 01 */	li r8, 1
/* 8030E0AC  48 00 00 A0 */	b lbl_8030E14C
/* 8030E0B0  39 40 00 03 */	li r10, 3
/* 8030E0B4  39 00 00 01 */	li r8, 1
/* 8030E0B8  48 00 00 94 */	b lbl_8030E14C
/* 8030E0BC  39 40 00 04 */	li r10, 4
/* 8030E0C0  39 00 00 01 */	li r8, 1
/* 8030E0C4  48 00 00 88 */	b lbl_8030E14C
/* 8030E0C8  39 40 00 02 */	li r10, 2
/* 8030E0CC  48 00 00 80 */	b lbl_8030E14C
/* 8030E0D0  39 40 00 02 */	li r10, 2
/* 8030E0D4  48 00 00 78 */	b lbl_8030E14C
/* 8030E0D8  39 40 00 05 */	li r10, 5
/* 8030E0DC  48 00 00 70 */	b lbl_8030E14C
/* 8030E0E0  39 40 00 06 */	li r10, 6
/* 8030E0E4  48 00 00 68 */	b lbl_8030E14C
/* 8030E0E8  39 40 00 07 */	li r10, 7
/* 8030E0EC  48 00 00 60 */	b lbl_8030E14C
/* 8030E0F0  39 40 00 08 */	li r10, 8
/* 8030E0F4  48 00 00 58 */	b lbl_8030E14C
/* 8030E0F8  39 40 00 09 */	li r10, 9
/* 8030E0FC  48 00 00 50 */	b lbl_8030E14C
/* 8030E100  39 40 00 0A */	li r10, 0xa
/* 8030E104  48 00 00 48 */	b lbl_8030E14C
/* 8030E108  39 40 00 0B */	li r10, 0xb
/* 8030E10C  48 00 00 40 */	b lbl_8030E14C
/* 8030E110  39 40 00 0C */	li r10, 0xc
/* 8030E114  48 00 00 38 */	b lbl_8030E14C
/* 8030E118  38 C0 00 00 */	li r6, 0
/* 8030E11C  48 00 00 30 */	b lbl_8030E14C
/* 8030E120  38 C0 00 01 */	li r6, 1
/* 8030E124  48 00 00 28 */	b lbl_8030E14C
/* 8030E128  38 C0 00 02 */	li r6, 2
/* 8030E12C  48 00 00 20 */	b lbl_8030E14C
/* 8030E130  38 C0 00 03 */	li r6, 3
/* 8030E134  48 00 00 18 */	b lbl_8030E14C
/* 8030E138  38 C0 00 04 */	li r6, 4
/* 8030E13C  48 00 00 10 */	b lbl_8030E14C
/* 8030E140  38 C0 00 05 */	li r6, 5
/* 8030E144  48 00 00 08 */	b lbl_8030E14C
/* 8030E148  38 C0 00 06 */	li r6, 6
lbl_8030E14C:
/* 8030E14C  2C 03 00 01 */	cmpwi r3, 1
/* 8030E150  41 82 00 24 */	beq lbl_8030E174
/* 8030E154  40 80 00 10 */	bge lbl_8030E164
/* 8030E158  2C 03 00 00 */	cmpwi r3, 0
/* 8030E15C  40 80 00 20 */	bge lbl_8030E17C
/* 8030E160  48 00 00 48 */	b lbl_8030E1A8
lbl_8030E164:
/* 8030E164  2C 03 00 0A */	cmpwi r3, 0xa
/* 8030E168  41 82 00 2C */	beq lbl_8030E194
/* 8030E16C  40 80 00 3C */	bge lbl_8030E1A8
/* 8030E170  48 00 00 18 */	b lbl_8030E188
lbl_8030E174:
/* 8030E174  38 80 00 00 */	li r4, 0
/* 8030E178  48 00 00 30 */	b lbl_8030E1A8
lbl_8030E17C:
/* 8030E17C  38 80 00 00 */	li r4, 0
/* 8030E180  39 20 00 01 */	li r9, 1
/* 8030E184  48 00 00 24 */	b lbl_8030E1A8
lbl_8030E188:
/* 8030E188  38 80 00 01 */	li r4, 1
/* 8030E18C  38 E3 FF FE */	addi r7, r3, -2
/* 8030E190  48 00 00 18 */	b lbl_8030E1A8
lbl_8030E194:
/* 8030E194  2C 04 00 13 */	cmpwi r4, 0x13
/* 8030E198  40 82 00 0C */	bne lbl_8030E1A4
/* 8030E19C  38 80 00 02 */	li r4, 2
/* 8030E1A0  48 00 00 08 */	b lbl_8030E1A8
lbl_8030E1A4:
/* 8030E1A4  38 80 00 03 */	li r4, 3
lbl_8030E1A8:
/* 8030E1A8  54 E7 78 20 */	slwi r7, r7, 0xf
/* 8030E1AC  54 C6 60 26 */	slwi r6, r6, 0xc
/* 8030E1B0  55 45 38 30 */	slwi r5, r10, 7
/* 8030E1B4  54 84 20 36 */	slwi r4, r4, 4
/* 8030E1B8  55 23 08 3C */	slwi r3, r9, 1
/* 8030E1BC  55 00 10 3A */	slwi r0, r8, 2
/* 8030E1C0  7C 60 03 78 */	or r0, r3, r0
/* 8030E1C4  7C 80 03 78 */	or r0, r4, r0
/* 8030E1C8  7C A0 03 78 */	or r0, r5, r0
/* 8030E1CC  7C C0 03 78 */	or r0, r6, r0
/* 8030E1D0  7C E6 03 78 */	or r6, r7, r0
/* 8030E1D4  54 C5 46 3E */	srwi r5, r6, 0x18
/* 8030E1D8  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030E1DC  80 64 00 08 */	lwz r3, 8(r4)
/* 8030E1E0  38 03 00 01 */	addi r0, r3, 1
/* 8030E1E4  90 04 00 08 */	stw r0, 8(r4)
/* 8030E1E8  98 A3 00 00 */	stb r5, 0(r3)
/* 8030E1EC  54 C5 86 3E */	rlwinm r5, r6, 0x10, 0x18, 0x1f
/* 8030E1F0  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030E1F4  80 64 00 08 */	lwz r3, 8(r4)
/* 8030E1F8  38 03 00 01 */	addi r0, r3, 1
/* 8030E1FC  90 04 00 08 */	stw r0, 8(r4)
/* 8030E200  98 A3 00 00 */	stb r5, 0(r3)
/* 8030E204  54 C5 C6 3E */	rlwinm r5, r6, 0x18, 0x18, 0x1f
/* 8030E208  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030E20C  80 64 00 08 */	lwz r3, 8(r4)
/* 8030E210  38 03 00 01 */	addi r0, r3, 1
/* 8030E214  90 04 00 08 */	stw r0, 8(r4)
/* 8030E218  98 A3 00 00 */	stb r5, 0(r3)
/* 8030E21C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030E220  80 64 00 08 */	lwz r3, 8(r4)
/* 8030E224  38 03 00 01 */	addi r0, r3, 1
/* 8030E228  90 04 00 08 */	stw r0, 8(r4)
/* 8030E22C  98 C3 00 00 */	stb r6, 0(r3)
/* 8030E230  4E 80 00 20 */	blr 