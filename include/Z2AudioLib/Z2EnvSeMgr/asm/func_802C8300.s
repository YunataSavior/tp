/* 802C8300 002C5240  94 21 FF 60 */ stwu r1, -0xa0(r1)
/* 802C8304 002C5244  7C 08 02 A6 */ mflr r0
/* 802C8308 002C5248  90 01 00 A4 */ stw r0, 0xa4(r1)
/* 802C830C 002C524C  DB E1 00 90 */ stfd f31, 0x90(r1)
/* 802C8310 002C5250  F3 E1 00 98 */ psq_st f31, 152(r1), 0, 0
/* 802C8314 002C5254  DB C1 00 80 */ stfd f30, 0x80(r1)
/* 802C8318 002C5258  F3 C1 00 88 */ psq_st f30, 136(r1), 0, 0
/* 802C831C 002C525C  DB A1 00 70 */ stfd f29, 0x70(r1)
/* 802C8320 002C5260  F3 A1 00 78 */ psq_st f29, 120(r1), 0, 0
/* 802C8324 002C5264  DB 81 00 60 */ stfd f28, 0x60(r1)
/* 802C8328 002C5268  F3 81 00 68 */ psq_st f28, 104(r1), 0, 0
/* 802C832C 002C526C  DB 61 00 50 */ stfd f27, 0x50(r1)
/* 802C8330 002C5270  F3 61 00 58 */ psq_st f27, 88(r1), 0, 0
/* 802C8334 002C5274  39 61 00 50 */ addi r11, r1, 0x50
/* 802C8338 002C5278  48 09 9E A5 */ bl _savegpr_29
/* 802C833C 002C527C  7C 7F 1B 78 */ mr r31, r3
/* 802C8340 002C5280  7C 9D 23 78 */ mr r29, r4
/* 802C8344 002C5284  80 AD 85 FC */ lwz r5, lbl_80450B7C-_SDA_BASE_(r13)
/* 802C8348 002C5288  80 05 00 10 */ lwz r0, 0x10(r5)
/* 802C834C 002C528C  28 00 00 06 */ cmplwi r0, 6
/* 802C8350 002C5290  40 82 00 5C */ bne lbl_802C83AC
/* 802C8354 002C5294  80 8D 86 00 */ lwz r4, lbl_80450B80-_SDA_BASE_(r13)
/* 802C8358 002C5298  80 64 00 04 */ lwz r3, 4(r4)
/* 802C835C 002C529C  38 03 FF FB */ addi r0, r3, -5
/* 802C8360 002C52A0  28 00 00 29 */ cmplwi r0, 0x29
/* 802C8364 002C52A4  41 81 00 3C */ bgt lbl_802C83A0
/* 802C8368 002C52A8  3C 60 80 3D */ lis r3, lbl_803CBA28@ha
/* 802C836C 002C52AC  38 63 BA 28 */ addi r3, r3, lbl_803CBA28@l
/* 802C8370 002C52B0  54 00 10 3A */ slwi r0, r0, 2
/* 802C8374 002C52B4  7C 03 00 2E */ lwzx r0, r3, r0
/* 802C8378 002C52B8  7C 09 03 A6 */ mtctr r0
/* 802C837C 002C52BC  4E 80 04 20 */ bctr
/* 802C8380 002C52C0  88 04 00 0C */ lbz r0, 0xc(r4)
/* 802C8384 002C52C4  2C 00 00 01 */ cmpwi r0, 1
/* 802C8388 002C52C8  40 82 00 24 */ bne lbl_802C83AC
/* 802C838C 002C52CC  C0 25 00 24 */ lfs f1, 0x24(r5)
/* 802C8390 002C52D0  C0 02 C4 38 */ lfs f0, lbl_80455E38-_SDA2_BASE_(r2)
/* 802C8394 002C52D4  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 802C8398 002C52D8  41 80 00 14 */ blt lbl_802C83AC
/* 802C839C 002C52DC  48 00 00 10 */ b lbl_802C83AC
lbl_802C83A0:
/* 802C83A0 002C52E0  7F E3 FB 78 */ mr r3, r31
/* 802C83A4 002C52E4  38 85 00 20 */ addi r4, r5, 0x20
/* 802C83A8 002C52E8  4B FF FE 8D */ bl Z2EnvSeMgr_NS_registRiverSePos
lbl_802C83AC:
/* 802C83AC 002C52EC  88 1F 01 7C */ lbz r0, 0x17c(r31)
/* 802C83B0 002C52F0  7C 00 07 75 */ extsb. r0, r0
/* 802C83B4 002C52F4  40 80 00 0C */ bge lbl_802C83C0
/* 802C83B8 002C52F8  38 60 00 00 */ li r3, 0
/* 802C83BC 002C52FC  48 00 03 34 */ b lbl_802C86F0
lbl_802C83C0:
/* 802C83C0 002C5300  3B C0 00 00 */ li r30, 0
/* 802C83C4 002C5304  7F A0 07 74 */ extsb r0, r29
/* 802C83C8 002C5308  C8 22 C4 20 */ lfd f1, lbl_80455E20-_SDA2_BASE_(r2)
/* 802C83CC 002C530C  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 802C83D0 002C5310  90 01 00 3C */ stw r0, 0x3c(r1)
/* 802C83D4 002C5314  3C 00 43 30 */ lis r0, 0x4330
/* 802C83D8 002C5318  90 01 00 38 */ stw r0, 0x38(r1)
/* 802C83DC 002C531C  C8 01 00 38 */ lfd f0, 0x38(r1)
/* 802C83E0 002C5320  EC 20 08 28 */ fsubs f1, f0, f1
/* 802C83E4 002C5324  C0 02 C3 F4 */ lfs f0, lbl_80455DF4-_SDA2_BASE_(r2)
/* 802C83E8 002C5328  EF E1 00 24 */ fdivs f31, f1, f0
/* 802C83EC 002C532C  C0 1F 01 68 */ lfs f0, 0x168(r31)
/* 802C83F0 002C5330  C0 22 C3 44 */ lfs f1, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C83F4 002C5334  FC 00 08 40 */ fcmpo cr0, f0, f1
/* 802C83F8 002C5338  40 81 00 08 */ ble lbl_802C8400
/* 802C83FC 002C533C  48 00 00 18 */ b lbl_802C8414
lbl_802C8400:
/* 802C8400 002C5340  C0 22 C3 48 */ lfs f1, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C8404 002C5344  FC 00 08 40 */ fcmpo cr0, f0, f1
/* 802C8408 002C5348  40 80 00 08 */ bge lbl_802C8410
/* 802C840C 002C534C  48 00 00 08 */ b lbl_802C8414
lbl_802C8410:
/* 802C8410 002C5350  FC 20 00 90 */ fmr f1, f0
lbl_802C8414:
/* 802C8414 002C5354  C0 1F 01 AC */ lfs f0, 0x1ac(r31)
/* 802C8418 002C5358  EF C0 00 72 */ fmuls f30, f0, f1
/* 802C841C 002C535C  38 7F 01 64 */ addi r3, r31, 0x164
/* 802C8420 002C5360  4B FE 68 C1 */ bl getPanPower__12Z2MultiSeMgrFv
/* 802C8424 002C5364  FF A0 08 90 */ fmr f29, f1
/* 802C8428 002C5368  38 7F 01 64 */ addi r3, r31, 0x164
/* 802C842C 002C536C  4B FE 69 95 */ bl getDolbyPower__12Z2MultiSeMgrFv
/* 802C8430 002C5370  FF 80 08 90 */ fmr f28, f1
/* 802C8434 002C5374  C3 7F 01 B0 */ lfs f27, 0x1b0(r31)
/* 802C8438 002C5378  88 1F 01 88 */ lbz r0, 0x188(r31)
/* 802C843C 002C537C  2C 00 00 03 */ cmpwi r0, 3
/* 802C8440 002C5380  41 82 01 0C */ beq lbl_802C854C
/* 802C8444 002C5384  40 80 00 1C */ bge lbl_802C8460
/* 802C8448 002C5388  2C 00 00 01 */ cmpwi r0, 1
/* 802C844C 002C538C  41 82 00 28 */ beq lbl_802C8474
/* 802C8450 002C5390  40 80 00 B0 */ bge lbl_802C8500
/* 802C8454 002C5394  2C 00 00 00 */ cmpwi r0, 0
/* 802C8458 002C5398  40 80 00 14 */ bge lbl_802C846C
/* 802C845C 002C539C  48 00 02 88 */ b lbl_802C86E4
lbl_802C8460:
/* 802C8460 002C53A0  2C 00 00 05 */ cmpwi r0, 5
/* 802C8464 002C53A4  41 82 01 F8 */ beq lbl_802C865C
/* 802C8468 002C53A8  48 00 02 7C */ b lbl_802C86E4
lbl_802C846C:
/* 802C846C 002C53AC  38 60 00 00 */ li r3, 0
/* 802C8470 002C53B0  48 00 02 80 */ b lbl_802C86F0
lbl_802C8474:
/* 802C8474 002C53B4  3C 60 00 09 */ lis r3, 0x00090019@ha
/* 802C8478 002C53B8  38 03 00 19 */ addi r0, r3, 0x00090019@l
/* 802C847C 002C53BC  90 01 00 30 */ stw r0, 0x30(r1)
/* 802C8480 002C53C0  90 01 00 34 */ stw r0, 0x34(r1)
/* 802C8484 002C53C4  38 7F 01 8C */ addi r3, r31, 0x18c
/* 802C8488 002C53C8  4B FE 15 19 */ bl calcNoise1f__Q26Z2Calc8FNoise1fFv
/* 802C848C 002C53CC  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C8490 002C53D0  C0 62 C3 44 */ lfs f3, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C8494 002C53D4  C0 82 C3 BC */ lfs f4, lbl_80455DBC-_SDA2_BASE_(r2)
/* 802C8498 002C53D8  FC A0 18 90 */ fmr f5, f3
/* 802C849C 002C53DC  38 60 00 01 */ li r3, 1
/* 802C84A0 002C53E0  4B FE 11 ED */ bl linearTransform__6Z2CalcFfffffb
/* 802C84A4 002C53E4  EF DE 00 72 */ fmuls f30, f30, f1
/* 802C84A8 002C53E8  38 7F 01 9C */ addi r3, r31, 0x19c
/* 802C84AC 002C53EC  4B FE 14 F5 */ bl calcNoise1f__Q26Z2Calc8FNoise1fFv
/* 802C84B0 002C53F0  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C84B4 002C53F4  C0 62 C3 44 */ lfs f3, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C84B8 002C53F8  C0 82 C3 A4 */ lfs f4, lbl_80455DA4-_SDA2_BASE_(r2)
/* 802C84BC 002C53FC  C0 A2 C4 28 */ lfs f5, lbl_80455E28-_SDA2_BASE_(r2)
/* 802C84C0 002C5400  38 60 00 01 */ li r3, 1
/* 802C84C4 002C5404  4B FE 11 C9 */ bl linearTransform__6Z2CalcFfffffb
/* 802C84C8 002C5408  EF 7B 00 72 */ fmuls f27, f27, f1
/* 802C84CC 002C540C  80 01 00 34 */ lwz r0, 0x34(r1)
/* 802C84D0 002C5410  90 01 00 2C */ stw r0, 0x2c(r1)
/* 802C84D4 002C5414  38 7F 01 80 */ addi r3, r31, 0x180
/* 802C84D8 002C5418  38 81 00 2C */ addi r4, r1, 0x2c
/* 802C84DC 002C541C  FC 20 F8 90 */ fmr f1, f31
/* 802C84E0 002C5420  FC 40 F0 90 */ fmr f2, f30
/* 802C84E4 002C5424  FC 60 E8 90 */ fmr f3, f29
/* 802C84E8 002C5428  FC 80 E0 90 */ fmr f4, f28
/* 802C84EC 002C542C  FC A0 D8 90 */ fmr f5, f27
/* 802C84F0 002C5430  38 A0 00 00 */ li r5, 0
/* 802C84F4 002C5434  4B FF D5 C1 */ bl Z2EnvSeBase_NS_startEnvSeLevel
/* 802C84F8 002C5438  7C 7E 1B 78 */ mr r30, r3
/* 802C84FC 002C543C  48 00 01 E8 */ b lbl_802C86E4
lbl_802C8500:
/* 802C8500 002C5440  3C 60 00 09 */ lis r3, 0x00090018@ha
/* 802C8504 002C5444  38 03 00 18 */ addi r0, r3, 0x00090018@l
/* 802C8508 002C5448  90 01 00 28 */ stw r0, 0x28(r1)
/* 802C850C 002C544C  90 01 00 08 */ stw r0, 8(r1)
/* 802C8510 002C5450  38 7F 01 64 */ addi r3, r31, 0x164
/* 802C8514 002C5454  4B FE 68 AD */ bl getDolbyPower__12Z2MultiSeMgrFv
/* 802C8518 002C5458  80 01 00 08 */ lwz r0, 8(r1)
/* 802C851C 002C545C  90 01 00 24 */ stw r0, 0x24(r1)
/* 802C8520 002C5460  38 7F 01 80 */ addi r3, r31, 0x180
/* 802C8524 002C5464  38 81 00 24 */ addi r4, r1, 0x24
/* 802C8528 002C5468  FC 20 F8 90 */ fmr f1, f31
/* 802C852C 002C546C  FC 40 F0 90 */ fmr f2, f30
/* 802C8530 002C5470  FC 60 E8 90 */ fmr f3, f29
/* 802C8534 002C5474  FC 80 E0 90 */ fmr f4, f28
/* 802C8538 002C5478  FC A0 D8 90 */ fmr f5, f27
/* 802C853C 002C547C  38 A0 00 00 */ li r5, 0
/* 802C8540 002C5480  4B FF D5 75 */ bl Z2EnvSeBase_NS_startEnvSeLevel
/* 802C8544 002C5484  7C 7E 1B 78 */ mr r30, r3
/* 802C8548 002C5488  48 00 01 9C */ b lbl_802C86E4
lbl_802C854C:
/* 802C854C 002C548C  88 7F 01 B8 */ lbz r3, 0x1b8(r31)
/* 802C8550 002C5490  7C 60 07 75 */ extsb. r0, r3
/* 802C8554 002C5494  40 81 00 38 */ ble lbl_802C858C
/* 802C8558 002C5498  7C 63 07 74 */ extsb r3, r3
/* 802C855C 002C549C  38 03 00 32 */ addi r0, r3, 0x32
/* 802C8560 002C54A0  C8 22 C4 20 */ lfd f1, lbl_80455E20-_SDA2_BASE_(r2)
/* 802C8564 002C54A4  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 802C8568 002C54A8  90 01 00 3C */ stw r0, 0x3c(r1)
/* 802C856C 002C54AC  3C 00 43 30 */ lis r0, 0x4330
/* 802C8570 002C54B0  90 01 00 38 */ stw r0, 0x38(r1)
/* 802C8574 002C54B4  C8 01 00 38 */ lfd f0, 0x38(r1)
/* 802C8578 002C54B8  EC 20 08 28 */ fsubs f1, f0, f1
/* 802C857C 002C54BC  C0 02 C4 3C */ lfs f0, lbl_80455E3C-_SDA2_BASE_(r2)
/* 802C8580 002C54C0  EC 01 00 24 */ fdivs f0, f1, f0
/* 802C8584 002C54C4  EF DE 00 32 */ fmuls f30, f30, f0
/* 802C8588 002C54C8  48 00 00 48 */ b lbl_802C85D0
lbl_802C858C:
/* 802C858C 002C54CC  7C 60 07 75 */ extsb. r0, r3
/* 802C8590 002C54D0  40 80 00 38 */ bge lbl_802C85C8
/* 802C8594 002C54D4  7C 63 07 74 */ extsb r3, r3
/* 802C8598 002C54D8  38 03 00 96 */ addi r0, r3, 0x96
/* 802C859C 002C54DC  C8 22 C4 20 */ lfd f1, lbl_80455E20-_SDA2_BASE_(r2)
/* 802C85A0 002C54E0  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 802C85A4 002C54E4  90 01 00 3C */ stw r0, 0x3c(r1)
/* 802C85A8 002C54E8  3C 00 43 30 */ lis r0, 0x4330
/* 802C85AC 002C54EC  90 01 00 38 */ stw r0, 0x38(r1)
/* 802C85B0 002C54F0  C8 01 00 38 */ lfd f0, 0x38(r1)
/* 802C85B4 002C54F4  EC 20 08 28 */ fsubs f1, f0, f1
/* 802C85B8 002C54F8  C0 02 C4 3C */ lfs f0, lbl_80455E3C-_SDA2_BASE_(r2)
/* 802C85BC 002C54FC  EC 01 00 24 */ fdivs f0, f1, f0
/* 802C85C0 002C5500  EF DE 00 32 */ fmuls f30, f30, f0
/* 802C85C4 002C5504  48 00 00 0C */ b lbl_802C85D0
lbl_802C85C8:
/* 802C85C8 002C5508  C0 02 C3 B0 */ lfs f0, lbl_80455DB0-_SDA2_BASE_(r2)
/* 802C85CC 002C550C  EF DE 00 32 */ fmuls f30, f30, f0
lbl_802C85D0:
/* 802C85D0 002C5510  3C 60 00 09 */ lis r3, 0x0009001D@ha
/* 802C85D4 002C5514  38 03 00 1D */ addi r0, r3, 0x0009001D@l
/* 802C85D8 002C5518  90 01 00 20 */ stw r0, 0x20(r1)
/* 802C85DC 002C551C  90 01 00 0C */ stw r0, 0xc(r1)
/* 802C85E0 002C5520  38 7F 01 8C */ addi r3, r31, 0x18c
/* 802C85E4 002C5524  4B FE 13 BD */ bl calcNoise1f__Q26Z2Calc8FNoise1fFv
/* 802C85E8 002C5528  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C85EC 002C552C  C0 62 C3 44 */ lfs f3, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C85F0 002C5530  C0 82 C3 D4 */ lfs f4, lbl_80455DD4-_SDA2_BASE_(r2)
/* 802C85F4 002C5534  FC A0 18 90 */ fmr f5, f3
/* 802C85F8 002C5538  38 60 00 01 */ li r3, 1
/* 802C85FC 002C553C  4B FE 10 91 */ bl linearTransform__6Z2CalcFfffffb
/* 802C8600 002C5540  EF DE 00 72 */ fmuls f30, f30, f1
/* 802C8604 002C5544  38 7F 01 9C */ addi r3, r31, 0x19c
/* 802C8608 002C5548  4B FE 13 99 */ bl calcNoise1f__Q26Z2Calc8FNoise1fFv
/* 802C860C 002C554C  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C8610 002C5550  C0 62 C3 44 */ lfs f3, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C8614 002C5554  C0 82 C3 A4 */ lfs f4, lbl_80455DA4-_SDA2_BASE_(r2)
/* 802C8618 002C5558  FC A0 18 90 */ fmr f5, f3
/* 802C861C 002C555C  38 60 00 01 */ li r3, 1
/* 802C8620 002C5560  4B FE 10 6D */ bl linearTransform__6Z2CalcFfffffb
/* 802C8624 002C5564  EF 7B 00 72 */ fmuls f27, f27, f1
/* 802C8628 002C5568  80 01 00 0C */ lwz r0, 0xc(r1)
/* 802C862C 002C556C  90 01 00 1C */ stw r0, 0x1c(r1)
/* 802C8630 002C5570  38 7F 01 80 */ addi r3, r31, 0x180
/* 802C8634 002C5574  38 81 00 1C */ addi r4, r1, 0x1c
/* 802C8638 002C5578  FC 20 F8 90 */ fmr f1, f31
/* 802C863C 002C557C  FC 40 F0 90 */ fmr f2, f30
/* 802C8640 002C5580  FC 60 E8 90 */ fmr f3, f29
/* 802C8644 002C5584  FC 80 E0 90 */ fmr f4, f28
/* 802C8648 002C5588  FC A0 D8 90 */ fmr f5, f27
/* 802C864C 002C558C  38 A0 00 00 */ li r5, 0
/* 802C8650 002C5590  4B FF D4 65 */ bl Z2EnvSeBase_NS_startEnvSeLevel
/* 802C8654 002C5594  7C 7E 1B 78 */ mr r30, r3
/* 802C8658 002C5598  48 00 00 8C */ b lbl_802C86E4
lbl_802C865C:
/* 802C865C 002C559C  3C 60 00 09 */ lis r3, 0x0009002E@ha
/* 802C8660 002C55A0  38 03 00 2E */ addi r0, r3, 0x0009002E@l
/* 802C8664 002C55A4  90 01 00 18 */ stw r0, 0x18(r1)
/* 802C8668 002C55A8  90 01 00 10 */ stw r0, 0x10(r1)
/* 802C866C 002C55AC  38 7F 01 8C */ addi r3, r31, 0x18c
/* 802C8670 002C55B0  4B FE 13 31 */ bl calcNoise1f__Q26Z2Calc8FNoise1fFv
/* 802C8674 002C55B4  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C8678 002C55B8  C0 62 C3 44 */ lfs f3, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C867C 002C55BC  C0 82 C3 D4 */ lfs f4, lbl_80455DD4-_SDA2_BASE_(r2)
/* 802C8680 002C55C0  FC A0 18 90 */ fmr f5, f3
/* 802C8684 002C55C4  38 60 00 01 */ li r3, 1
/* 802C8688 002C55C8  4B FE 10 05 */ bl linearTransform__6Z2CalcFfffffb
/* 802C868C 002C55CC  EF DE 00 72 */ fmuls f30, f30, f1
/* 802C8690 002C55D0  38 7F 01 9C */ addi r3, r31, 0x19c
/* 802C8694 002C55D4  4B FE 13 0D */ bl calcNoise1f__Q26Z2Calc8FNoise1fFv
/* 802C8698 002C55D8  C0 42 C3 48 */ lfs f2, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C869C 002C55DC  C0 62 C3 44 */ lfs f3, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C86A0 002C55E0  C0 82 C3 A4 */ lfs f4, lbl_80455DA4-_SDA2_BASE_(r2)
/* 802C86A4 002C55E4  FC A0 18 90 */ fmr f5, f3
/* 802C86A8 002C55E8  38 60 00 01 */ li r3, 1
/* 802C86AC 002C55EC  4B FE 0F E1 */ bl linearTransform__6Z2CalcFfffffb
/* 802C86B0 002C55F0  EF 7B 00 72 */ fmuls f27, f27, f1
/* 802C86B4 002C55F4  80 01 00 10 */ lwz r0, 0x10(r1)
/* 802C86B8 002C55F8  90 01 00 14 */ stw r0, 0x14(r1)
/* 802C86BC 002C55FC  38 7F 01 80 */ addi r3, r31, 0x180
/* 802C86C0 002C5600  38 81 00 14 */ addi r4, r1, 0x14
/* 802C86C4 002C5604  FC 20 F8 90 */ fmr f1, f31
/* 802C86C8 002C5608  FC 40 F0 90 */ fmr f2, f30
/* 802C86CC 002C560C  FC 60 E8 90 */ fmr f3, f29
/* 802C86D0 002C5610  FC 80 E0 90 */ fmr f4, f28
/* 802C86D4 002C5614  FC A0 D8 90 */ fmr f5, f27
/* 802C86D8 002C5618  38 A0 00 00 */ li r5, 0
/* 802C86DC 002C561C  4B FF D3 D9 */ bl Z2EnvSeBase_NS_startEnvSeLevel
/* 802C86E0 002C5620  7C 7E 1B 78 */ mr r30, r3
lbl_802C86E4:
/* 802C86E4 002C5624  38 7F 01 64 */ addi r3, r31, 0x164
/* 802C86E8 002C5628  4B FE 65 D5 */ bl resetMultiSePos__12Z2MultiSeMgrFv
/* 802C86EC 002C562C  7F C3 F3 78 */ mr r3, r30
lbl_802C86F0:
/* 802C86F0 002C5630  E3 E1 00 98 */ psq_l f31, 152(r1), 0, 0
/* 802C86F4 002C5634  CB E1 00 90 */ lfd f31, 0x90(r1)
/* 802C86F8 002C5638  E3 C1 00 88 */ psq_l f30, 136(r1), 0, 0
/* 802C86FC 002C563C  CB C1 00 80 */ lfd f30, 0x80(r1)
/* 802C8700 002C5640  E3 A1 00 78 */ psq_l f29, 120(r1), 0, 0
/* 802C8704 002C5644  CB A1 00 70 */ lfd f29, 0x70(r1)
/* 802C8708 002C5648  E3 81 00 68 */ psq_l f28, 104(r1), 0, 0
/* 802C870C 002C564C  CB 81 00 60 */ lfd f28, 0x60(r1)
/* 802C8710 002C5650  E3 61 00 58 */ psq_l f27, 88(r1), 0, 0
/* 802C8714 002C5654  CB 61 00 50 */ lfd f27, 0x50(r1)
/* 802C8718 002C5658  39 61 00 50 */ addi r11, r1, 0x50
/* 802C871C 002C565C  48 09 9B 0D */ bl _restgpr_29
/* 802C8720 002C5660  80 01 00 A4 */ lwz r0, 0xa4(r1)
/* 802C8724 002C5664  7C 08 03 A6 */ mtlr r0
/* 802C8728 002C5668  38 21 00 A0 */ addi r1, r1, 0xa0
/* 802C872C 002C566C  4E 80 00 20 */ blr