// rea decompile_all
// name: FUN_1005fe804
// address: 0x1005fe804
// body: available
// range: 0x1005fe804-0x1005fe9e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1005fe804(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  char *pcVar8;
  long extraout_x8;
  undefined *unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x22;
  undefined4 *unaff_x23;
  long unaff_x27;
  undefined8 *unaff_x29;
  undefined8 *puVar9;
  undefined8 unaff_x30;
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
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 auStack_10 [15];
  undefined1 uStack_1;
  
  uVar7 = 0xe300000000000000;
  puVar4 = (undefined1 *)0x737066;
  pcVar8 = (char *)(param_1 & 0xff);
  puVar9 = unaff_x29;
  switch(pcVar8) {
  case (char *)0x0:
    goto switchD_1005fe82c_caseD_0;
  default:
    uVar7 = 0x696c;
  case (char *)0x60:
  case (char *)0x6e:
  case (char *)0x88:
  case (char *)0x96:
  case (char *)0xb0:
  case (char *)0xbe:
  case (char *)0xd8:
  case (char *)0xe6:
    uVar7 = uVar7 & 0xffffffffffff | 0xec00000079740000;
switchD_1005fe82c_caseD_5e:
    puVar4 = (undefined1 *)0x617551656d617266;
switchD_1005fe82c_caseD_24:
    auVar10._8_8_ = uVar7;
    auVar10._0_8_ = puVar4;
    return auVar10;
  case (char *)0x2:
  case (char *)0x50:
    puVar4 = &DAT_d000000000000010;
    pcVar8 = "autoFrameQuality";
    goto LAB_1005fe990;
  case (char *)0x3:
  case (char *)0x7c:
    uVar7 = 0xe800000000000000;
    puVar4 = (undefined1 *)0x6e6565726373;
  case (char *)0x21:
    auVar16._0_8_ = (ulong)puVar4 | 0x4449000000000000;
    auVar16._8_8_ = uVar7;
    return auVar16;
  case (char *)0x4:
    uVar7 = 0xef68746469576e6f;
    break;
  case (char *)0x5:
    puVar4 = &DAT_d000000000000010;
  case (char *)0x90:
    pcVar8 = "resolutionHeight";
LAB_1005fe990:
    auVar18._8_8_ = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    auVar18._0_8_ = puVar4;
    return auVar18;
  case (char *)0x6:
    puVar4 = &DAT_d000000000000010;
    pcVar8 = "maxCustomBitrate";
    goto LAB_1005fe990;
  case (char *)0x7:
    uVar7 = 0xe800000000000000;
    uVar5 = 0x53697064;
    goto LAB_1005fe9b4;
  case (char *)0x8:
  case (char *)0x51:
  case (char *)0x54:
  case (char *)0x65:
  case (char *)0x79:
  case (char *)0x8d:
    uVar7 = 0xee00657079546e6f;
    break;
  case (char *)0x9:
    uVar7 = 0xe900000000000065;
  case (char *)0x20:
  case (char *)0xc4:
    puVar4 = (undefined1 *)0x6f63;
switchD_1005fe82c_caseD_76:
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffffffff0000ffff | 0x7079546365640000);
switchD_1005fe82c_caseD_a4:
    auVar14._8_8_ = uVar7;
    auVar14._0_8_ = puVar4;
    return auVar14;
  case (char *)0xa:
  case (char *)0x19:
  case (char *)0x29:
  case (char *)0x31:
  case (char *)0x39:
  case (char *)0x41:
  case (char *)0x49:
    uVar7 = 0xed00006874646957;
    goto LAB_1005fe9ac;
  case (char *)0xb:
    uVar7 = 0x6548;
  case (char *)0x52:
  case (char *)0x66:
  case (char *)0x78:
  case (char *)0x7a:
  case (char *)0x8e:
  case (char *)0xa2:
  case (char *)0xb6:
  case (char *)0xca:
  case (char *)0xde:
  case (char *)0xf2:
    uVar7 = uVar7 & 0xffffffffffff | 0xee00746867690000;
LAB_1005fe9ac:
    puVar4 = (undefined1 *)0x616d;
switchD_1005fe82c_caseD_28:
    uVar5 = (ulong)puVar4 & 0xffffffff0000ffff | 0x53780000;
LAB_1005fe9b4:
    puVar4 = (undefined1 *)(uVar5 | 0x616300000000);
