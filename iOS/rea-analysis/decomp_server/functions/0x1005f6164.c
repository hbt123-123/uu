// rea decompile_all
// name: FUN_1005f6164
// address: 0x1005f6164
// body: available
// range: 0x1005f6164-0x1005f6363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001005f6b30) */
/* WARNING: Removing unreachable block (ram,0x0001005f6b34) */
/* WARNING: Removing unreachable block (ram,0x0001005f68c4) */
/* WARNING: Removing unreachable block (ram,0x0001005f67bc) */
/* WARNING: Removing unreachable block (ram,0x0001005f6740) */
/* WARNING: Removing unreachable block (ram,0x0001005f681c) */
/* WARNING: Removing unreachable block (ram,0x0001005f691c) */
/* WARNING: Removing unreachable block (ram,0x0001005f67c0) */
/* WARNING: Removing unreachable block (ram,0x0001005f66c4) */
/* WARNING: Removing unreachable block (ram,0x0001005f66d8) */

undefined1  [16] FUN_1005f6164(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  char *pcVar11;
  long extraout_x8;
  code *pcVar12;
  byte *pbVar13;
  long in_x12;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x24;
  long lVar17;
  long unaff_x29;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  uVar10 = 0xe600000000000000;
  puVar5 = (undefined1 *)0x656372756f73;
  pcVar11 = (char *)(param_1 & 0xff);
  pbVar13 = &switchD_1005f6190::switchdataD_100844fd0;
  pbVar13 = pbVar13;
  switch(pcVar11) {
  default:
    uVar10 = 0xe800000000000000;
    puVar5 = (undefined1 *)0x6564;
  case (char *)0x28:
    auVar18._0_8_ = (ulong)puVar5 & 0xffff00000000ffff | 0x6449656369760000;
    auVar18._8_8_ = uVar10;
    return auVar18;
  case (char *)0x2:
  case (char *)0x68:
    auVar24._8_8_ = 0xe600000000000000;
    auVar24._0_8_ = 0x64496b736174;
    return auVar24;
  case (char *)0x3:
  case (char *)0x78:
    uVar10 = 0xec000000746e756f;
    puVar5 = (undefined1 *)0x6e656d676573;
  case (char *)0x80:
    auVar26._0_8_ = (ulong)puVar5 | 0x4374000000000000;
    auVar26._8_8_ = uVar10;
    return auVar26;
  case (char *)0x4:
    uVar10 = 0xe700000000000000;
    puVar5 = (undefined1 *)0x686374614d7369;
  case (char *)0x50:
    auVar22._8_8_ = uVar10;
    auVar22._0_8_ = puVar5;
    return auVar22;
  case (char *)0x5:
    uVar10 = 0x656d614e65;
  case (char *)0x90:
    auVar28._8_8_ = uVar10 & 0xffffffffffff | 0xed00000000000000;
    auVar28._0_8_ = 0x6c69467974706d65;
    return auVar28;
  case (char *)0x6:
    puVar5 = (undefined1 *)0x467974706d65;
  case (char *)0xa8:
    uVar10 = (ulong)puVar5 | 0x6c69000000000000;
    break;
  case (char *)0x7:
    puVar5 = &DAT_d000000000000010;
    pcVar11 = "receiveDataCount";
  case (char *)0x88:
    auVar27._8_8_ = (ulong)(pcVar11 + -0x20) | 0x8000000000000000;
    auVar27._0_8_ = puVar5;
    return auVar27;
  case (char *)0x8:
    uVar10 = 0xee00746e756f4361;
    puVar5 = (undefined1 *)0x6f74;
  case (char *)0xc0:
  case (char *)0xc8:
  case (char *)0xe0:
    auVar32._0_8_ = (ulong)puVar5 & 0xffff00000000ffff | 0x7461446c61740000;
    auVar32._8_8_ = uVar10;
    return auVar32;
  case (char *)0x9:
    pcVar11 = "userSelectFilesUrl";
  case (char *)0x60:
    auVar23._8_8_ = (ulong)(pcVar11 + -0x20) | 0x8000000000000000;
    auVar23._0_8_ = 0xd000000000000012;
    return auVar23;
  case (char *)0xa:
    pcVar11 = "-server/UURemoteServer/Clipboard/PC/Model/ClipboardUploadCopyModel.swift";
  case (char *)0xb0:
    uVar10 = (ulong)(pcVar11 + 0x8b0) | 0x8000000000000000;
    puVar5 = &DAT_d000000000000013;
  case (char *)0xb8:
    auVar31._8_8_ = uVar10;
    auVar31._0_8_ = puVar5;
    return auVar31;
  case (char *)0xb:
    pcVar11 = "userPasteEmptyFileUrl";
  case (char *)0x40:
    uVar10 = (ulong)(pcVar11 + -0x20) | 0x8000000000000000;
    pcVar11 = (char *)0x5;
    pbVar13 = &DAT_d000000000000010;
  case (char *)0xfa:
    puVar5 = (undefined1 *)((ulong)pbVar13 | (ulong)pcVar11);
  case (char *)0x48:
    auVar21._8_8_ = uVar10;
    auVar21._0_8_ = puVar5;
    return auVar21;
  case (char *)0xc:
    puVar5 = (undefined1 *)0x7375;
  case (char *)0x58:
    uVar10 = (ulong)puVar5 & 0xffff00000000ffff | 0x7473615072650000;
    break;
  case (char *)0xd:
  case (char *)0x98:
    uVar10 = 0xed0000656d695474;
    puVar5 = (undefined1 *)0x6b736174;
  case (char *)0xa0:
    auVar29._0_8_ = (ulong)puVar5 & 0xffff0000ffffffff | 0x7261745300000000;
    auVar29._8_8_ = uVar10;
    return auVar29;
  case (char *)0xe:
  case (char *)0x1a:
  case (char *)0x22:
  case (char *)0x2a:
  case (char *)0x32:
  case (char *)0x3a:
  case (char *)0x42:
  case (char *)0x4a:
  case (char *)0x52:
  case (char *)0x5a:
  case (char *)0x62:
  case (char *)0x6a:
  case (char *)0x72:
  case (char *)0x7a:
  case (char *)0x82:
  case (char *)0x8a:
  case (char *)0x92:
  case (char *)0x9a:
  case (char *)0xa2:
  case (char *)0xaa:
  case (char *)0xb2:
  case (char *)0xba:
  case (char *)0xc2:
  case (char *)0xca:
  case (char *)0xd2:
  case (char *)0xe2:
  case (char *)0xea:
  case (char *)0xf2:
    uVar10 = 0x7361;
  case (char *)0xfe:
    uVar10 = uVar10 | 0x65740000;
  case (char *)0x1c:
  case (char *)0x24:
  case (char *)0x2c:
  case (char *)0x34:
  case (char *)0x3c:
  case (char *)0x44:
  case (char *)0x4c:
  case (char *)0x5c:
  case (char *)0x64:
  case (char *)0x6c:
  case (char *)0x74:
  case (char *)0x7c:
  case (char *)0x84:
  case (char *)0x8c:
  case (char *)0x94:
  case (char *)0x9c:
  case (char *)0xa4:
  case (char *)0xac:
  case (char *)0xb4:
  case (char *)0xbc:
  case (char *)0xcc:
  case (char *)0xe4:
  case (char *)0xec:
  case (char *)0xf4:
    uVar10 = uVar10 & 0xffffffffffff | 0xec00000000000000;
    puVar5 = (undefined1 *)0x7375;
  case (char *)0x38:
    auVar20._0_8_ = (ulong)puVar5 & 0xffff00000000ffff | 0x5073614872650000;
    auVar20._8_8_ = uVar10;
    return auVar20;
  case (char *)0xf:
    uVar10 = 0x747261;
  case (char *)0x70:
    auVar25._8_8_ = uVar10 & 0xffffffffffff | 0xeb00000000000000;
    auVar25._0_8_ = 0x745373496b736174;
    return auVar25;
  case (char *)0x10:
    puVar5 = (undefined1 *)0x6572;
  case (char *)0xc4:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x75730000);
  case (char *)0x30:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x746c00000000);
  case (char *)0x0:
  case (char *)0x54:
  case (char *)0xd4:
    auVar19._8_8_ = 0xe600000000000000;
    auVar19._0_8_ = puVar5;
    return auVar19;
  case (char *)0xd0:
  case (char *)0xe8:
  case (char *)0x19:
  case (char *)0x21:
  case (char *)0x29:
  case (char *)0x31:
  case (char *)0x39:
  case (char *)0x41:
  case (char *)0x49:
  case (char *)0x51:
  case (char *)0x59:
  case (char *)0x61:
  case (char *)0x69:
  case (char *)0x71:
  case (char *)0x79:
  case (char *)0x81:
  case (char *)0x89:
  case (char *)0x91:
  case (char *)0x99:
  case (char *)0xa1:
  case (char *)0xa9:
  case (char *)0xb1:
  case (char *)0xb9:
  case (char *)0xc1:
  case (char *)0xc9:
  case (char *)0xd1:
  case (char *)0xe1:
  case (char *)0xe9:
  case (char *)0xf1:
    FUN_1005fbdfc();
    *pcVar11 = (char)puVar5;
  case (char *)0xf0:
  case (char *)0xf9:
    auVar33._8_8_ = uVar10;
    auVar33._0_8_ = puVar5;
    return auVar33;
  case (char *)0xf8:
    FUN_1005fa2b4((long)unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::emptyFileUrl);
    _swift_bridgeObjectRelease
              (*(undefined8 *)
                ((long)unaff_x20 +
                _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesUrl));
    _swift_bridgeObjectRelease
              (*(undefined8 *)
                ((long)unaff_x20 +
                _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesName));
    FUN_1005fa2b4((long)unaff_x20 +
                  _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl);
    FUN_1005fa2b4((long)unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteUrl);
    uVar10 = (ulong)*(uint *)(*unaff_x20 + 0x30);
    _swift_deallocClassInstance();
    auVar35._8_8_ = uVar10;
    auVar35._0_8_ = unaff_x20;
    return auVar35;
  case (char *)0xfc:
    FUN_1005fa2fc();
    __ss9CodingKeyPsE11descriptionSSvg();
    auVar34._8_8_ = puVar5;
    auVar34._0_8_ = unaff_x19;
    return auVar34;
  case (char *)0xfd:
    *(byte **)(unaff_x19 + 0x20) = &switchD_1005f6190::switchdataD_100844fd0;
    (*(code *)PTR____chkstk_darwin_100995498)();
    pbVar13 = &switchD_1005f6190::switchdataD_100844fd0 + -extraout_x12;
  case (char *)0x18:
    register0x00000008 = (BADSPACEBASE *)pbVar13;
    *(BADSPACEBASE **)(unaff_x19 + 0x28) = register0x00000008;
    (*(code *)PTR____chkstk_darwin_100995498)();
    in_x12 = extraout_x12_00;
  case (char *)0x20:
    lVar17 = (long)register0x00000008 - in_x12;
    puVar6 = &DAT_100aaf100;
    FUN_100004bb4(&DAT_100aaf100,&BYTE_100845098);
    lVar16 = *(long *)(puVar6 + -8);
    (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar7 = unaff_x20[3];
    lVar15 = unaff_x20[4];
    FUN_10003f030();
    FUN_1005fa2fc();
    __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
              (lVar17 - extraout_x8,&DAT_1009dc720,&DAT_1009dc720,unaff_x20,lVar7,lVar15);
    lVar7 = unaff_x24 + 0x10;
    _swift_beginAccess(lVar7,unaff_x29 + -0x70,0,0);
    *(long *)(unaff_x19 + 0x30) = unaff_x24;
    *(undefined1 *)(unaff_x29 + -0x88) = *(undefined1 *)(unaff_x24 + 0x10);
    *(undefined1 *)(unaff_x29 + -0xa0) = 0;
    FUN_1005fa33c();
    *(long *)(unaff_x19 + 0x40) = lVar17 - extraout_x8;
    *(undefined **)(unaff_x19 + 0x48) = puVar6;
    lVar15 = *(long *)(unaff_x19 + 0x38);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (unaff_x29 + -0x88,unaff_x29 + -0xa0,puVar6,&DAT_1009dc570,lVar7);
    if (lVar15 == 0) {
      uVar14 = *(undefined8 *)(unaff_x19 + 0x28);
      lVar7 = *(long *)(unaff_x19 + 0x30);
      _swift_beginAccess(lVar7 + 0x18,unaff_x29 + -0x88,0,0);
      uVar8 = *(undefined8 *)(lVar7 + 0x18);
      uVar1 = *(undefined8 *)(lVar7 + 0x20);
      *(undefined1 *)(unaff_x29 + -0xa0) = 1;
      _swift_bridgeObjectRetain(uVar1);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar8,uVar1,unaff_x29 + -0xa0,uVar2);
      _swift_bridgeObjectRelease(uVar1);
      _swift_beginAccess(lVar7 + 0x28,unaff_x29 + -0xa0,0,0);
      uVar3 = *(undefined4 *)(lVar7 + 0x28);
      *(undefined1 *)(unaff_x29 + -0xb8) = 2;
      __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF(uVar3,unaff_x29 + -0xb8,uVar2);
      _swift_beginAccess(lVar7 + 0x2c,unaff_x29 + -0xb8,0,0);
      uVar3 = *(undefined4 *)(lVar7 + 0x2c);
      *(undefined1 *)(unaff_x29 + -0xd0) = 3;
      __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF(uVar3,unaff_x29 + -0xd0,uVar2);
      _swift_beginAccess(lVar7 + 0x30,unaff_x29 + -0xd0,0,0);
      uVar4 = *(undefined1 *)(lVar7 + 0x30);
      *(undefined1 *)(unaff_x29 + -0xe8) = 4;
      __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(uVar4,unaff_x29 + -0xe8,uVar2);
      *(long *)(unaff_x19 + 0x18) = lVar16;
      _swift_beginAccess(lVar7 + 0x38,unaff_x29 + -0xe8,0,0);
      uVar8 = *(undefined8 *)(lVar7 + 0x38);
      uVar1 = *(undefined8 *)(lVar7 + 0x40);
      *(undefined1 *)(unaff_x29 + -0x100) = 5;
      _swift_bridgeObjectRetain(uVar1);
      *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar8,uVar1,unaff_x29 + -0x100,uVar2);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x19 + 0x38));
      lVar15 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::emptyFileUrl;
      _swift_beginAccess(lVar7 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::emptyFileUrl,
                         unaff_x29 + -0x100,0,0);
      FUN_1005fa214(lVar7 + lVar15,lVar17);
      *(undefined1 *)(unaff_x19 + 0x128) = 6;
      uVar8 = 0;
      __s10Foundation3URLVMa();
      puVar6 = &DAT_100aaf118;
      FUN_100144654(&DAT_100aaf118,PTR___s10Foundation3URLVSEAAMc_100996198);
      *(long *)(unaff_x19 + 0x38) = lVar17;
      *(undefined **)(unaff_x19 + 0x10) = puVar6;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
                (lVar17,unaff_x19 + 0x128,uVar2,uVar8);
      *(undefined8 *)(unaff_x19 + 8) = uVar8;
      FUN_1005fa2b4(*(undefined8 *)(unaff_x19 + 0x38));
      lVar15 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::receiveDataCount;
      _swift_beginAccess(lVar7 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::receiveDataCount,
                         unaff_x19 + 0x128,0,0);
      uVar8 = *(undefined8 *)(lVar7 + lVar15);
      *(undefined1 *)(unaff_x19 + 0x110) = 7;
      __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(uVar8,unaff_x19 + 0x110,uVar2);
      lVar15 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::totalDataCount;
      _swift_beginAccess(lVar7 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::totalDataCount,
                         unaff_x19 + 0x110,0,0);
      uVar8 = *(undefined8 *)(lVar7 + lVar15);
      *(undefined1 *)(unaff_x19 + 0xf8) = 8;
      __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(uVar8,unaff_x19 + 0xf8,uVar2);
      lVar15 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesUrl;
      _swift_beginAccess(lVar7 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesUrl
                         ,unaff_x19 + 0xf8,0,0);
      *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)(lVar7 + lVar15);
      *(undefined1 *)(unaff_x19 + 200) = 9;
      puVar6 = &DAT_100aaf120;
      FUN_100004bb4(&DAT_100aaf120,&BYTE_1008450a0);
      puVar9 = &DAT_100aaf128;
      FUN_1005fa37c(&DAT_100aaf128,&DAT_100aaf118,PTR___s10Foundation3URLVSEAAMc_100996198,
                    PTR___sSayxGSEsSERzlMc_100995880);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
                (unaff_x19 + 0xe0,unaff_x19 + 200,uVar2,puVar6,puVar9);
      lVar15 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesName;
      _swift_beginAccess(lVar7 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::
                                 userSelectFilesName,unaff_x19 + 0xe0,0,0);
      *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(lVar7 + lVar15);
      *(undefined1 *)(unaff_x19 + 0xb0) = 10;
      puVar6 = &DAT_100aae0a0;
      FUN_100004bb4(&DAT_100aae0a0,&DAT_10083f500);
      puVar9 = &DAT_100aae0a8;
      FUN_1005da960(&DAT_100aae0a8,PTR___sSSSEsWP_100995800,PTR___sSayxGSEsSERzlMc_100995880);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
                (unaff_x19 + 200,unaff_x19 + 0xb0,uVar2,puVar6,puVar9);
      lVar7 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl;
      lVar15 = *(long *)(unaff_x19 + 0x30);
      _swift_beginAccess(lVar15 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::
                                  userPasteEmptyFileUrl,unaff_x19 + 200,0,0);
      FUN_1005fa214(lVar15 + lVar7,uVar14);
      *(undefined1 *)(unaff_x19 + 0xb0) = 0xb;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
                (uVar14,unaff_x19 + 0xb0,*(undefined8 *)(unaff_x19 + 0x48),
                 *(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      FUN_1005fa2b4(uVar14);
      lVar7 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteUrl;
      lVar15 = *(long *)(unaff_x19 + 0x30);
      _swift_beginAccess(lVar15 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteUrl,
                         unaff_x19 + 0xb0,0,0);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x20);
      FUN_1005fa214(lVar15 + lVar7,uVar14);
      *(undefined1 *)(unaff_x19 + 0x98) = 0xc;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
                (uVar14,unaff_x19 + 0x98,*(undefined8 *)(unaff_x19 + 0x48),
                 *(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      FUN_1005fa2b4(*(undefined8 *)(unaff_x19 + 0x20));
      lVar7 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskStartTime;
      lVar15 = *(long *)(unaff_x19 + 0x30);
      _swift_beginAccess(lVar15 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskStartTime,
                         unaff_x19 + 0x98,0,0);
      uVar14 = *(undefined8 *)(lVar15 + lVar7);
      *(undefined1 *)(unaff_x19 + 0x80) = 0xd;
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (uVar14,unaff_x19 + 0x80,*(undefined8 *)(unaff_x19 + 0x48));
      lVar7 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userHasPaste;
      lVar15 = *(long *)(unaff_x19 + 0x30);
      _swift_beginAccess(lVar15 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userHasPaste,
                         unaff_x19 + 0x80,0,0);
      uVar4 = *(undefined1 *)(lVar15 + lVar7);
      *(undefined1 *)(unaff_x19 + 0x68) = 0xe;
      __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
                (uVar4,unaff_x19 + 0x68,*(undefined8 *)(unaff_x19 + 0x48));
      lVar7 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskIsStart;
      lVar15 = *(long *)(unaff_x19 + 0x30);
      _swift_beginAccess(lVar15 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskIsStart,
                         unaff_x19 + 0x68,0,0);
      uVar4 = *(undefined1 *)(lVar15 + lVar7);
      *(undefined1 *)(unaff_x19 + 0x50) = 0xf;
      __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
                (uVar4,unaff_x19 + 0x50,*(undefined8 *)(unaff_x19 + 0x48));
      lVar15 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::result;
      lVar17 = *(long *)(unaff_x19 + 0x30);
      lVar7 = lVar17 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::result;
      _swift_beginAccess(lVar7,unaff_x19 + 0x50,0,0);
      *(undefined1 *)(unaff_x29 + -0x41) = *(undefined1 *)(lVar17 + lVar15);
      *(undefined1 *)(unaff_x29 + -0x42) = 0x10;
      FUN_1005ec4f8();
      uVar14 = *(undefined8 *)(unaff_x19 + 0x40);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
      __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                (unaff_x29 + -0x41,unaff_x29 + -0x42,uVar8,&DAT_1009dc600,lVar7);
      pcVar12 = *(code **)(lVar16 + 8);
    }
    else {
      pcVar12 = *(code **)(lVar16 + 8);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x40);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
    }
    (*pcVar12)(uVar14,uVar8);
    auVar36._8_8_ = uVar8;
    auVar36._0_8_ = uVar14;
    return auVar36;
  }
  auVar30._8_8_ = 0xec0000006c725565;
  auVar30._0_8_ = uVar10;
  return auVar30;
}

