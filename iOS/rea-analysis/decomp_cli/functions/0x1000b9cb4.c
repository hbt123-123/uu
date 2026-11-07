// rea decompile_all
// name: FUN_1000b9cb4
// address: 0x1000b9cb4
// body: available
// range: 0x1000b9cb4-0x1000b9e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000b9cb4(ulong param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte *pbVar7;
  undefined *unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  undefined *unaff_x22;
  byte *unaff_x23;
  long unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar8;
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
  
  puVar5 = (undefined *)0xe400000000000000;
  puVar2 = (undefined *)0x646e696b;
  puVar6 = (undefined *)(param_1 & 0xff);
  pbVar7 = &switchD_1000b9cdc::switchdataD_1000d6e20;
  puVar3 = puVar2;
  switch(puVar6) {
  case (undefined *)0x0:
    goto switchD_1000b9cdc_caseD_0;
  default:
    puVar5 = (undefined *)0x7073;
  case (undefined *)0xb0:
  case (undefined *)0xbe:
  case (undefined *)0xd8:
  case (undefined *)0xe6:
    puVar5 = (undefined *)((ulong)puVar5 | 0x616c0000);
  case (undefined *)0xa2:
  case (undefined *)0xb6:
  case (undefined *)0xca:
  case (undefined *)0xde:
  case (undefined *)0xf2:
    puVar5 = (undefined *)((ulong)puVar5 | 0x7900000000);
  case (undefined *)0xae:
  case (undefined *)0xd6:
  case (undefined *)0xfe:
    puVar5 = (undefined *)((ulong)puVar5 & 0xffffffffffff | 0xed00000000000000);
  case (undefined *)0xc6:
  case (undefined *)0xec:
  case (undefined *)0xee:
    puVar2 = (undefined *)0x756f6873;
  case (undefined *)0x2c:
    puVar2 = (undefined *)((ulong)puVar2 | 0x646c00000000);
switchD_1000b9cdc_caseD_9c:
    auVar9._0_8_ = (ulong)puVar2 | 0x6944000000000000;
    auVar9._8_8_ = puVar5;
    return auVar9;
  case (undefined *)0x2:
    auVar15._8_8_ = 0xec000000656c7469;
    auVar15._0_8_ = 0x546e6f6974636573;
    return auVar15;
  case (undefined *)0x3:
    puVar2 = (undefined *)0x6e6f6974704f7369;
  case (undefined *)0x11:
  case (undefined *)0x19:
  case (undefined *)0x21:
  case (undefined *)0x29:
  case (undefined *)0x31:
  case (undefined *)0x39:
  case (undefined *)0x41:
  case (undefined *)0x49:
  case (undefined *)0x51:
  case (undefined *)0x59:
  case (undefined *)0x61:
  case (undefined *)0x69:
  case (undefined *)0x71:
  case (undefined *)0x79:
  case (undefined *)0x81:
  case (undefined *)0x89:
  case (undefined *)0x91:
  case (undefined *)0x99:
    auVar16._8_8_ = 0xea00000000006c61;
    auVar16._0_8_ = puVar2;
    return auVar16;
  case (undefined *)0x4:
    auVar12._8_8_ = 0xeb00000000676e69;
    auVar12._0_8_ = 0x7461657065527369;
    return auVar12;
  case (undefined *)0x5:
    puVar5 = (undefined *)0x676574617274;
  case (undefined *)0xdc:
    puVar5 = (undefined *)((ulong)puVar5 & 0xffffffffffff | 0xef79000000000000);
    puVar2 = (undefined *)0x53676e6973726170;
switchD_1000b9cdc_caseD_a1:
    auVar18._8_8_ = puVar5;
    auVar18._0_8_ = puVar2;
    return auVar18;
  case (undefined *)0x6:
  case (undefined *)0xc8:
    auVar20._8_8_ = 0xe500000000000000;
    auVar20._0_8_ = 0x73656d616e;
    return auVar20;
  case (undefined *)0x7:
  case (undefined *)0xf0:
    puVar5 = (undefined *)0xed0000656d614e64;
    puVar2 = (undefined *)0x726566657270;
  case (undefined *)0xe0:
    auVar17._0_8_ = (ulong)puVar2 | 0x6572000000000000;
    auVar17._8_8_ = puVar5;
    return auVar17;
  case (undefined *)0x8:
    auVar22._8_8_ = 0xe900000000000065;
    auVar22._0_8_ = 0x6d614e65756c6176;
    return auVar22;
  case (undefined *)0x9:
    auVar14._8_8_ = 0xec00000065756c61;
    auVar14._0_8_ = 0x56746c7561666564;
    return auVar14;
  case (undefined *)0xa:
    auVar21._8_8_ = 0xe900000000000073;
    auVar21._0_8_ = 0x65756c61566c6c61;
    return auVar21;
  case (undefined *)0xb:
    auVar11._8_8_ = 0x80000001000cb120;
    auVar11._0_8_ = 0xd000000000000014;
    return auVar11;
  case (undefined *)0xc:
    auVar13._8_8_ = 0xee00646e694b6e6f;
    auVar13._0_8_ = 0x6974656c706d6f63;
    return auVar13;
  case (undefined *)0xd:
    auVar19._8_8_ = 0xe800000000000000;
    auVar19._0_8_ = 0x7463617274736261;
    return auVar19;
  case (undefined *)0xe:
  case (undefined *)0x34:
  case (undefined *)0x3c:
  case (undefined *)0x94:
    puVar6 = (undefined *)0x20e;
    pbVar7 = (byte *)0xea00000000006c61;
  case (undefined *)0x14:
  case (undefined *)0x1c:
  case (undefined *)0x24:
  case (undefined *)0x44:
  case (undefined *)0x4c:
  case (undefined *)0x54:
  case (undefined *)0x5c:
  case (undefined *)0x64:
  case (undefined *)0x6c:
  case (undefined *)0x74:
  case (undefined *)0x7c:
  case (undefined *)0x84:
  case (undefined *)0x8c:
    puVar5 = (undefined *)((ulong)pbVar7 | (ulong)puVar6);
    puVar2 = (undefined *)0x6973737563736964;
switchD_1000b9cdc_caseD_0:
    auVar10._8_8_ = puVar5;
    auVar10._0_8_ = puVar2;
    return auVar10;
  case (undefined *)0x10:
    break;
  case (undefined *)0x18:
    goto switchD_1000b9cdc_caseD_18;
  case (undefined *)0x20:
    goto switchD_1000b9cdc_caseD_20;
  case (undefined *)0x28:
  case (undefined *)0x30:
  case (undefined *)0xc4:
    goto switchD_1000b9cdc_caseD_28;
  case (undefined *)0x38:
    goto switchD_1000b9cdc_caseD_38;
  case (undefined *)0x40:
    goto switchD_1000b9cdc_caseD_40;
  case (undefined *)0x48:
    goto switchD_1000b9cdc_caseD_48;
  case (undefined *)0x50:
    goto switchD_1000b9cdc_caseD_50;
  case (undefined *)0x58:
    goto switchD_1000b9cdc_caseD_58;
  case (undefined *)0x60:
    goto switchD_1000b9cdc_caseD_60;
  case (undefined *)0x68:
    goto switchD_1000b9cdc_caseD_68;
  case (undefined *)0x70:
    goto switchD_1000b9cdc_caseD_70;
  case (undefined *)0x78:
    goto switchD_1000b9cdc_caseD_78;
  case (undefined *)0x80:
    goto switchD_1000b9cdc_caseD_80;
  case (undefined *)0x88:
    goto switchD_1000b9cdc_caseD_88;
  case (undefined *)0x90:
    goto switchD_1000b9cdc_caseD_90;
  case (undefined *)0x98:
    goto switchD_1000b9cdc_caseD_98;
  case (undefined *)0x9c:
    goto switchD_1000b9cdc_caseD_9c;
  case (undefined *)0xa0:
    goto switchD_1000b9cdc_caseD_a0;
  case (undefined *)0xa1:
  case (undefined *)0xb5:
  case (undefined *)0xc9:
  case (undefined *)0xdd:
  case (undefined *)0xf1:
    goto switchD_1000b9cdc_caseD_a1;
  case (undefined *)0xa4:
    goto switchD_1000b9cdc_caseD_a4;
  case (undefined *)0xa5:
  case (undefined *)0xcd:
  case (undefined *)0xf5:
    goto switchD_1000b9cdc_caseD_a5;
  case (undefined *)0xb4:
    auVar23._8_8_ = 0xe400000000000000;
    auVar23._0_8_ = 0x646e696b;
    return auVar23;
  case (undefined *)0xb8:
    goto switchD_1000b9cdc_caseD_b8;
  case (undefined *)0xb9:
    goto switchD_1000b9cdc_caseD_b9;
  case (undefined *)0xba:
  case (undefined *)0xe2:
    goto switchD_1000b9cdc_caseD_ba;
  case (undefined *)0xbb:
  case (undefined *)0xe3:
    goto switchD_1000b9cdc_caseD_bb;
  case (undefined *)0xc5:
  case (undefined *)0xed:
    FUN_1000bd330(0x646e696b,0xe400000000000000);
    unaff_x19 = puVar2;
switchD_1000b9cdc_caseD_f4:
    puVar5 = puVar3;
switchD_1000b9cdc_caseD_a0:
    __ss9CodingKeyPsE16debugDescriptionSSvg(unaff_x19,puVar5);
    auVar24._8_8_ = puVar5;
    auVar24._0_8_ = unaff_x19;
    return auVar24;
  case (undefined *)0xcc:
    goto switchD_1000b9cdc_caseD_cc;
  case (undefined *)0xe1:
    goto switchD_1000b9cdc_caseD_e1;
  case (undefined *)0xf4:
    goto switchD_1000b9cdc_caseD_f4;
  }
  puVar2 = &DAT_100105220;
  FUN_10000eb08(&DAT_100105220,&BYTE_1000d6ea8);
  unaff_x19 = puVar2;
