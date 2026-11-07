// rea decompile_all
// name: FUN_100415abc
// address: 0x100415abc
// body: available
// range: 0x100415abc-0x100415c6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_100415abc(ulong param_1,undefined8 param_2,byte *param_3,byte *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  byte *pbVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  char *pcVar7;
  long extraout_x8;
  byte *unaff_x19;
  byte *pbVar8;
  byte *unaff_x20;
  byte *unaff_x21;
  long lVar9;
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
  
  pbVar6 = &DAT_ea0000000000626d;
  pbVar3 = &DAT_5f6c617574726976;
  pcVar7 = (char *)(param_1 & 0xff);
  pbVar8 = pbVar3;
  switch(pcVar7) {
  case (char *)0x0:
    goto switchD_100415af0_caseD_0;
  default:
    pbVar3 = (byte *)0x6572;
  case (char *)0x30:
  case (char *)0x3e:
  case (char *)0x58:
  case (char *)0x66:
  case (char *)0xb4:
  case (char *)0xc2:
  case (char *)0xdc:
  case (char *)0xea:
    pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffff0000ffff | 0x69730000);
    goto switchD_100415af0_caseD_e5;
  case (char *)0x2:
    pbVar6 = (byte *)0x626d5f74;
  case (char *)0xbc:
    pbVar6 = (byte *)((ulong)pbVar6 & 0xffffffffffff | 0xec00000000000000);
    pbVar3 = (byte *)0x746f6f66;
switchD_100415af0_caseD_46:
    auVar13._0_8_ = (ulong)pbVar3 & 0xffffffff | 0x6e69727000000000;
    auVar13._8_8_ = pbVar6;
    return auVar13;
  case (char *)0x3:
    pbVar3 = (byte *)0x65746e69;
  case (char *)0xf0:
    pbVar3 = (byte *)((ulong)pbVar3 & 0xffff0000ffffffff | 0x6e7200000000);
    goto switchD_100415af0_caseD_b8;
  case (char *)0x4:
    pbVar3 = (byte *)0x6c616e7265747865;
    break;
  case (char *)0x5:
    pbVar6 = (byte *)0xe900000000000062;
  case (char *)0xa4:
    auVar15._8_8_ = pbVar6;
    auVar15._0_8_ = 0x6d5f656369766564;
    return auVar15;
  case (char *)0x6:
    pbVar6 = (byte *)0x6d5f6465;
  case (char *)0x9f:
    pbVar6 = (byte *)((ulong)pbVar6 & 0xffffffffffff | 0xed00006200000000);
switchD_100415af0_caseD_80:
    auVar17._8_8_ = pbVar6;
    auVar17._0_8_ = 0x73736572706d6f63;
    return auVar17;
  case (char *)0x7:
    pcVar7 = "pen [%s], flag %x, %d(%s)";
  case (char *)0xf8:
    auVar14._8_8_ = (ulong)(pcVar7 + 0xdc0) | 0x8000000000000000;
    auVar14._0_8_ = 0xd000000000000015;
    return auVar14;
  case (char *)0x8:
    pbVar3 = (byte *)0x7363696870617267;
    break;
  case (char *)0x9:
    pbVar6 = (byte *)0xe800000000000000;
    pbVar3 = (byte *)0x626d5f616964656d;
  case (char *)0xcc:
    auVar12._8_8_ = pbVar6;
    auVar12._0_8_ = pbVar3;
    return auVar12;
  case (char *)0xa:
    pbVar3 = (byte *)0x726f7774656e;
  case (char *)0x74:
  case (char *)0x75:
    auVar18._0_8_ = (ulong)pbVar3 & 0xffffffffffff | 0x5f6b000000000000;
    auVar18._8_8_ = &DAT_ea0000000000626d;
    return auVar18;
  case (char *)0xb:
    pbVar3 = (byte *)0x6e6f69676572;
    goto switchD_100415af0_caseD_1a;
  case (char *)0xc:
    pbVar6 = (byte *)0x6f697373;
  case (char *)0x22:
  case (char *)0x36:
  case (char *)0x4a:
  case (char *)0x5e:
  case (char *)0xa6:
  case (char *)0xba:
  case (char *)0xce:
  case (char *)0xe0:
  case (char *)0xe2:
  case (char *)0xf6:
    pbVar6 = (byte *)((ulong)pbVar6 & 0xffffffffffff | 0xee00736e00000000);
    pbVar3 = (byte *)0x706d6f636564;
