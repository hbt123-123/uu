// rea decompile_all
// name: FUN_1002276d4
// address: 0x1002276d4
// body: available
// range: 0x1002276d4-0x100227937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100227c68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1002276d4(ulong param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  long extraout_x8;
  code *in_x16;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x22;
  long lVar7;
  long unaff_x24;
  long unaff_x27;
  long unaff_x29;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  
  uVar5 = 0xe700000000000000;
  puVar2 = (undefined1 *)0x7463656a6f7270;
  pcVar6 = (char *)(param_1 & 0xff);
  switch(pcVar6) {
  default:
    uVar5 = 0xe600000000000000;
  case (char *)0x99:
  case (char *)0xa1:
  case (char *)0xa9:
  case (char *)0xb1:
  case (char *)0xb9:
  case (char *)0xf4:
    puVar2 = (undefined1 *)0x72636573;
  case (char *)0xf2:
    auVar8._0_8_ = (ulong)puVar2 & 0xffff0000ffffffff | 0x746500000000;
    auVar8._8_8_ = uVar5;
    return auVar8;
  case (char *)0x2:
    uVar5 = 0xe600000000000000;
    puVar2 = (undefined1 *)0x656372756f73;
  case (char *)0x28:
    auVar14._8_8_ = uVar5;
    auVar14._0_8_ = puVar2;
    return auVar14;
  case (char *)0x3:
    uVar5 = 0xe900000000000070;
  case (char *)0xe8:
    puVar2 = (undefined1 *)0x6d617473656d6974;
  case (char *)0x30:
    auVar16._8_8_ = uVar5;
    auVar16._0_8_ = puVar2;
    return auVar16;
  case (char *)0x4:
    uVar5 = 0xe500000000000000;
  case (char *)0xa0:
    puVar2 = (undefined1 *)0x7665;
  case (char *)0xd6:
  case (char *)0xde:
  case (char *)0xe6:
  case (char *)0xfa:
    auVar11._0_8_ = (ulong)puVar2 & 0xffff00000000ffff | 0x746e650000;
    auVar11._8_8_ = uVar5;
    return auVar11;
  case (char *)0x5:
    puVar2 = (undefined1 *)0x71696e75;
  case (char *)0x40:
    auVar19._0_8_ = (ulong)puVar2 & 0xffffffff | 0x695f657500000000;
    auVar19._8_8_ = 0xe900000000000064;
    return auVar19;
  case (char *)0x6:
    uVar5 = 0x657079745f;
  case (char *)0xcf:
    uVar5 = uVar5 & 0xffffffffffff | 0xed00000000000000;
    puVar2 = (undefined1 *)0x5f5f;
  case (char *)0x48:
    auVar21._0_8_ = (ulong)puVar2 & 0xffff | 0x6d65747379730000;
    auVar21._8_8_ = uVar5;
    return auVar21;
  case (char *)0x7:
    puVar2 = &DAT_d000000000000010;
  case (char *)0xc1:
  case (char *)0xc7:
    pcVar6 = "__system_version";
LAB_10022792c:
    auVar25._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
    auVar25._0_8_ = puVar2;
    return auVar25;
  case (char *)0x8:
    auVar24._8_8_ = 0xed00006e6f697372;
    auVar24._0_8_ = 0x65765f7070615f5f;
    return auVar24;
  case (char *)0x9:
    uVar5 = 0x80000001008a6580;
  case (char *)0xa8:
  case (char *)0xdd:
    pcVar6 = (char *)0x10;
  case (char *)0xd5:
  case (char *)0xe5:
  case (char *)0xf9:
    pcVar6 = (char *)((ulong)pcVar6 | 0xd000000000000000);
  case (char *)0xd9:
  case (char *)0xe9:
    auVar13._0_8_ = (ulong)pcVar6 | 2;
    auVar13._8_8_ = uVar5;
    return auVar13;
  case (char *)0xa:
  case (char *)0xc5:
    puVar2 = (undefined1 *)0x5f5f;
  case (char *)0xc3:
    puVar2 = (undefined1 *)((ulong)puVar2 & 0xffff | 0x6563697665640000);
    break;
  case (char *)0xb:
    puVar2 = (undefined1 *)0x656c646e75625f5f;
    break;
  case (char *)0xc:
  case (char *)0xfc:
    uVar5 = 0xe90000000000006c;
    puVar2 = (undefined1 *)0x5f5f;
  case (char *)0x20:
    auVar12._0_8_ = (ulong)puVar2 & 0xffff | 0x656e6e6168630000;
    auVar12._8_8_ = uVar5;
    return auVar12;
  case (char *)0xd:
  case (char *)0xd4:
    auVar20._8_8_ = 0xe800000000000000;
    auVar20._0_8_ = 0x656c61636f6c5f5f;
    return auVar20;
  case (char *)0xe:
    uVar5 = 0xe600000000000000;
  case (char *)0xda:
  case (char *)0xea:
    puVar2 = (undefined1 *)0x616f5f5f;
  case (char *)0x18:
    auVar10._0_8_ = (ulong)puVar2 & 0xffff0000ffffffff | 0x646900000000;
    auVar10._8_8_ = uVar5;
    return auVar10;
  case (char *)0xf:
    uVar5 = 0xe900000000000074;
    puVar2 = (undefined1 *)0x6375646f72705f5f;
  case (char *)0xb0:
    auVar15._8_8_ = uVar5;
    auVar15._0_8_ = puVar2;
    return auVar15;
  case (char *)0x10:
    uVar5 = 0xec0000006e6f6974;
  case (char *)0x98:
    auVar9._8_8_ = uVar5;
    auVar9._0_8_ = 0x756c6f7365725f5f;
    return auVar9;
  case (char *)0x11:
  case (char *)0xc0:
    uVar5 = 0x7a69735f;
  case (char *)0x38:
  case (char *)0xb8:
    uVar5 = uVar5 | 0x6500000000;
  case (char *)0xcd:
  case (char *)0xf8:
    uVar5 = uVar5 & 0xffffffffffff | 0xed00000000000000;
    puVar2 = (undefined1 *)0x63735f5f;
  case (char *)0xd8:
    auVar17._0_8_ = (ulong)puVar2 & 0xffffffff | 0x6e65657200000000;
    auVar17._8_8_ = uVar5;
    return auVar17;
  case (char *)0x12:
    uVar5 = 0x6b6f;
  case (char *)0xc9:
  case (char *)0xca:
    uVar5 = uVar5 | 0x6e650000;
  case (char *)0xc4:
  case (char *)0xcc:
  case (char *)0xce:
    uVar5 = uVar5 & 0xffffffffffff | 0xec00000000000000;
  case (char *)0xc2:
  case (char *)0xc8:
  case (char *)0xcb:
  case (char *)0xd0:
    auVar22._8_8_ = uVar5;
    auVar22._0_8_ = 0x72626c69616a5f5f;
    return auVar22;
  case (char *)0x13:
    puVar2 = &DAT_d000000000000010;
    pcVar6 = "FLERKEN_set_user_profile";
  case (char *)0x58:
    pcVar6 = pcVar6 + 0x620;
    goto LAB_10022792c;
  case (char *)0x14:
    uVar5 = 0xea0000000000726f;
    puVar2 = (undefined1 *)0x7265706f5f5f;
  case (char *)0xfd:
    puVar2 = (undefined1 *)((ulong)puVar2 & 0xffffffffffff | 0x7461000000000000);
  case (char *)0x0:
  case (char *)0xe4:
    auVar18._8_8_ = uVar5;
    auVar18._0_8_ = puVar2;
    return auVar18;
  case (char *)0x50:
    break;
  case (char *)0x60:
    *pcVar6 = -0x38;
    auVar26._8_8_ = 0xe700000000000000;
    auVar26._0_8_ = 0x7463656a6f7270;
    return auVar26;
  case (char *)0x68:
    FUN_100228c00();
    __ss9CodingKeyPsE11descriptionSSvg();
    auVar28._8_8_ = puVar2;
    auVar28._0_8_ = unaff_x19;
    return auVar28;
  case (char *)0x88:
    auVar30._8_8_ = 0xe700000000000000;
    auVar30._0_8_ = 0x7463656a6f7270;
    return auVar30;
  case (char *)0x90:
    pcVar6 = (char *)(*(long *)(_DAT_7463656a6f7268 + 0x40) + 0xfU & 0xfffffffffffffff0);
    in_x16 = (code *)PTR____chkstk_darwin_100995498;
    unaff_x22 = puVar2;
    unaff_x27 = _DAT_7463656a6f7268;
  case (char *)0xff:
    (*in_x16)(pcVar6);
    lVar7 = (long)&stack0x00000000 - extraout_x8;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    FUN_10003f030();
    FUN_100228c00();
    __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
              (lVar7,&DAT_1009a60e8,&DAT_1009a60e8,unaff_x20,uVar4,uVar3);
    uVar4 = *(undefined8 *)(unaff_x24 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x24 + 0x18);
    *(undefined1 *)(unaff_x29 + -0x41) = 0;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
    if (unaff_x19 == 0) {
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x20);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x28);
      *(undefined1 *)(unaff_x29 + -0x41) = 1;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x30);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x38);
      *(undefined1 *)(unaff_x29 + -0x41) = 2;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x40);
      *(undefined1 *)(unaff_x29 + -0x41) = 3;
      __ss22KeyedEncodingContainerV6encode_6forKeyys5Int64V_xtKF(uVar4,unaff_x29 + -0x41,unaff_x22);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x48);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x50);
      *(undefined1 *)(unaff_x29 + -0x41) = 4;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x58);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x60);
      *(undefined1 *)(unaff_x29 + -0x41) = 5;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x68);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x70);
      *(undefined1 *)(unaff_x29 + -0x41) = 6;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x78);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x80);
      *(undefined1 *)(unaff_x29 + -0x41) = 7;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x88);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x90);
      *(undefined1 *)(unaff_x29 + -0x41) = 8;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x98);
      uVar3 = *(undefined8 *)(unaff_x24 + 0xa0);
      *(undefined1 *)(unaff_x29 + -0x41) = 9;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0xa8);
      uVar3 = *(undefined8 *)(unaff_x24 + 0xb0);
      *(undefined1 *)(unaff_x29 + -0x41) = 10;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0xb8);
      uVar3 = *(undefined8 *)(unaff_x24 + 0xc0);
      *(undefined1 *)(unaff_x29 + -0x41) = 0xb;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 200);
      uVar3 = *(undefined8 *)(unaff_x24 + 0xd0);
      *(undefined1 *)(unaff_x29 + -0x41) = 0xc;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0xd8);
      uVar3 = *(undefined8 *)(unaff_x24 + 0xe0);
      *(undefined1 *)(unaff_x29 + -0x41) = 0xd;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0xe8);
      uVar3 = *(undefined8 *)(unaff_x24 + 0xf0);
      *(undefined1 *)(unaff_x29 + -0x41) = 0xe;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0xf8);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x100);
      *(undefined1 *)(unaff_x29 + -0x41) = 0xf;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x108);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x110);
      *(undefined1 *)(unaff_x29 + -0x41) = 0x10;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x118);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x120);
      *(undefined1 *)(unaff_x29 + -0x41) = 0x11;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x128);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x130);
      *(undefined1 *)(unaff_x29 + -0x41) = 0x12;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x138);
      uVar1 = *(undefined1 *)(unaff_x24 + 0x140);
      *(undefined1 *)(unaff_x29 + -0x41) = 0x13;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyys5Int64VSg_xtKF
                (uVar4,uVar1,unaff_x29 + -0x41,unaff_x22);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x148);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x150);
      *(undefined1 *)(unaff_x29 + -0x41) = 0x14;
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar4,uVar3,unaff_x29 + -0x41,unaff_x22);
      (**(code **)(unaff_x27 + 8))(lVar7,unaff_x22);
    }
    else {
      (**(code **)(unaff_x27 + 8))(lVar7,unaff_x22);
    }
    _swift_bridgeObjectRelease(uVar3);
    auVar31._8_8_ = unaff_x22;
    auVar31._0_8_ = uVar3;
    return auVar31;
  case (char *)0xdc:
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  case (char *)0x70:
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x90));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa0));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb0));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xc0));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xd0));
  case (char *)0x78:
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xe0));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xf0));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x100));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x110));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x120));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x130));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x150));
    puVar2 = unaff_x20;
  case (char *)0x80:
    auVar29._8_8_ = uVar5;
    auVar29._0_8_ = puVar2;
    return auVar29;
  case (char *)0xfe:
    __ss9CodingKeyPsE16debugDescriptionSSvg(0x7463656a6f7270,0xe700000000000000);
    auVar27._8_8_ = uVar5;
    auVar27._0_8_ = puVar2;
    return auVar27;
  }
  auVar23._8_8_ = 0xeb0000000064695f;
  auVar23._0_8_ = puVar2;
  return auVar23;
}

