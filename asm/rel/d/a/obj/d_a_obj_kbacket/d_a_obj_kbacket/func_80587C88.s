lbl_80587C88:
/* 80587C88  80 83 00 00 */	lwz r4, 0(r3)
/* 80587C8C  2C 04 00 00 */	cmpwi r4, 0
/* 80587C90  41 82 00 0C */	beq lbl_80587C9C
/* 80587C94  38 04 FF FF */	addi r0, r4, -1
/* 80587C98  90 03 00 00 */	stw r0, 0(r3)
lbl_80587C9C:
/* 80587C9C  80 63 00 00 */	lwz r3, 0(r3)
/* 80587CA0  4E 80 00 20 */	blr 