switchD_1000b9cdc_caseD_18:
  unaff_x27 = *(long *)(puVar2 + -8);
  unaff_x22 = &stack0x00000000 + -(*(long *)(unaff_x27 + 0x40) + 0xfU & 0xfffffffffffffff0);
switchD_1000b9cdc_caseD_20:
  unaff_x25 = *(undefined **)(unaff_x20 + 0x18);
  unaff_x26 = *(undefined **)(unaff_x20 + 0x20);
switchD_1000b9cdc_caseD_cc:
  FUN_10000eba0();
  puVar2 = unaff_x20;
switchD_1000b9cdc_caseD_28:
  FUN_1000bd330();
  param_3 = puVar2;
switchD_1000b9cdc_caseD_38:
  puVar2 = &DAT_1000fbc30;
switchD_1000b9cdc_caseD_40:
  param_5 = unaff_x26;
  param_4 = unaff_x25;
  puVar6 = unaff_x22;
  puVar5 = puVar2;
  unaff_x22 = puVar6;
switchD_1000b9cdc_caseD_a4:
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar6,puVar2,puVar5,param_3,param_4,param_5);
  puVar6 = (undefined *)(ulong)*unaff_x23;
switchD_1000b9cdc_caseD_48:
  *(char *)(unaff_x29 + -0x60) = (char)puVar6;
  *(undefined1 *)(unaff_x29 + -0x41) = 0;