switchD_1005fe82c_caseD_18:
    puVar4 = (undefined1 *)((ulong)puVar4 | 0x656c000000000000);
switchD_1005fe82c_caseD_a1:
    auVar19._8_8_ = uVar7;
    auVar19._0_8_ = puVar4;
    return auVar19;
  case (char *)0xc:
    pcVar8 = "resolutionPixelWidth";
  case (char *)0xb8:
    pcVar8 = pcVar8 + -0x20;
switchD_1005fe82c_caseD_64:
    auVar13._8_8_ = (ulong)pcVar8 | 0x8000000000000000;
    auVar13._0_8_ = 0xd000000000000014;
    return auVar13;
  case (char *)0xd:
    auVar17._8_8_ = 0x800000010089aa90;
    auVar17._0_8_ = 0xd000000000000015;
    return auVar17;
  case (char *)0xe:
  case (char *)0x68:
    auVar12._8_8_ = 0xec00000074616d72;
    auVar12._0_8_ = 0x6f46616d726f6863;
    return auVar12;
  case (char *)0xf:
    auVar15._8_8_ = 0xe800000000000000;
    auVar15._0_8_ = 0x746e756f43737066;
    return auVar15;
  case (char *)0x10:
  case (char *)0xcc:
    uVar7 = 0x6f69;
  case (char *)0x2c:
    uVar7 = uVar7 | 0x6e0000;
switchD_1005fe82c_caseD_1a:
    uVar7 = uVar7 & 0xffffffffffff | 0xeb00000000000000;
switchD_1005fe82c_caseD_56:
    puVar4 = (undefined1 *)0x726f;
switchD_1005fe82c_caseD_1c:
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffffffff0000ffff | 0x65690000);
switchD_1005fe82c_caseD_8c:
    puVar4 = (undefined1 *)((ulong)puVar4 | 0x7461746e00000000);
switchD_1005fe82c_caseD_0:
    auVar11._8_8_ = uVar7;
    auVar11._0_8_ = puVar4;
    return auVar11;
  case (char *)0x18:
  case (char *)0x30:
  case (char *)0x38:
    goto switchD_1005fe82c_caseD_18;
  case (char *)0x1a:
  case (char *)0x22:
  case (char *)0x2a:
  case (char *)0x32:
  case (char *)0x3a:
  case (char *)0x42:
  case (char *)0x4a:
    goto switchD_1005fe82c_caseD_1a;
  case (char *)0x1c:
  case (char *)0x3c:
  case (char *)0x44:
  case (char *)0x4c:
    goto switchD_1005fe82c_caseD_1c;
  case (char *)0x24:
  case (char *)0x34:
    goto switchD_1005fe82c_caseD_24;
  case (char *)0x28:
    goto switchD_1005fe82c_caseD_28;
  case (char *)0x40:
    break;
  case (char *)0x48:
  case (char *)0x69:
  case (char *)0x91:
    FUN_1005fe804();
    auVar21._8_8_ = uVar7;
    auVar21._0_8_ = puVar4;
    return auVar21;
  case (char *)0x55:
  case (char *)0x7d:
  case (char *)0xa5:
  case (char *)0xcd:
    goto switchD_1005fe82c_caseD_55;
  case (char *)0x56:
  case (char *)0x7e:
  case (char *)0xa6:
  case (char *)0xce:
  case (char *)0xf6:
    goto switchD_1005fe82c_caseD_56;
  case (char *)0x5e:
  case (char *)0x86:
  case (char *)0xae:
  case (char *)0xd6:
  case (char *)0xfe:
    goto switchD_1005fe82c_caseD_5e;
  case (char *)0x64:
    goto switchD_1005fe82c_caseD_64;
  case (char *)0x6a:
  case (char *)0x92:
  case (char *)0xba:
  case (char *)0xe2:
    goto switchD_1005fe82c_caseD_6a;
  case (char *)0x6b:
  case (char *)0x93:
  case (char *)0xbb:
  case (char *)0xe3:
    goto switchD_1005fe82c_caseD_6b;
  case (char *)0x74:
    FUN_100600530();
    __ss9CodingKeyPsE16debugDescriptionSSvg();
    auVar23._8_8_ = puVar4;
    auVar23._0_8_ = unaff_x19;
    return auVar23;
  case (char *)0x75:
  case (char *)0x9d:
    goto switchD_1005fe82c_caseD_75;
  case (char *)0x76:
  case (char *)0x9e:
  case (char *)0xc6:
  case (char *)0xee:
    goto switchD_1005fe82c_caseD_76;
  case (char *)0x8c:
    goto switchD_1005fe82c_caseD_8c;
  case (char *)0x9c:
    goto switchD_1005fe82c_caseD_9c;
  case (char *)0xa0:
    goto switchD_1005fe82c_caseD_a0;
  case (char *)0xa1:
  case (char *)0xb5:
  case (char *)0xc9:
  case (char *)0xdd:
  case (char *)0xf1:
    goto switchD_1005fe82c_caseD_a1;
  case (char *)0xa4:
    goto switchD_1005fe82c_caseD_a4;
  case (char *)0xb4:
    goto switchD_1005fe82c_caseD_b4;
  case (char *)0xb9:
  case (char *)0xe1:
    FUN_1006005b0();
    *unaff_x19 = (char)puVar4;
    auVar22._8_8_ = uVar7;
    auVar22._0_8_ = puVar4;
    return auVar22;
  case (char *)0xc5:
  case (char *)0xed:
    goto switchD_1005fe82c_caseD_c5;
  case (char *)0xc8:
    goto switchD_1005fe82c_caseD_c8;
  case (char *)0xdc:
