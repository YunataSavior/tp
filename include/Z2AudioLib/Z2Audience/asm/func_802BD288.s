/* 802BD288 002BA1C8  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802BD28C 002BA1CC  7C 08 02 A6 */ mflr r0
/* 802BD290 002BA1D0  90 01 00 14 */ stw r0, 0x14(r1)
/* 802BD294 002BA1D4  93 E1 00 0C */ stw r31, 0xc(r1)
/* 802BD298 002BA1D8  93 C1 00 08 */ stw r30, 8(r1)
/* 802BD29C 002BA1DC  7C 7E 1B 79 */ or. r30, r3, r3
/* 802BD2A0 002BA1E0  7C 9F 23 78 */ mr r31, r4
/* 802BD2A4 002BA1E4  41 82 00 1C */ beq lbl_802BD2C0
/* 802BD2A8 002BA1E8  38 80 00 00 */ li r4, 0
/* 802BD2AC 002BA1EC  4B FD 35 B5 */ bl JASGenericMemPool_NS_dtor
/* 802BD2B0 002BA1F0  7F E0 07 35 */ extsh. r0, r31
/* 802BD2B4 002BA1F4  40 81 00 0C */ ble lbl_802BD2C0
/* 802BD2B8 002BA1F8  7F C3 F3 78 */ mr r3, r30
/* 802BD2BC 002BA1FC  48 01 1A 81 */ bl __dl__FPv
lbl_802BD2C0:
/* 802BD2C0 002BA200  7F C3 F3 78 */ mr r3, r30
/* 802BD2C4 002BA204  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 802BD2C8 002BA208  83 C1 00 08 */ lwz r30, 8(r1)
/* 802BD2CC 002BA20C  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802BD2D0 002BA210  7C 08 03 A6 */ mtlr r0
/* 802BD2D4 002BA214  38 21 00 10 */ addi r1, r1, 0x10
/* 802BD2D8 002BA218  4E 80 00 20 */ blr