switchD_1000b9cdc_caseD_a5:
  FUN_1000bd370();
  param_4 = &DAT_1000fba80;
  param_5 = puVar2;
switchD_1000b9cdc_caseD_50:
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (unaff_x29 + -0x60,unaff_x29 + -0x41,unaff_x19,param_4,param_5);
  unaff_x21 = unaff_x24;
switchD_1000b9cdc_caseD_58:
  param_3 = unaff_x19;
  puVar5 = param_3;
  puVar2 = unaff_x22;
  if (unaff_x21 == 0) {
    puVar2 = (undefined *)(ulong)unaff_x23[1];
    *(undefined1 *)(unaff_x29 + -0x60) = 1;
    puVar5 = (undefined *)(unaff_x29 + -0x60);
    unaff_x21 = 0;
    unaff_x19 = param_3;
switchD_1000b9cdc_caseD_60:
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(puVar2,puVar5,param_3);
    puVar5 = unaff_x19;
    puVar2 = unaff_x22;
    if (unaff_x21 != 0) goto LAB_1000ba050;
    puVar2 = *(undefined **)(unaff_x23 + 8);
    puVar5 = *(undefined **)(unaff_x23 + 0x10);
    *(undefined1 *)(unaff_x29 + -0x60) = 2;
    unaff_x21 = 0;
switchD_1000b9cdc_caseD_68:
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (puVar2,puVar5,unaff_x29 + -0x60,unaff_x19);
    puVar5 = unaff_x19;
    puVar2 = unaff_x22;
    if (unaff_x21 != 0) goto LAB_1000ba050;
    puVar2 = (undefined *)(ulong)unaff_x23[0x18];
    unaff_x21 = 0;
switchD_1000b9cdc_caseD_70:
    *(undefined1 *)(unaff_x29 + -0x60) = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(puVar2,unaff_x29 + -0x60,unaff_x19);
switchD_1000b9cdc_caseD_78:
    puVar5 = unaff_x19;
    puVar2 = unaff_x22;
    if (unaff_x21 != 0) goto LAB_1000ba050;
    puVar2 = (undefined *)(ulong)unaff_x23[0x19];
    unaff_x21 = 0;
switchD_1000b9cdc_caseD_b9:
    *(undefined1 *)(unaff_x29 + -0x60) = 4;
    puVar5 = (undefined *)(unaff_x29 + -0x60);
switchD_1000b9cdc_caseD_90:
    param_3 = unaff_x19;
    unaff_x19 = param_3;
switchD_1000b9cdc_caseD_98:
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(puVar2,puVar5,param_3);
switchD_1000b9cdc_caseD_e1:
    puVar3 = puVar2;
    unaff_x24 = unaff_x21;
switchD_1000b9cdc_caseD_b8:
    param_3 = unaff_x19;
    puVar5 = param_3;
    puVar2 = unaff_x22;
    if (unaff_x21 != 0) goto LAB_1000ba050;
    *(byte *)(unaff_x29 + -0x60) = unaff_x23[0x1a];
    *(undefined1 *)(unaff_x29 + -0x41) = 5;
    FUN_1000bd3b0();
    param_4 = &DAT_1000fbb10;
    puVar2 = (undefined *)(unaff_x29 + -0x60);
    puVar5 = (undefined *)(unaff_x29 + -0x41);
    param_5 = puVar3;
    unaff_x19 = param_3;
switchD_1000b9cdc_caseD_ba:
    unaff_x21 = unaff_x24;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (puVar2,puVar5,param_3,param_4,param_5);
switchD_1000b9cdc_caseD_bb:
    puVar2 = unaff_x22;
    puVar5 = unaff_x19;
    if (unaff_x21 != 0) goto LAB_1000ba050;
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x23 + 0x20);
    *(undefined1 *)(unaff_x29 + -0x41) = 6;
    puVar3 = &DAT_100105238;
    FUN_10000eb08(&DAT_100105238,&BYTE_1000d6eb0);
    puVar6 = puVar3;
    FUN_1000bd3f0();
    lVar4 = unaff_x29 + -0x60;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (lVar4,unaff_x29 + -0x41,puVar5,puVar3,puVar6);
    uVar8 = *(undefined8 *)(unaff_x23 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x23 + 0x30);
    *(undefined8 *)(unaff_x29 + -0x60) = uVar8;
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x23 + 0x38);
    *(undefined1 *)(unaff_x29 + -0x41) = 7;
    FUN_1000bd460();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (unaff_x29 + -0x60,unaff_x29 + -0x41,puVar5,&DAT_1000fb958,lVar4);
    uVar8 = *(undefined8 *)(unaff_x23 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x48);
    *(undefined1 *)(unaff_x29 + -0x60) = 8;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (uVar8,uVar1,unaff_x29 + -0x60,puVar5);
    uVar8 = *(undefined8 *)(unaff_x23 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x58);
    *(undefined1 *)(unaff_x29 + -0x60) = 9;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (uVar8,uVar1,unaff_x29 + -0x60,puVar5);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x23 + 0x60);
    *(undefined1 *)(unaff_x29 + -0x41) = 10;
    puVar3 = &DAT_100105198;
    FUN_10000eb08(&DAT_100105198,&BYTE_1000d6e48);
    puVar6 = &DAT_1001051a0;
    FUN_1000c02c8(&DAT_1001051a0,PTR___sSSSEsWP_1000f0300,PTR___sSayxGSEsSERzlMc_1000f0370);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (unaff_x29 + -0x60,unaff_x29 + -0x41,puVar5,puVar3,puVar6);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x23 + 0x68);
    *(undefined1 *)(unaff_x29 + -0x41) = 0xb;
    puVar3 = &DAT_100105250;
    FUN_10000eb08(&DAT_100105250,&BYTE_1000d6eb8);
    puVar6 = &DAT_100105258;
    FUN_1000c0330(&DAT_100105258,PTR___sSSSEsWP_1000f0300,PTR___sSDyxq_GSEsSERzSER_rlMc_1000f02e0);
    lVar4 = unaff_x29 + -0x60;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (lVar4,unaff_x29 + -0x41,puVar5,puVar3,puVar6);
    uVar8 = *(undefined8 *)(unaff_x23 + 0x70);
    *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x23 + 0x78);
    *(undefined8 *)(unaff_x29 + -0x60) = uVar8;
    *(byte *)(unaff_x29 + -0x50) = unaff_x23[0x80];
    *(undefined1 *)(unaff_x29 + -0x41) = 0xc;
    FUN_1000bd4a0();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (unaff_x29 + -0x60,unaff_x29 + -0x41,puVar5,&DAT_1000fbba0,lVar4);
    uVar8 = *(undefined8 *)(unaff_x23 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x90);
    *(undefined1 *)(unaff_x29 + -0x60) = 0xd;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (uVar8,uVar1,unaff_x29 + -0x60,puVar5);
    uVar8 = *(undefined8 *)(unaff_x23 + 0x98);
    uVar1 = *(undefined8 *)(unaff_x23 + 0xa0);
    *(undefined1 *)(unaff_x29 + -0x60) = 0xe;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (uVar8,uVar1,unaff_x29 + -0x60,puVar5);
    (**(code **)(unaff_x27 + 8))(puVar2,puVar5);
  }
  else {
LAB_1000ba050:
    (**(code **)(unaff_x27 + 8))(puVar2,puVar5);
  }
switchD_1000b9cdc_caseD_80:
switchD_1000b9cdc_caseD_88:
  auVar25._8_8_ = puVar5;
  auVar25._0_8_ = puVar2;
  return auVar25;
}

