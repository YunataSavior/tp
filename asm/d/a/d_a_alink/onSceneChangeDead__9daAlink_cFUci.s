lbl_800D0830:
/* 800D0830  A0 03 2F E8 */	lhz r0, 0x2fe8(r3)
/* 800D0834  28 00 01 50 */	cmplwi r0, 0x150
/* 800D0838  4C 82 00 20 */	bnelr 
/* 800D083C  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 800D0840  B0 03 30 12 */	sth r0, 0x3012(r3)
/* 800D0844  90 A3 31 98 */	stw r5, 0x3198(r3)
/* 800D0848  4E 80 00 20 */	blr 