switchD_1005fe82c_caseD_dc:
    param_3 = unaff_x19;
    puVar4 = (undefined1 *)(ulong)(uint)unaff_x23[1];
    *(undefined1 *)((long)puVar9 + -0x41) = 1;
    uVar7 = (long)puVar9 - 0x41;
    unaff_x19 = param_3;
switchD_1005fe82c_caseD_75:
switchD_1005fe82c_caseD_c5:
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(puVar4,uVar7,param_3);
    param_3 = unaff_x19;
    if (unaff_x21 == 0) {
      puVar4 = (undefined1 *)(ulong)(uint)unaff_x23[2];
      *(undefined1 *)((long)puVar9 + -0x41) = 2;
      uVar7 = (long)puVar9 - 0x41;
switchD_1005fe82c_caseD_c8:
      param_3 = unaff_x19;
      __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(puVar4,uVar7,param_3);
      if (unaff_x21 == 0) {
        puVar4 = (undefined1 *)(ulong)(uint)unaff_x23[3];
        *(undefined1 *)((long)puVar9 + -0x41) = 3;
        uVar7 = (long)puVar9 - 0x41;
        unaff_x19 = param_3;
switchD_1005fe82c_caseD_f5:
switchD_1005fe82c_caseD_55:
        __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(puVar4,uVar7,param_3);
switchD_1005fe82c_caseD_9c:
        param_3 = unaff_x19;
        if (unaff_x21 == 0) {
switchD_1005fe82c_caseD_b4:
          param_3 = unaff_x19;
          puVar4 = (undefined1 *)(ulong)(uint)unaff_x23[4];
          *(undefined1 *)((long)puVar9 + -0x41) = 4;
          uVar7 = (long)puVar9 - 0x41;
          unaff_x19 = param_3;
switchD_1005fe82c_caseD_6a:
          __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(puVar4,uVar7,param_3);
          param_3 = unaff_x19;
          if (unaff_x21 == 0) {
            puVar4 = (undefined1 *)(ulong)(uint)unaff_x23[5];
            *(undefined1 *)((long)puVar9 + -0x41) = 5;
            uVar7 = (long)puVar9 - 0x41;
switchD_1005fe82c_caseD_a0:
            __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(puVar4,uVar7,unaff_x19);
            param_3 = unaff_x19;
            if (unaff_x21 == 0) {
              uVar1 = unaff_x23[6];
              *(undefined1 *)((long)puVar9 + -0x41) = 6;
              __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
                        (uVar1,(long)puVar9 + -0x41,unaff_x19);
              uVar1 = unaff_x23[7];
              *(undefined1 *)((long)puVar9 + -0x41) = 7;
              __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
                        (uVar1,(long)puVar9 + -0x41,unaff_x19);
              uVar1 = unaff_x23[8];
              *(undefined1 *)((long)puVar9 + -0x41) = 8;
              __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
                        (uVar1,(long)puVar9 + -0x41,unaff_x19);
switchD_1005fe82c_caseD_f4:
              param_3 = unaff_x19;
              if (unaff_x21 == 0) {
                uVar1 = unaff_x23[9];
                *(undefined1 *)((long)puVar9 + -0x41) = 9;
                __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
                          (uVar1,(long)puVar9 + -0x41,unaff_x19);
                uVar1 = unaff_x23[10];
                *(undefined1 *)((long)puVar9 + -0x41) = 10;
                __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
                          (uVar1,(long)puVar9 + -0x41,unaff_x19);
                uVar1 = unaff_x23[0xb];
                *(undefined1 *)((long)puVar9 + -0x41) = 0xb;
                __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
                          (uVar1,(long)puVar9 + -0x41,unaff_x19);
                uVar1 = unaff_x23[0xc];
                *(undefined1 *)((long)puVar9 + -0x41) = 0xc;
                __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
                          (uVar1,(long)puVar9 + -0x41,unaff_x19);
                uVar1 = unaff_x23[0xd];
                *(undefined1 *)((long)puVar9 + -0x41) = 0xd;
                __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
                          (uVar1,(long)puVar9 + -0x41,unaff_x19);
                uVar1 = unaff_x23[0xe];
                *(undefined1 *)((long)puVar9 + -0x41) = 0xe;
                __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
                          (uVar1,(long)puVar9 + -0x41,unaff_x19);
                uVar7 = (ulong)(uint)unaff_x23[0xf];
                *(undefined1 *)((long)puVar9 + -0x41) = 0xf;
                __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
                          (uVar7,(long)puVar9 + -0x41,unaff_x19);
                *(undefined1 *)((long)puVar9 + -0x41) = *(undefined1 *)(unaff_x23 + 0x10);
                *(undefined1 *)((long)puVar9 + -0x42) = 0x10;
                FUN_100600570();
                __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
                          ((long)puVar9 + -0x41,(long)puVar9 + -0x42,unaff_x19,&DAT_1009dd518,uVar7)
                ;
                (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
                goto LAB_1005fec38;
              }
            }
          }
        }
      }
    }
LAB_1005fec24:
    pcVar8 = *(char **)(unaff_x27 + 8);
    unaff_x19 = param_3;
switchD_1005fe82c_caseD_6b:
    (*(code *)pcVar8)(unaff_x22,unaff_x19);
LAB_1005fec38:
    auVar25._8_8_ = unaff_x19;
    auVar25._0_8_ = unaff_x22;
    return auVar25;
  case (char *)0xe0:
    goto switchD_1005fe82c_caseD_e0;
  case (char *)0xec:
    puVar6 = puVar4;
    FUN_100600530(0x737066,0xe300000000000000);
    __ss9CodingKeyPsE11descriptionSSvg(0x737066,puVar6);
    auVar24._8_8_ = puVar6;
    auVar24._0_8_ = puVar4;
    return auVar24;
  case (char *)0xf0:
    puVar9 = &stack0x00000040;
    unaff_x19 = &DAT_100aaf988;
    in_stack_00000040 = unaff_x29;
    in_stack_00000048 = unaff_x30;
    FUN_100004bb4(&DAT_100aaf988,&BYTE_1008473c0);
    unaff_x27 = *(long *)(unaff_x19 + -8);
    (*(code *)PTR____chkstk_darwin_100995498)
              (*(long *)(unaff_x27 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar3 = _DAT_00737086;
    uVar2 = _DAT_0073707e;
    unaff_x22 = auStack_10 + -extraout_x8;
    FUN_10003f030(0x737066,_DAT_0073707e);
    FUN_100600530();
    __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
              (unaff_x22,&DAT_1009dd6d0,&DAT_1009dd6d0,puVar4,uVar2,uVar3);
    uStack_1 = 0;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(*unaff_x20,&uStack_1,unaff_x19);
    param_3 = unaff_x19;
    unaff_x23 = unaff_x20;
    if (unaff_x21 == 0) goto switchD_1005fe82c_caseD_dc;
    goto LAB_1005fec24;
  case (char *)0xf4:
    goto switchD_1005fe82c_caseD_f4;
  case (char *)0xf5:
    goto switchD_1005fe82c_caseD_f5;
  }
  puVar4 = (undefined1 *)0x6974756c6f736572;
switchD_1005fe82c_caseD_e0:
  auVar20._8_8_ = uVar7;
  auVar20._0_8_ = puVar4;
  return auVar20;
}

