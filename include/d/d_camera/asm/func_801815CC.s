/* 801815CC 0017E50C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 801815D0 0017E510  7C 08 02 A6 */ mflr r0
/* 801815D4 0017E514  90 01 00 14 */ stw r0, 0x14(r1)
/* 801815D8 0017E518  38 63 02 48 */ addi r3, r3, 0x248
/* 801815DC 0017E51C  4B FE 19 F9 */ bl dCamera_c_NS_U
/* 801815E0 0017E520  80 01 00 14 */ lwz r0, 0x14(r1)
/* 801815E4 0017E524  7C 08 03 A6 */ mtlr r0
/* 801815E8 0017E528  38 21 00 10 */ addi r1, r1, 0x10
/* 801815EC 0017E52C  4E 80 00 20 */ blr