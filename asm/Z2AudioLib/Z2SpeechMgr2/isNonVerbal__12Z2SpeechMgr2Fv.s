lbl_802CC2FC:
/* 802CC2FC  A8 03 03 FA */	lha r0, 0x3fa(r3)
/* 802CC300  54 00 08 3C */	slwi r0, r0, 1
/* 802CC304  7C 83 02 14 */	add r4, r3, r0
/* 802CC308  A0 A4 00 10 */	lhz r5, 0x10(r4)
/* 802CC30C  3C 80 00 01 */	lis r4, 0x0001 /* 0x00008162@ha */
/* 802CC310  38 04 81 62 */	addi r0, r4, 0x8162 /* 0x00008162@l */
/* 802CC314  7C 05 00 00 */	cmpw r5, r0
/* 802CC318  41 82 01 68 */	beq lbl_802CC480
/* 802CC31C  40 80 00 9C */	bge lbl_802CC3B8
/* 802CC320  2C 05 00 5B */	cmpwi r5, 0x5b
/* 802CC324  40 80 00 4C */	bge lbl_802CC370
/* 802CC328  2C 05 00 3A */	cmpwi r5, 0x3a
/* 802CC32C  40 80 00 24 */	bge lbl_802CC350
/* 802CC330  2C 05 00 20 */	cmpwi r5, 0x20
/* 802CC334  40 80 00 10 */	bge lbl_802CC344
/* 802CC338  2C 05 00 00 */	cmpwi r5, 0
/* 802CC33C  41 82 01 44 */	beq lbl_802CC480
/* 802CC340  48 00 01 48 */	b lbl_802CC488
lbl_802CC344:
/* 802CC344  2C 05 00 30 */	cmpwi r5, 0x30
/* 802CC348  40 80 01 40 */	bge lbl_802CC488
/* 802CC34C  48 00 01 34 */	b lbl_802CC480
lbl_802CC350:
/* 802CC350  2C 05 00 4B */	cmpwi r5, 0x4b
/* 802CC354  40 80 00 10 */	bge lbl_802CC364
/* 802CC358  2C 05 00 40 */	cmpwi r5, 0x40
/* 802CC35C  40 80 01 2C */	bge lbl_802CC488
/* 802CC360  48 00 01 20 */	b lbl_802CC480
lbl_802CC364:
/* 802CC364  2C 05 00 50 */	cmpwi r5, 0x50
/* 802CC368  40 80 01 20 */	bge lbl_802CC488
/* 802CC36C  48 00 01 14 */	b lbl_802CC480
lbl_802CC370:
/* 802CC370  38 04 81 51 */	addi r0, r4, -32431
/* 802CC374  7C 05 00 00 */	cmpw r5, r0
/* 802CC378  41 82 01 08 */	beq lbl_802CC480
/* 802CC37C  40 80 00 2C */	bge lbl_802CC3A8
/* 802CC380  38 04 81 3F */	addi r0, r4, -32449
/* 802CC384  7C 05 00 00 */	cmpw r5, r0
/* 802CC388  40 80 00 10 */	bge lbl_802CC398
/* 802CC38C  2C 05 00 60 */	cmpwi r5, 0x60
/* 802CC390  40 80 00 F8 */	bge lbl_802CC488
/* 802CC394  48 00 00 EC */	b lbl_802CC480
lbl_802CC398:
/* 802CC398  38 04 81 4C */	addi r0, r4, -32436
/* 802CC39C  7C 05 00 00 */	cmpw r5, r0
/* 802CC3A0  40 80 00 E8 */	bge lbl_802CC488
/* 802CC3A4  48 00 00 DC */	b lbl_802CC480
lbl_802CC3A8:
/* 802CC3A8  38 04 81 5E */	addi r0, r4, -32418
/* 802CC3AC  7C 05 00 00 */	cmpw r5, r0
/* 802CC3B0  41 82 00 D0 */	beq lbl_802CC480
/* 802CC3B4  48 00 00 D4 */	b lbl_802CC488
lbl_802CC3B8:
/* 802CC3B8  38 04 81 7B */	addi r0, r4, -32389
/* 802CC3BC  7C 05 00 00 */	cmpw r5, r0
/* 802CC3C0  40 80 00 6C */	bge lbl_802CC42C
/* 802CC3C4  38 04 81 6D */	addi r0, r4, -32403
/* 802CC3C8  7C 05 00 00 */	cmpw r5, r0
/* 802CC3CC  40 80 00 34 */	bge lbl_802CC400
/* 802CC3D0  38 04 81 67 */	addi r0, r4, -32409
/* 802CC3D4  7C 05 00 00 */	cmpw r5, r0
/* 802CC3D8  41 82 00 B0 */	beq lbl_802CC488
/* 802CC3DC  40 80 00 14 */	bge lbl_802CC3F0
/* 802CC3E0  38 04 81 66 */	addi r0, r4, -32410
/* 802CC3E4  7C 05 00 00 */	cmpw r5, r0
/* 802CC3E8  40 80 00 98 */	bge lbl_802CC480
/* 802CC3EC  48 00 00 9C */	b lbl_802CC488
lbl_802CC3F0:
/* 802CC3F0  38 04 81 6B */	addi r0, r4, -32405
/* 802CC3F4  7C 05 00 00 */	cmpw r5, r0
/* 802CC3F8  40 80 00 90 */	bge lbl_802CC488
/* 802CC3FC  48 00 00 84 */	b lbl_802CC480
lbl_802CC400:
/* 802CC400  38 04 81 75 */	addi r0, r4, -32395
/* 802CC404  7C 05 00 00 */	cmpw r5, r0
/* 802CC408  40 80 00 14 */	bge lbl_802CC41C
/* 802CC40C  38 04 81 73 */	addi r0, r4, -32397
/* 802CC410  7C 05 00 00 */	cmpw r5, r0
/* 802CC414  40 80 00 74 */	bge lbl_802CC488
/* 802CC418  48 00 00 68 */	b lbl_802CC480
lbl_802CC41C:
/* 802CC41C  38 04 81 77 */	addi r0, r4, -32393
/* 802CC420  7C 05 00 00 */	cmpw r5, r0
/* 802CC424  40 80 00 64 */	bge lbl_802CC488
/* 802CC428  48 00 00 58 */	b lbl_802CC480
lbl_802CC42C:
/* 802CC42C  38 04 81 8F */	addi r0, r4, -32369
/* 802CC430  7C 05 00 00 */	cmpw r5, r0
/* 802CC434  40 80 00 24 */	bge lbl_802CC458
/* 802CC438  38 04 81 81 */	addi r0, r4, -32383
/* 802CC43C  7C 05 00 00 */	cmpw r5, r0
/* 802CC440  41 82 00 40 */	beq lbl_802CC480
/* 802CC444  40 80 00 44 */	bge lbl_802CC488
/* 802CC448  38 04 81 7D */	addi r0, r4, -32387
/* 802CC44C  7C 05 00 00 */	cmpw r5, r0
/* 802CC450  40 80 00 38 */	bge lbl_802CC488
/* 802CC454  48 00 00 2C */	b lbl_802CC480
lbl_802CC458:
/* 802CC458  38 04 81 93 */	addi r0, r4, -32365
/* 802CC45C  7C 05 00 00 */	cmpw r5, r0
/* 802CC460  40 80 00 14 */	bge lbl_802CC474
/* 802CC464  38 04 81 91 */	addi r0, r4, -32367
/* 802CC468  7C 05 00 00 */	cmpw r5, r0
/* 802CC46C  40 80 00 1C */	bge lbl_802CC488
/* 802CC470  48 00 00 10 */	b lbl_802CC480
lbl_802CC474:
/* 802CC474  38 04 81 97 */	addi r0, r4, -32361
/* 802CC478  7C 05 00 00 */	cmpw r5, r0
/* 802CC47C  40 80 00 0C */	bge lbl_802CC488
lbl_802CC480:
/* 802CC480  38 60 00 01 */	li r3, 1
/* 802CC484  4E 80 00 20 */	blr 
lbl_802CC488:
/* 802CC488  28 05 00 0A */	cmplwi r5, 0xa
/* 802CC48C  40 82 00 2C */	bne lbl_802CC4B8
/* 802CC490  88 03 03 FE */	lbz r0, 0x3fe(r3)
/* 802CC494  2C 00 00 03 */	cmpwi r0, 3
/* 802CC498  40 80 00 18 */	bge lbl_802CC4B0
/* 802CC49C  2C 00 00 01 */	cmpwi r0, 1
/* 802CC4A0  40 80 00 08 */	bge lbl_802CC4A8
/* 802CC4A4  48 00 00 0C */	b lbl_802CC4B0
lbl_802CC4A8:
/* 802CC4A8  38 60 00 00 */	li r3, 0
/* 802CC4AC  4E 80 00 20 */	blr 
lbl_802CC4B0:
/* 802CC4B0  38 60 00 01 */	li r3, 1
/* 802CC4B4  4E 80 00 20 */	blr 
lbl_802CC4B8:
/* 802CC4B8  38 60 00 00 */	li r3, 0
/* 802CC4BC  4E 80 00 20 */	blr 