lbl_8026F2E8:
/* 8026F2E8  C0 04 00 00 */	lfs f0, 0(r4)
/* 8026F2EC  D0 03 00 00 */	stfs f0, 0(r3)
/* 8026F2F0  C0 04 00 04 */	lfs f0, 4(r4)
/* 8026F2F4  D0 03 00 04 */	stfs f0, 4(r3)
/* 8026F2F8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8026F2FC  D0 03 00 08 */	stfs f0, 8(r3)
/* 8026F300  C0 05 00 00 */	lfs f0, 0(r5)
/* 8026F304  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8026F308  C0 05 00 04 */	lfs f0, 4(r5)
/* 8026F30C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8026F310  C0 05 00 08 */	lfs f0, 8(r5)
/* 8026F314  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8026F318  4E 80 00 20 */	blr 