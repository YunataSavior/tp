lbl_809F1F40:
/* 809F1F40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809F1F44  7C 08 02 A6 */	mflr r0
/* 809F1F48  90 01 00 14 */	stw r0, 0x14(r1)
/* 809F1F4C  38 80 FF FF */	li r4, -1
/* 809F1F50  81 83 05 68 */	lwz r12, 0x568(r3)
/* 809F1F54  81 8C 00 08 */	lwz r12, 8(r12)
/* 809F1F58  7D 89 03 A6 */	mtctr r12
/* 809F1F5C  4E 80 04 21 */	bctrl 
/* 809F1F60  38 60 00 01 */	li r3, 1
/* 809F1F64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809F1F68  7C 08 03 A6 */	mtlr r0
/* 809F1F6C  38 21 00 10 */	addi r1, r1, 0x10
/* 809F1F70  4E 80 00 20 */	blr 