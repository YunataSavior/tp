/* 800E2308 000DF248  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800E230C 000DF24C  7C 08 02 A6 */ mflr r0
/* 800E2310 000DF250  90 01 00 14 */ stw r0, 0x14(r1)
/* 800E2314 000DF254  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800E2318 000DF258  7C 7F 1B 78 */ mr r31, r3
/* 800E231C 000DF25C  38 80 00 66 */ li r4, 0x66
/* 800E2320 000DF260  4B FE 0A 85 */ bl daAlink_c_NS_commonProcInitNotSameProc
/* 800E2324 000DF264  2C 03 00 00 */ cmpwi r3, 0
/* 800E2328 000DF268  40 82 00 0C */ bne lbl_800E2334
/* 800E232C 000DF26C  38 60 00 01 */ li r3, 1
/* 800E2330 000DF270  48 00 00 60 */ b lbl_800E2390
lbl_800E2334:
/* 800E2334 000DF274  80 1F 06 0C */ lwz r0, 0x60c(r31)
/* 800E2338 000DF278  2C 00 00 00 */ cmpwi r0, 0
/* 800E233C 000DF27C  40 82 00 3C */ bne lbl_800E2378
/* 800E2340 000DF280  A0 1F 2F DC */ lhz r0, 0x2fdc(r31)
/* 800E2344 000DF284  28 00 00 46 */ cmplwi r0, 0x46
/* 800E2348 000DF288  41 82 00 24 */ beq lbl_800E236C
/* 800E234C 000DF28C  7F E3 FB 78 */ mr r3, r31
/* 800E2350 000DF290  38 80 00 00 */ li r4, 0
/* 800E2354 000DF294  38 A0 00 00 */ li r5, 0
/* 800E2358 000DF298  4B FD EF 85 */ bl daAlink_c_NS_deleteEquipItem
/* 800E235C 000DF29C  38 00 00 46 */ li r0, 0x46
/* 800E2360 000DF2A0  B0 1F 2F DC */ sth r0, 0x2fdc(r31)
/* 800E2364 000DF2A4  7F E3 FB 78 */ mr r3, r31
/* 800E2368 000DF2A8  4B FF F3 E1 */ bl daAlink_c_NS_setCopyRodModel
lbl_800E236C:
/* 800E236C 000DF2AC  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800E2370 000DF2B0  80 7F 07 24 */ lwz r3, 0x724(r31)
/* 800E2374 000DF2B4  D0 03 00 08 */ stfs f0, 8(r3)
lbl_800E2378:
/* 800E2378 000DF2B8  7F E3 FB 78 */ mr r3, r31
/* 800E237C 000DF2BC  38 80 01 7A */ li r4, 0x17a
/* 800E2380 000DF2C0  4B FC AC 01 */ bl daAlink_c_NS_setSingleAnimeBase
/* 800E2384 000DF2C4  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800E2388 000DF2C8  D0 1F 33 98 */ stfs f0, 0x3398(r31)
/* 800E238C 000DF2CC  38 60 00 01 */ li r3, 1
lbl_800E2390:
/* 800E2390 000DF2D0  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800E2394 000DF2D4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800E2398 000DF2D8  7C 08 03 A6 */ mtlr r0
/* 800E239C 000DF2DC  38 21 00 10 */ addi r1, r1, 0x10
/* 800E23A0 000DF2E0  4E 80 00 20 */ blr