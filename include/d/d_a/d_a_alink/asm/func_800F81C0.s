/* 800F81C0 000F5100  94 21 FF 70 */ stwu r1, -0x90(r1)
/* 800F81C4 000F5104  7C 08 02 A6 */ mflr r0
/* 800F81C8 000F5108  90 01 00 94 */ stw r0, 0x94(r1)
/* 800F81CC 000F510C  39 61 00 90 */ addi r11, r1, 0x90
/* 800F81D0 000F5110  48 26 9F FD */ bl _savegpr_25
/* 800F81D4 000F5114  7C 79 1B 78 */ mr r25, r3
/* 800F81D8 000F5118  7C BD 2B 78 */ mr r29, r5
/* 800F81DC 000F511C  7C DA 33 78 */ mr r26, r6
/* 800F81E0 000F5120  7C FB 3B 78 */ mr r27, r7
/* 800F81E4 000F5124  7D 1E 43 78 */ mr r30, r8
/* 800F81E8 000F5128  7D 3C 4B 78 */ mr r28, r9
/* 800F81EC 000F512C  4B FA 9F AD */ bl daAlink_c_NS_commonLineCheck
/* 800F81F0 000F5130  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800F81F4 000F5134  41 82 03 B0 */ beq lbl_800F85A4
/* 800F81F8 000F5138  2C 1E 00 00 */ cmpwi r30, 0
/* 800F81FC 000F513C  40 82 00 24 */ bne lbl_800F8220
/* 800F8200 000F5140  80 19 05 74 */ lwz r0, 0x574(r25)
/* 800F8204 000F5144  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 800F8208 000F5148  41 82 00 34 */ beq lbl_800F823C
/* 800F820C 000F514C  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800F8210 000F5150  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800F8214 000F5154  80 03 5F 18 */ lwz r0, 0x5f18(r3)
/* 800F8218 000F5158  54 00 01 09 */ rlwinm. r0, r0, 0, 4, 4
/* 800F821C 000F515C  41 82 00 20 */ beq lbl_800F823C
lbl_800F8220:
/* 800F8220 000F5160  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800F8224 000F5164  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800F8228 000F5168  38 63 0F 38 */ addi r3, r3, 0xf38
/* 800F822C 000F516C  38 99 1B 5C */ addi r4, r25, 0x1b5c
/* 800F8230 000F5170  4B F7 CB D1 */ bl dBgS_NS_GetWallCode
/* 800F8234 000F5174  2C 03 00 06 */ cmpwi r3, 6
/* 800F8238 000F5178  41 82 03 6C */ beq lbl_800F85A4
lbl_800F823C:
/* 800F823C 000F517C  80 19 05 74 */ lwz r0, 0x574(r25)
/* 800F8240 000F5180  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 800F8244 000F5184  41 82 00 20 */ beq lbl_800F8264
/* 800F8248 000F5188  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800F824C 000F518C  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800F8250 000F5190  38 63 0F 38 */ addi r3, r3, 0xf38
/* 800F8254 000F5194  38 99 1B 5C */ addi r4, r25, 0x1b5c
/* 800F8258 000F5198  4B F7 CB A9 */ bl dBgS_NS_GetWallCode
/* 800F825C 000F519C  2C 03 00 07 */ cmpwi r3, 7
/* 800F8260 000F51A0  41 82 03 44 */ beq lbl_800F85A4
lbl_800F8264:
/* 800F8264 000F51A4  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800F8268 000F51A8  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800F826C 000F51AC  90 01 00 60 */ stw r0, 0x60(r1)
/* 800F8270 000F51B0  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800F8274 000F51B4  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800F8278 000F51B8  3B E3 0F 38 */ addi r31, r3, 0xf38
/* 800F827C 000F51BC  7F E3 FB 78 */ mr r3, r31
/* 800F8280 000F51C0  38 99 1B 5C */ addi r4, r25, 0x1b5c
/* 800F8284 000F51C4  38 A1 00 50 */ addi r5, r1, 0x50
/* 800F8288 000F51C8  4B F7 C4 BD */ bl cBgS_NS_GetTriPla
/* 800F828C 000F51CC  7F E3 FB 78 */ mr r3, r31
/* 800F8290 000F51D0  38 99 1B 5C */ addi r4, r25, 0x1b5c
/* 800F8294 000F51D4  4B F7 CA 29 */ bl dBgS_NS_GetSpecialCode
/* 800F8298 000F51D8  7C 7E 1B 78 */ mr r30, r3
/* 800F829C 000F51DC  C0 21 00 54 */ lfs f1, 0x54(r1)
/* 800F82A0 000F51E0  48 16 FF 71 */ bl cBgW_CheckBWall
/* 800F82A4 000F51E4  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800F82A8 000F51E8  40 82 00 1C */ bne lbl_800F82C4
/* 800F82AC 000F51EC  2C 1B 00 02 */ cmpwi r27, 2
/* 800F82B0 000F51F0  40 82 02 84 */ bne lbl_800F8534
/* 800F82B4 000F51F4  C0 21 00 54 */ lfs f1, 0x54(r1)
/* 800F82B8 000F51F8  48 16 FF 2D */ bl cBgW_CheckBGround
/* 800F82BC 000F51FC  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800F82C0 000F5200  41 82 02 74 */ beq lbl_800F8534
lbl_800F82C4:
/* 800F82C4 000F5204  38 61 00 24 */ addi r3, r1, 0x24
/* 800F82C8 000F5208  7F A4 EB 78 */ mr r4, r29
/* 800F82CC 000F520C  38 B9 1B 78 */ addi r5, r25, 0x1b78
/* 800F82D0 000F5210  48 16 E8 65 */ bl cXyz_NS___mi
/* 800F82D4 000F5214  C0 01 00 24 */ lfs f0, 0x24(r1)
/* 800F82D8 000F5218  D0 01 00 30 */ stfs f0, 0x30(r1)
/* 800F82DC 000F521C  C0 01 00 28 */ lfs f0, 0x28(r1)
/* 800F82E0 000F5220  D0 01 00 34 */ stfs f0, 0x34(r1)
/* 800F82E4 000F5224  C0 01 00 2C */ lfs f0, 0x2c(r1)
/* 800F82E8 000F5228  D0 01 00 38 */ stfs f0, 0x38(r1)
/* 800F82EC 000F522C  38 61 00 50 */ addi r3, r1, 0x50
/* 800F82F0 000F5230  48 16 EE 39 */ bl cXyz_NS_atan2sX_Z
/* 800F82F4 000F5234  7C 7D 1B 78 */ mr r29, r3
/* 800F82F8 000F5238  38 61 00 30 */ addi r3, r1, 0x30
/* 800F82FC 000F523C  48 16 EE 2D */ bl cXyz_NS_atan2sX_Z
/* 800F8300 000F5240  7F BE 07 34 */ extsh r30, r29
/* 800F8304 000F5244  7C 7D 07 34 */ extsh r29, r3
/* 800F8308 000F5248  3C 7D 00 01 */ addis r3, r29, 1
/* 800F830C 000F524C  38 03 80 00 */ addi r0, r3, -32768
/* 800F8310 000F5250  7C 1E 00 50 */ subf r0, r30, r0
/* 800F8314 000F5254  7C 03 07 34 */ extsh r3, r0
/* 800F8318 000F5258  48 26 CD B9 */ bl func_803650D0
/* 800F831C 000F525C  2C 03 30 00 */ cmpwi r3, 0x3000
/* 800F8320 000F5260  40 81 00 18 */ ble lbl_800F8338
/* 800F8324 000F5264  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800F8328 000F5268  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800F832C 000F526C  90 01 00 60 */ stw r0, 0x60(r1)
/* 800F8330 000F5270  38 60 00 00 */ li r3, 0
/* 800F8334 000F5274  48 00 02 74 */ b lbl_800F85A8
lbl_800F8338:
/* 800F8338 000F5278  C0 01 00 30 */ lfs f0, 0x30(r1)
/* 800F833C 000F527C  D0 01 00 0C */ stfs f0, 0xc(r1)
/* 800F8340 000F5280  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800F8344 000F5284  D0 01 00 10 */ stfs f0, 0x10(r1)
/* 800F8348 000F5288  C0 01 00 38 */ lfs f0, 0x38(r1)
/* 800F834C 000F528C  D0 01 00 14 */ stfs f0, 0x14(r1)
/* 800F8350 000F5290  38 61 00 0C */ addi r3, r1, 0xc
/* 800F8354 000F5294  48 24 ED E5 */ bl PSVECSquareMag
/* 800F8358 000F5298  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800F835C 000F529C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800F8360 000F52A0  40 81 00 58 */ ble lbl_800F83B8
/* 800F8364 000F52A4  FC 00 08 34 */ frsqrte f0, f1
/* 800F8368 000F52A8  C8 82 92 E8 */ lfd f4, lbl_80452CE8-_SDA2_BASE_(r2)
/* 800F836C 000F52AC  FC 44 00 32 */ fmul f2, f4, f0
/* 800F8370 000F52B0  C8 62 92 F0 */ lfd f3, lbl_80452CF0-_SDA2_BASE_(r2)
/* 800F8374 000F52B4  FC 00 00 32 */ fmul f0, f0, f0
/* 800F8378 000F52B8  FC 01 00 32 */ fmul f0, f1, f0
/* 800F837C 000F52BC  FC 03 00 28 */ fsub f0, f3, f0
/* 800F8380 000F52C0  FC 02 00 32 */ fmul f0, f2, f0
/* 800F8384 000F52C4  FC 44 00 32 */ fmul f2, f4, f0
/* 800F8388 000F52C8  FC 00 00 32 */ fmul f0, f0, f0
/* 800F838C 000F52CC  FC 01 00 32 */ fmul f0, f1, f0
/* 800F8390 000F52D0  FC 03 00 28 */ fsub f0, f3, f0
/* 800F8394 000F52D4  FC 02 00 32 */ fmul f0, f2, f0
/* 800F8398 000F52D8  FC 44 00 32 */ fmul f2, f4, f0
/* 800F839C 000F52DC  FC 00 00 32 */ fmul f0, f0, f0
/* 800F83A0 000F52E0  FC 01 00 32 */ fmul f0, f1, f0
/* 800F83A4 000F52E4  FC 03 00 28 */ fsub f0, f3, f0
/* 800F83A8 000F52E8  FC 02 00 32 */ fmul f0, f2, f0
/* 800F83AC 000F52EC  FC 21 00 32 */ fmul f1, f1, f0
/* 800F83B0 000F52F0  FC 20 08 18 */ frsp f1, f1
/* 800F83B4 000F52F4  48 00 00 88 */ b lbl_800F843C
lbl_800F83B8:
/* 800F83B8 000F52F8  C8 02 92 F8 */ lfd f0, lbl_80452CF8-_SDA2_BASE_(r2)
/* 800F83BC 000F52FC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800F83C0 000F5300  40 80 00 10 */ bge lbl_800F83D0
/* 800F83C4 000F5304  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800F83C8 000F5308  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
/* 800F83CC 000F530C  48 00 00 70 */ b lbl_800F843C
lbl_800F83D0:
/* 800F83D0 000F5310  D0 21 00 08 */ stfs f1, 8(r1)
/* 800F83D4 000F5314  80 81 00 08 */ lwz r4, 8(r1)
/* 800F83D8 000F5318  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 800F83DC 000F531C  3C 00 7F 80 */ lis r0, 0x7f80
/* 800F83E0 000F5320  7C 03 00 00 */ cmpw r3, r0
/* 800F83E4 000F5324  41 82 00 14 */ beq lbl_800F83F8
/* 800F83E8 000F5328  40 80 00 40 */ bge lbl_800F8428
/* 800F83EC 000F532C  2C 03 00 00 */ cmpwi r3, 0
/* 800F83F0 000F5330  41 82 00 20 */ beq lbl_800F8410
/* 800F83F4 000F5334  48 00 00 34 */ b lbl_800F8428
lbl_800F83F8:
/* 800F83F8 000F5338  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800F83FC 000F533C  41 82 00 0C */ beq lbl_800F8408
/* 800F8400 000F5340  38 00 00 01 */ li r0, 1
/* 800F8404 000F5344  48 00 00 28 */ b lbl_800F842C
lbl_800F8408:
/* 800F8408 000F5348  38 00 00 02 */ li r0, 2
/* 800F840C 000F534C  48 00 00 20 */ b lbl_800F842C
lbl_800F8410:
/* 800F8410 000F5350  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800F8414 000F5354  41 82 00 0C */ beq lbl_800F8420
/* 800F8418 000F5358  38 00 00 05 */ li r0, 5
/* 800F841C 000F535C  48 00 00 10 */ b lbl_800F842C
lbl_800F8420:
/* 800F8420 000F5360  38 00 00 03 */ li r0, 3
/* 800F8424 000F5364  48 00 00 08 */ b lbl_800F842C
lbl_800F8428:
/* 800F8428 000F5368  38 00 00 04 */ li r0, 4
lbl_800F842C:
/* 800F842C 000F536C  2C 00 00 01 */ cmpwi r0, 1
/* 800F8430 000F5370  40 82 00 0C */ bne lbl_800F843C
/* 800F8434 000F5374  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800F8438 000F5378  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
lbl_800F843C:
/* 800F843C 000F537C  3C 60 80 44 */ lis r3, lbl_80439A20@ha
/* 800F8440 000F5380  38 83 9A 20 */ addi r4, r3, lbl_80439A20@l
/* 800F8444 000F5384  7C 7E E8 50 */ subf r3, r30, r29
/* 800F8448 000F5388  38 03 80 00 */ addi r0, r3, -32768
/* 800F844C 000F538C  54 00 04 38 */ rlwinm r0, r0, 0, 0x10, 0x1c
/* 800F8450 000F5390  7C 64 02 14 */ add r3, r4, r0
/* 800F8454 000F5394  C0 43 00 04 */ lfs f2, 4(r3)
/* 800F8458 000F5398  FC 00 08 50 */ fneg f0, f1
/* 800F845C 000F539C  EC 20 00 B2 */ fmuls f1, f0, f2
/* 800F8460 000F53A0  C0 01 00 50 */ lfs f0, 0x50(r1)
/* 800F8464 000F53A4  EC 01 00 32 */ fmuls f0, f1, f0
/* 800F8468 000F53A8  D0 1A 00 00 */ stfs f0, 0(r26)
/* 800F846C 000F53AC  2C 1B 00 01 */ cmpwi r27, 1
/* 800F8470 000F53B0  41 82 00 10 */ beq lbl_800F8480
/* 800F8474 000F53B4  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800F8478 000F53B8  D0 1A 00 04 */ stfs f0, 4(r26)
/* 800F847C 000F53BC  48 00 00 0C */ b lbl_800F8488
lbl_800F8480:
/* 800F8480 000F53C0  C0 01 00 34 */ lfs f0, 0x34(r1)
/* 800F8484 000F53C4  D0 1A 00 04 */ stfs f0, 4(r26)
lbl_800F8488:
/* 800F8488 000F53C8  C0 01 00 58 */ lfs f0, 0x58(r1)
/* 800F848C 000F53CC  EC 01 00 32 */ fmuls f0, f1, f0
/* 800F8490 000F53D0  D0 1A 00 08 */ stfs f0, 8(r26)
/* 800F8494 000F53D4  28 1C 00 00 */ cmplwi r28, 0
/* 800F8498 000F53D8  41 82 00 88 */ beq lbl_800F8520
/* 800F849C 000F53DC  38 79 1B 5C */ addi r3, r25, 0x1b5c
/* 800F84A0 000F53E0  48 0B 30 FD */ bl dKy_pol_argument_get
/* 800F84A4 000F53E4  54 60 06 75 */ rlwinm. r0, r3, 0, 0x19, 0x1a
/* 800F84A8 000F53E8  41 82 00 78 */ beq lbl_800F8520
/* 800F84AC 000F53EC  38 00 00 03 */ li r0, 3
/* 800F84B0 000F53F0  98 1C 00 00 */ stb r0, 0(r28)
/* 800F84B4 000F53F4  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800F84B8 000F53F8  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800F84BC 000F53FC  90 01 00 4C */ stw r0, 0x4c(r1)
/* 800F84C0 000F5400  7F E3 FB 78 */ mr r3, r31
/* 800F84C4 000F5404  38 99 1B 5C */ addi r4, r25, 0x1b5c
/* 800F84C8 000F5408  38 A1 00 3C */ addi r5, r1, 0x3c
/* 800F84CC 000F540C  4B F7 C2 79 */ bl cBgS_NS_GetTriPla
/* 800F84D0 000F5410  38 61 00 3C */ addi r3, r1, 0x3c
/* 800F84D4 000F5414  48 16 EC 55 */ bl cXyz_NS_atan2sX_Z
/* 800F84D8 000F5418  B0 79 31 1E */ sth r3, 0x311e(r25)
/* 800F84DC 000F541C  38 79 1B 5C */ addi r3, r25, 0x1b5c
/* 800F84E0 000F5420  4B FD F2 89 */ bl daAlink_c_NS_checkIcePolygonDamage
/* 800F84E4 000F5424  2C 03 00 00 */ cmpwi r3, 0
/* 800F84E8 000F5428  41 82 00 10 */ beq lbl_800F84F8
/* 800F84EC 000F542C  88 1C 00 00 */ lbz r0, 0(r28)
/* 800F84F0 000F5430  60 00 00 80 */ ori r0, r0, 0x80
/* 800F84F4 000F5434  98 1C 00 00 */ stb r0, 0(r28)
lbl_800F84F8:
/* 800F84F8 000F5438  38 79 1B 5C */ addi r3, r25, 0x1b5c
/* 800F84FC 000F543C  48 0B 30 A1 */ bl dKy_pol_argument_get
/* 800F8500 000F5440  54 60 06 B5 */ rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 800F8504 000F5444  41 82 00 10 */ beq lbl_800F8514
/* 800F8508 000F5448  88 1C 00 00 */ lbz r0, 0(r28)
/* 800F850C 000F544C  60 00 00 40 */ ori r0, r0, 0x40
/* 800F8510 000F5450  98 1C 00 00 */ stb r0, 0(r28)
lbl_800F8514:
/* 800F8514 000F5454  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800F8518 000F5458  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800F851C 000F545C  90 01 00 4C */ stw r0, 0x4c(r1)
lbl_800F8520:
/* 800F8520 000F5460  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800F8524 000F5464  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800F8528 000F5468  90 01 00 60 */ stw r0, 0x60(r1)
/* 800F852C 000F546C  38 60 00 01 */ li r3, 1
/* 800F8530 000F5470  48 00 00 78 */ b lbl_800F85A8
lbl_800F8534:
/* 800F8534 000F5474  2C 1B 00 01 */ cmpwi r27, 1
/* 800F8538 000F5478  40 82 00 60 */ bne lbl_800F8598
/* 800F853C 000F547C  2C 1E 00 01 */ cmpwi r30, 1
/* 800F8540 000F5480  41 82 00 1C */ beq lbl_800F855C
/* 800F8544 000F5484  C0 21 00 54 */ lfs f1, 0x54(r1)
/* 800F8548 000F5488  C0 19 34 70 */ lfs f0, 0x3470(r25)
/* 800F854C 000F548C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800F8550 000F5490  40 80 00 48 */ bge lbl_800F8598
/* 800F8554 000F5494  2C 1E 00 02 */ cmpwi r30, 2
/* 800F8558 000F5498  40 82 00 40 */ bne lbl_800F8598
lbl_800F855C:
/* 800F855C 000F549C  38 61 00 18 */ addi r3, r1, 0x18
/* 800F8560 000F54A0  7F A4 EB 78 */ mr r4, r29
/* 800F8564 000F54A4  38 B9 1B 78 */ addi r5, r25, 0x1b78
/* 800F8568 000F54A8  48 16 E5 CD */ bl cXyz_NS___mi
/* 800F856C 000F54AC  C0 01 00 18 */ lfs f0, 0x18(r1)
/* 800F8570 000F54B0  D0 1A 00 00 */ stfs f0, 0(r26)
/* 800F8574 000F54B4  C0 01 00 1C */ lfs f0, 0x1c(r1)
/* 800F8578 000F54B8  D0 1A 00 04 */ stfs f0, 4(r26)
/* 800F857C 000F54BC  C0 01 00 20 */ lfs f0, 0x20(r1)
/* 800F8580 000F54C0  D0 1A 00 08 */ stfs f0, 8(r26)
/* 800F8584 000F54C4  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800F8588 000F54C8  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800F858C 000F54CC  90 01 00 60 */ stw r0, 0x60(r1)
/* 800F8590 000F54D0  38 60 00 01 */ li r3, 1
/* 800F8594 000F54D4  48 00 00 14 */ b lbl_800F85A8
lbl_800F8598:
/* 800F8598 000F54D8  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800F859C 000F54DC  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800F85A0 000F54E0  90 01 00 60 */ stw r0, 0x60(r1)
lbl_800F85A4:
/* 800F85A4 000F54E4  38 60 00 00 */ li r3, 0
lbl_800F85A8:
/* 800F85A8 000F54E8  39 61 00 90 */ addi r11, r1, 0x90
/* 800F85AC 000F54EC  48 26 9C 6D */ bl func_80362218
/* 800F85B0 000F54F0  80 01 00 94 */ lwz r0, 0x94(r1)
/* 800F85B4 000F54F4  7C 08 03 A6 */ mtlr r0
/* 800F85B8 000F54F8  38 21 00 90 */ addi r1, r1, 0x90
/* 800F85BC 000F54FC  4E 80 00 20 */ blr