switchD_100415af0_caseD_19:
    auVar11._0_8_ = (ulong)pbVar3 & 0xffffffffffff | 0x6572000000000000;
    auVar11._8_8_ = pbVar6;
    return auVar11;
  case (char *)0xd:
    pbVar3 = (byte *)0x12;
  case (char *)0x76:
  case (char *)0x99:
    pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffffffff | 0xd000000000000000);
switchD_100415af0_caseD_8d:
    auVar16._8_8_ = 0x80000001008afe20;
    auVar16._0_8_ = pbVar3;
    return auVar16;
  case (char *)0xe:
    pbVar3 = (byte *)0x6874;
  case (char *)0x39:
    pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffff0000ffff | 0x65720000);
    goto switchD_100415af0_caseD_61;
  case (char *)0x18:
    auVar26._8_8_ = &DAT_ea0000000000626d;
    auVar26._0_8_ = &DAT_5f6c617574726976;
    return auVar26;
  case (char *)0x19:
    goto switchD_100415af0_caseD_19;
  case (char *)0x1a:
  case (char *)0x1c:
    goto switchD_100415af0_caseD_1a;
  case (char *)0x20:
    __sSS4hash4intoys6HasherVz_tF(&DAT_5f6c617574726976,param_3);
    _swift_bridgeObjectRelease();
    auVar22._8_8_ = param_3;
    auVar22._0_8_ = unaff_x20;
    return auVar22;
  case (char *)0x21:
  case (char *)0x35:
  case (char *)0x49:
  case (char *)0x5d:
  case (char *)0xa5:
  case (char *)0xb9:
  case (char *)0xcd:
  case (char *)0xe1:
  case (char *)0xf5:
    goto switchD_100415af0_caseD_21;
  case (char *)0x24:
    *pcVar7 = -0x30;
    auVar27._8_8_ = &DAT_ea0000000000626d;
    auVar27._0_8_ = &DAT_5f6c617574726976;
    return auVar27;
  case (char *)0x25:
  case (char *)0x48:
  case (char *)0x4d:
  case (char *)0xa9:
  case (char *)0xd1:
  case (char *)0xf9:
    goto switchD_100415af0_caseD_25;
  case (char *)0x26:
  case (char *)0x4e:
  case (char *)0xaa:
  case (char *)0xd2:
  case (char *)0xf4:
  case (char *)0xfa:
    goto switchD_100415af0_caseD_26;
  case (char *)0x2e:
  case (char *)0x56:
  case (char *)0xb2:
  case (char *)0xbd:
  case (char *)0xda:
    goto switchD_100415af0_caseD_2e;
  case (char *)0x34:
    goto switchD_100415af0_caseD_34;
  case (char *)0x38:
    goto switchD_100415af0_caseD_38;
  case (char *)0x3a:
  case (char *)0x62:
  case (char *)0xbe:
  case (char *)0xe6:
    pbVar3 = (byte *)CONCAT71(uRam5f6c617574726977,DAT_5f6c617574726976);
    pbVar6 = _DAT_5f6c61757472697e;
    FUN_100416558(pbVar3,_DAT_5f6c61757472697e);
    *pcVar7 = (char)pbVar3;
    goto switchD_100415af0_caseD_38;
  case (char *)0x3b:
  case (char *)0x63:
  case (char *)0xbf:
  case (char *)0xe7:
    puVar4 = &DAT_100a8e668;
    FUN_100004bb4(&DAT_100a8e668,&BYTE_100825ae8);
    lVar9 = *(long *)(puVar4 + -8);
    (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar2 = uRam5f6c617574726996;
    uVar1 = uRam5f6c61757472698e;
    puVar5 = &stack0xfffffffffffffff0 + -extraout_x8;
    FUN_10003f030(&DAT_5f6c617574726976,uRam5f6c61757472698e);
    FUN_100416518();
    __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
              (puVar5,&DAT_1009bd380,&DAT_1009bd380,pbVar3,uVar1,uVar2);
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
              (*(undefined8 *)unaff_x20,&stack0xffffffffffffffff,puVar4);
    if (unaff_x21 == (byte *)0x0) {
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (*(undefined8 *)(unaff_x20 + 8),&stack0xfffffffffffffffe,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (*(undefined8 *)(unaff_x20 + 0x10),&stack0xfffffffffffffffd,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (*(undefined8 *)(unaff_x20 + 0x18),&stack0xfffffffffffffffc,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (*(undefined8 *)(unaff_x20 + 0x20),&stack0xfffffffffffffffb,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (*(undefined8 *)(unaff_x20 + 0x28),&stack0xfffffffffffffffa,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (*(undefined8 *)(unaff_x20 + 0x30),&stack0xfffffffffffffff9,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (*(undefined8 *)(unaff_x20 + 0x38),&stack0xfffffffffffffff8,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (*(undefined8 *)(unaff_x20 + 0x40),&stack0xfffffffffffffff7,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (*(undefined8 *)(unaff_x20 + 0x48),&stack0xfffffffffffffff6,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (*(undefined8 *)(unaff_x20 + 0x50),&stack0xfffffffffffffff5,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
                (*(undefined8 *)(unaff_x20 + 0x58),&stack0xfffffffffffffff4,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
                (*(undefined8 *)(unaff_x20 + 0x60),&stack0xfffffffffffffff3,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                (*(undefined8 *)(unaff_x20 + 0x68),&stack0xfffffffffffffff2,puVar4);
      __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
                (*(undefined8 *)(unaff_x20 + 0x70),&stack0xfffffffffffffff1,puVar4);
      (**(code **)(lVar9 + 8))(puVar5,puVar4);
    }
    else {
      (**(code **)(lVar9 + 8))(puVar5,puVar4);
    }
    auVar28._8_8_ = puVar4;
    auVar28._0_8_ = puVar5;
    return auVar28;
  case (char *)0x44:
  case (char *)0xd0:
    goto switchD_100415af0_caseD_44;
  case (char *)0x45:
  case (char *)0x6d:
  case (char *)0x78:
  case (char *)0x79:
  case (char *)0x82:
  case (char *)0xc9:
    goto switchD_100415af0_caseD_45;
  case (char *)0x46:
  case (char *)0x6e:
  case (char *)0xca:
  case (char *)0xf2:
    goto switchD_100415af0_caseD_46;
  case (char *)0x4c:
    goto switchD_100415af0_caseD_4c;
  case (char *)0x5c:
    goto switchD_100415af0_caseD_5c;
  case (char *)0x60:
    goto switchD_100415af0_caseD_60;
  case (char *)0x61:
    goto switchD_100415af0_caseD_61;
  case (char *)0x6c:
    __sSS4hash4intoys6HasherVz_tF(&DAT_5f6c617574726976,param_3);
    _swift_bridgeObjectRelease();
    __ss6HasherV9_finalizeSiyF();
    pbVar3 = unaff_x19;
    pbVar6 = param_3;
    goto switchD_100415af0_caseD_4c;
  case (char *)0x77:
  case (char *)0x7a:
  case (char *)0x83:
  case (char *)0x87:
  case (char *)0x8b:
  case (char *)0x92:
  case (char *)0x9a:
    goto switchD_100415af0_caseD_77;
  case (char *)0x7b:
  case (char *)0x88:
  case (char *)0x91:
  case (char *)0x9d:
  case (char *)0xf1:
    goto switchD_100415af0_caseD_7b;
  case (char *)0x80:
  case (char *)0x86:
    goto switchD_100415af0_caseD_80;
  case (char *)0x81:
  case (char *)0xa0:
    goto switchD_100415af0_caseD_81;
  case (char *)0x84:
  case (char *)0x8c:
    goto switchD_100415af0_caseD_84;
  case (char *)0x85:
  case (char *)0xa1:
    goto switchD_100415af0_caseD_85;
  case (char *)0x89:
  case (char *)0x8e:
  case (char *)0x95:
  case (char *)0x9c:
    goto switchD_100415af0_caseD_89;
  case (char *)0x8a:
  case (char *)0x94:
    goto switchD_100415af0_caseD_8a;
  case (char *)0x8d:
    goto switchD_100415af0_caseD_8d;
  case (char *)0x8f:
  case (char *)0x96:
    pbVar3 = (byte *)(ulong)DAT_5f6c617574726976;
switchD_100415af0_caseD_9b:
    unaff_x20 = (byte *)(ulong)DAT_ea0000000000626d;
switchD_100415af0_caseD_81:
    FUN_100415abc();
    unaff_x21 = pbVar3;
switchD_100415af0_caseD_90:
    pbVar3 = unaff_x20;
    unaff_x19 = pbVar6;
switchD_100415af0_caseD_89:
    FUN_100415abc();
    in_ZR = false;
    unaff_x20 = pbVar6;
    if (unaff_x21 == pbVar3) {
      in_ZR = unaff_x19 == pbVar6;
    }
switchD_100415af0_caseD_45:
    pbVar8 = unaff_x19;
    unaff_x19 = pbVar8;
    if ((bool)in_ZR) {
      unaff_x21 = (byte *)0x1;
    }
    else {
switchD_100415af0_caseD_7b:
      param_3 = pbVar3;
switchD_100415af0_caseD_77:
      pbVar3 = unaff_x21;
      param_4 = unaff_x20;
      pbVar6 = unaff_x19;
      unaff_x19 = pbVar6;
      unaff_x20 = param_4;
switchD_100415af0_caseD_84:
      param_5 = 0;
switchD_100415af0_caseD_93:
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (pbVar3,pbVar6,param_3,param_4,param_5);
switchD_100415af0_caseD_8a:
      pbVar8 = unaff_x19;
      unaff_x21 = pbVar3;
    }
    goto switchD_100415af0_caseD_21;
  case (char *)0x90:
  case (char *)0x9e:
    goto switchD_100415af0_caseD_90;
  case (char *)0x93:
  case (char *)0x97:
  case (char *)0xa2:
    goto switchD_100415af0_caseD_93;
  case (char *)0x9b:
    goto switchD_100415af0_caseD_9b;
  case (char *)0xa8:
    pbVar8 = (byte *)(ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(&stack0x00000008,0);
    goto switchD_100415af0_caseD_25;
  case (char *)0xb8:
    goto switchD_100415af0_caseD_b8;
  case (char *)0xc8:
  case (char *)0xe4:
    auVar25._8_8_ = &DAT_ea0000000000626d;
    auVar25._0_8_ = &DAT_5f6c617574726976;
    return auVar25;
  case (char *)0xe5:
    goto switchD_100415af0_caseD_e5;
  }
LAB_100415c60:
  pbVar6 = (byte *)0x6d5f;
switchD_100415af0_caseD_44:
  auVar19._8_8_ = (ulong)pbVar6 & 0xffffffffffff | 0xeb00000000620000;
  auVar19._0_8_ = pbVar3;
  return auVar19;
switchD_100415af0_caseD_21:
  _swift_bridgeObjectRelease(pbVar8);
  goto switchD_100415af0_caseD_85;
switchD_100415af0_caseD_b8:
  pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffffffff | 0x6c61000000000000);
  goto LAB_100415c60;
switchD_100415af0_caseD_e5:
  pbVar3 = (byte *)((ulong)pbVar3 & 0xffff0000ffffffff | 0x656400000000);
switchD_100415af0_caseD_2e:
  pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffffffff | 0x746e000000000000);
switchD_100415af0_caseD_60:
  goto LAB_100415c60;
switchD_100415af0_caseD_4c:
  auVar23._8_8_ = pbVar6;
  auVar23._0_8_ = pbVar3;
  return auVar23;
switchD_100415af0_caseD_38:
  auVar24._8_8_ = pbVar6;
  auVar24._0_8_ = pbVar3;
  return auVar24;
switchD_100415af0_caseD_25:
  pbVar3 = pbVar6;
  FUN_100415abc(pbVar8);
  __sSS4hash4intoys6HasherVz_tF(&stack0x00000008,pbVar8,pbVar3);
  _swift_bridgeObjectRelease(pbVar3);
  __ss6HasherV9_finalizeSiyF();
  pbVar6 = pbVar8;
switchD_100415af0_caseD_34:
  auVar21._8_8_ = pbVar6;
  auVar21._0_8_ = pbVar3;
  return auVar21;
switchD_100415af0_caseD_85:
  _swift_bridgeObjectRelease(unaff_x20);
  pbVar3 = (byte *)(ulong)((uint)unaff_x21 & 1);
switchD_100415af0_caseD_5c:
  auVar20._8_8_ = pbVar6;
  auVar20._0_8_ = pbVar3;
  return auVar20;
switchD_100415af0_caseD_61:
  pbVar3 = (byte *)((ulong)pbVar3 & 0xffff0000ffffffff | 0x646100000000);
switchD_100415af0_caseD_1a:
  pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffffffff | 0x635f000000000000);
switchD_100415af0_caseD_26:
  pbVar6 = (byte *)0xec000000746e756f;
switchD_100415af0_caseD_0:
  auVar10._8_8_ = pbVar6;
  auVar10._0_8_ = pbVar3;
  return auVar10;
}

