// rea decompile_all
// name: FUN_100482a4c
// address: 0x100482a4c
// body: available
// range: 0x100482a4c-0x100482c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100482c10 to 0x100040620 switchD_10004048c::caseD_6d (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100482c44 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
FUN_100482a4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined4 param_10,undefined4 param_11,undefined8 *param_12,
             undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,undefined8 *param_16,
             undefined8 *param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  TargetProtocolConformanceDescriptor *pTVar13;
  undefined8 in_x16;
  undefined8 in_x17;
  undefined8 *puVar14;
  byte *unaff_x22;
  undefined8 *puVar15;
  ulong unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *puVar16;
  undefined8 unaff_x30;
  undefined8 *in_stack_00000100;
  undefined1 auStack_d0 [112];
  
  puVar5 = &stack0xffffffffffffffa0;
  uVar1 = (uint)((ulong)param_14 >> 0x3c) & 3;
  uVar4 = uVar1 | (uint)(byte)param_18 << 2 & 0xff;
  bVar8 = uVar4 == 0xc;
  if (0xc < uVar4) {
switchD_100482ab4_caseD_22:
    return param_1;
  }
  uVar10 = (ulong)(uVar1 | (uint)(byte)param_18 << 2) & 0xff;
  pbVar12 = &switchD_100482ab4::switchdataD_10082db4b;
  pTVar13 = (TargetProtocolConformanceDescriptor *)
            ((ulong)(&switchD_100482ab4::switchdataD_10082db4b)[uVar10] * 4 + 0x100482ab8);
  puVar6 = &stack0xffffffffffffffa0;
  puVar7 = &stack0xffffffffffffffa0;
  puVar9 = param_1;
  puVar14 = param_6;
  puVar15 = param_4;
  puVar16 = (undefined8 *)&stack0xfffffffffffffff0;
  switch(uVar10) {
  case 0:
    param_6 = param_17;
    param_5 = param_16;
    param_4 = param_15;
  case 0xd:
    param_1 = param_2;
    unaff_x26 = param_13;
    unaff_x27 = param_12;
    unaff_x28 = param_8;
switchD_100482ab4_caseD_e:
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
switchD_100482ab4_caseD_18:
    param_1 = unaff_x27;
    _swift_bridgeObjectRelease(param_7);
    FUN_100006cdc(unaff_x28,param_9);
switchD_100482ab4_caseD_55:
    _swift_bridgeObjectRelease(param_1);
switchD_100482ab4_caseD_1e:
    param_1 = unaff_x26;
switchD_100482ab4_caseD_2a:
    param_3 = param_14;
LAB_100482b74:
    FUN_100006cdc(param_1,param_3);
    param_1 = param_4;
    param_2 = param_5;
    param_3 = param_6;
    goto switchD_100482ab4_caseD_a5;
  case 1:
    param_1 = param_2;
  case 0x7a:
    param_14 = param_8;
switchD_100482ab4_caseD_96:
    _swift_bridgeObjectRelease(param_1);
switchD_100482ab4_caseD_1f:
    param_1 = param_3;
switchD_100482ab4_caseD_95:
    FUN_100006cdc(param_1,param_4);
switchD_100482ab4_caseD_35:
    FUN_100006cdc(param_5,param_6);
    param_1 = param_7;
    param_2 = param_14;
    param_3 = param_9;
    goto switchD_100482ab4_caseD_a5;
  case 2:
  case 8:
    goto switchD_100482ab4_caseD_2;
  case 3:
    FUN_100006cdc(param_2,param_3);
    param_1 = param_4;
    param_3 = param_8;
  case 0xda:
switchD_100482ab4_caseD_da:
    param_2 = param_5;
switchD_100482ab4_caseD_3f:
    FUN_100006cdc(param_1,param_2);
    param_1 = param_6;
switchD_100482ab4_caseD_10:
    param_2 = param_7;
switchD_100482ab4_caseD_b1:
switchD_100482ab4_caseD_a5:
switchD_100482ab4_caseD_d1:
    switchD_10004048c::caseD_6d(param_1,param_2,param_3);
    return param_1;
  case 4:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    param_1 = param_5;
    param_2 = param_6;
    goto switchD_100482ab4_caseD_27;
  default:
    param_1 = param_2;
  case 0x4d:
  case 0x5b:
  case 0x77:
  case 0x93:
  case 0xbd:
  case 0xcb:
    _swift_bridgeObjectRelease(param_1);
switchD_100482ab4_caseD_73:
    param_1 = param_3;
switchD_100482ab4_caseD_17:
    param_2 = param_4;
switchD_100482ab4_caseD_91:
switchD_100482ab4_caseD_27:
switchD_100482ab4_caseD_2f:
switchD_100482ab4_caseD_29:
    FUN_100006cdc(param_1,param_2);
    return param_1;
  case 7:
  case 0x11:
    _swift_bridgeObjectRelease(param_2);
    param_3 = param_8;
  case 0xf:
    param_1 = param_4;
    goto switchD_100482ab4_caseD_da;
  case 9:
  case 0x85:
    _swift_bridgeObjectRelease(param_2);
switchD_100482ab4_caseD_2:
    param_1 = param_3;
    param_2 = param_4;
switchD_100482ab4_caseD_89:
    FUN_100006cdc(param_1,param_2);
switchD_100482ab4_caseD_2b:
    param_1 = param_5;
    param_2 = param_6;
    param_3 = param_7;
    goto switchD_100482ab4_caseD_a5;
  case 10:
    _swift_bridgeObjectRelease(param_2);
  case 0x39:
    param_1 = param_3;
switchD_100482ab4_caseD_6d:
    _swift_bridgeObjectRelease(param_1);
    param_1 = param_4;
    param_2 = param_5;
switchD_100482ab4_caseD_37:
    goto switchD_100482ab4_caseD_27;
  case 0xc:
  case 0x62:
  case 0x75:
  case 0x7e:
  case 0x99:
    param_1 = param_2;
  case 0x43:
  case 0x6b:
  case 0x87:
  case 0x9a:
  case 0xa3:
  case 0xb3:
  case 0xd2:
  case 0xdb:
    goto LAB_100482b74;
  case 0xe:
    goto switchD_100482ab4_caseD_e;
  case 0x10:
    goto switchD_100482ab4_caseD_10;
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x23:
  case 0x24:
  case 0x4b:
  case 0xbb:
  case 0xe3:
    goto switchD_100482ab4_caseD_17;
  case 0x18:
    goto switchD_100482ab4_caseD_18;
  case 0x1e:
    goto switchD_100482ab4_caseD_1e;
  case 0x1f:
    goto switchD_100482ab4_caseD_1f;
  case 0x22:
  case 0x61:
    goto switchD_100482ab4_caseD_22;
  case 0x25:
  case 0x30:
    goto switchD_100482ab4_caseD_25;
  case 0x26:
    goto switchD_100482ab4_caseD_26;
  case 0x27:
    goto switchD_100482ab4_caseD_27;
  case 0x28:
    goto switchD_100482ab4_caseD_28;
  case 0x29:
    goto switchD_100482ab4_caseD_29;
  case 0x2a:
    goto switchD_100482ab4_caseD_2a;
  case 0x2b:
    goto switchD_100482ab4_caseD_2b;
  case 0x2c:
  case 0x31:
    goto switchD_100482ab4_caseD_2c;
  case 0x2d:
  case 0x2e:
    goto switchD_100482ab4_caseD_2d;
  case 0x2f:
    goto switchD_100482ab4_caseD_2f;
  case 0x34:
    goto switchD_100482ab4_caseD_34;
  case 0x35:
    goto switchD_100482ab4_caseD_35;
  case 0x36:
    goto switchD_100482ab4_caseD_36;
  case 0x37:
  case 0xef:
    goto switchD_100482ab4_caseD_37;
  case 0x3d:
    puVar16 = &stack0x00000100;
    puVar9 = (undefined8 *)*param_2;
    pTVar13 = (TargetProtocolConformanceDescriptor *)param_2[1];
    param_3 = (undefined8 *)param_2[2];
    param_4 = (undefined8 *)param_2[3];
    param_5 = (undefined8 *)param_2[4];
    param_6 = (undefined8 *)param_2[5];
    unaff_x27 = (undefined8 *)param_2[6];
    unaff_x28 = (undefined8 *)param_2[7];
    pbVar12 = (byte *)param_2[8];
    param_15 = (undefined8 *)param_2[9];
    param_16 = (undefined8 *)param_2[10];
    param_17 = (undefined8 *)param_2[0xb];
    param_18 = param_2[0xc];
    param_19 = param_2[0xd];
    param_20 = param_2[0xe];
    in_x16 = param_2[0xf];
    in_x17 = param_2[0x10];
    puVar14 = (undefined8 *)param_2[0x11];
    param_7 = param_1;
    in_stack_00000100 = (undefined8 *)&stack0xfffffffffffffff0;
switchD_100482ab4_caseD_34:
    puVar16[-0x15] = in_x16;
    puVar16[-0x14] = in_x17;
    uVar11 = param_2[0x12];
    puVar15 = (undefined8 *)param_2[0x13];
    puVar16[-0x13] = puVar14;
    puVar16[-0x12] = uVar11;
switchD_100482ab4_caseD_79:
    uVar11 = param_2[0x14];
    uVar2 = param_2[0x15];
    puVar16[-0x11] = puVar15;
    puVar16[-0x10] = uVar11;
    uVar11 = param_2[0x16];
    unaff_x26 = (undefined8 *)param_2[0x17];
    puVar16[-0xf] = uVar2;
    puVar16[-0xe] = uVar11;
switchD_100482ab4_caseD_d9:
    puVar16[-0xd] = unaff_x26;
    *(uint *)((long)puVar16 + -0x5c) = (uint)*(byte *)(param_2 + 0x18);
switchD_100482ab4_caseD_58:
    FUN_1004812d8(puVar9,pTVar13);
    *param_7 = puVar9;
    param_7[1] = pTVar13;
    param_7[2] = param_3;
    param_7[3] = param_4;
    param_7[4] = param_5;
    param_7[5] = param_6;
    param_7[6] = unaff_x27;
    param_7[7] = unaff_x28;
    param_7[8] = pbVar12;
    param_7[9] = param_15;
    param_7[10] = param_16;
    param_7[0xb] = param_17;
    param_7[0xc] = param_18;
    param_7[0xd] = param_19;
    uVar11 = puVar16[-0x15];
    uVar2 = puVar16[-0x14];
    param_7[0xe] = param_20;
    param_7[0xf] = uVar11;
    uVar11 = puVar16[-0x13];
    uVar3 = puVar16[-0x12];
    param_7[0x10] = uVar2;
    param_7[0x11] = uVar11;
    uVar11 = puVar16[-0x11];
    uVar2 = puVar16[-0x10];
    param_7[0x12] = uVar3;
    param_7[0x13] = uVar11;
    uVar11 = puVar16[-0xf];
    uVar3 = puVar16[-0xe];
    param_7[0x14] = uVar2;
    param_7[0x15] = uVar11;
    uVar11 = puVar16[-0xd];
    param_7[0x16] = uVar3;
    param_7[0x17] = uVar11;
    *(char *)(param_7 + 0x18) = (char)*(undefined4 *)((long)puVar16 + -0x5c);
    return param_7;
  case 0x3e:
  case 0x52:
  case 0x66:
  case 0x82:
  case 0x9e:
  case 0xae:
  case 0xc2:
  case 0xd6:
  case 0xea:
  case 0xf2:
  case 0xfa:
    goto switchD_100482ab4_caseD_3e;
  case 0x3f:
  case 0x42:
  case 0x53:
  case 0x67:
  case 0x6a:
  case 0x6f:
  case 0x83:
  case 0x86:
  case 0x8b:
  case 0x9f:
  case 0xa2:
  case 0xa7:
  case 0xaf:
  case 0xb2:
  case 0xc3:
  case 0xc6:
  case 0xd7:
  case 0xeb:
  case 0xf3:
  case 0xfb:
  case 0xfe:
    goto switchD_100482ab4_caseD_3f;
  case 0x41:
  case 0x7d:
    param_7 = param_6;
    break;
  case 0x51:
    goto switchD_100482ab4_caseD_51;
  case 0x55:
  case 99:
  case 0x7f:
  case 0x9b:
  case 0xa1:
  case 0xd3:
    goto switchD_100482ab4_caseD_55;
  case 0x56:
    goto switchD_100482ab4_caseD_56;
  case 0x57:
    goto switchD_100482ab4_caseD_57;
  case 0x58:
  case 0x7c:
  case 0x98:
  case 200:
  case 0xf8:
    goto switchD_100482ab4_caseD_58;
  case 0x65:
    param_1 = param_3;
    puVar14 = param_5;
    param_5 = param_6;
switchD_100482ab4_caseD_57:
    param_4 = param_7;
switchD_100482ab4_caseD_7b:
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(puVar14);
    FUN_100006cdc(param_5,param_4);
    param_1 = param_8;
switchD_100482ab4_caseD_51:
    break;
  case 0x69:
    pbVar12 = unaff_x22;
switchD_100482ab4_caseD_2c:
    pTVar13 = (TargetProtocolConformanceDescriptor *)((ulong)pbVar12 & 0x3000000000000000);
    uVar10 = unaff_x24;
switchD_100482ab4_caseD_25:
    bVar8 = false;
    if (uVar10 >> 8 == 0xffffffff) {
      bVar8 = pTVar13 == (TargetProtocolConformanceDescriptor *)0x0;
    }
switchD_100482ab4_caseD_56:
    if (bVar8) {
switchD_100482ab4_caseD_2d:
      return param_1;
    }
switchD_100482ab4_caseD_e9:
switchD_100482ab4_caseD_28:
    switchD_100482ab4::caseD_6e();
    return param_1;
  case 0x6d:
    goto switchD_100482ab4_caseD_6d;
  case 0x6e:
  case 0x8a:
  case 0xa6:
    puVar5 = auStack_d0;
switchD_100482ab4_caseD_3e:
    *(undefined8 **)(puVar5 + 0x30) = param_14;
    *(undefined8 **)(puVar5 + 0x38) = param_3;
    puVar6 = puVar5;
switchD_100482ab4_caseD_26:
    *(undefined8 **)(puVar6 + 0x40) = param_4;
    *(undefined8 **)(puVar6 + 0x48) = param_5;
    *(undefined8 **)(puVar6 + 0x50) = param_6;
    *(undefined8 **)(puVar6 + 0x58) = param_7;
    *(undefined1 **)(puVar6 + 0x60) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar6 + 0x68) = unaff_x30;
    puVar7 = puVar6;
switchD_100482ab4_caseD_d5:
    param_3 = *(undefined8 **)(puVar7 + 0xa0);
    uVar10 = *(ulong *)(puVar7 + 0x90);
switchD_100482ab4_caseD_c5:
    pbVar12 = (byte *)(ulong)((uint)((ulong)param_3 >> 0x39) & 0x18 | (uint)(uVar10 >> 0x3d));
switchD_100482ab4_caseD_fd:
    if (0x17 < (uint)pbVar12) {
switchD_100482ab4_caseD_f6:
      return param_1;
    }
    pTVar13 = &TargetProtocolConformanceDescriptor_10082d000;
switchD_100482ab4_caseD_c1:
                    /* WARNING: Could not recover jumptable at 0x000100482cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(byte *)((long)&pTVar13[0xb5].WitnessTablePattern + (long)pbVar12) * 4 +
              0x100482ce0))();
    return param_1;
  case 0x73:
  case 0x8f:
    goto switchD_100482ab4_caseD_73;
  case 0x79:
    goto switchD_100482ab4_caseD_79;
  case 0x7b:
  case 0x97:
  case 199:
  case 0xff:
    goto switchD_100482ab4_caseD_7b;
  case 0x81:
  case 0xee:
    param_1 = param_6;
switchD_100482ab4_caseD_36:
    break;
  case 0x89:
    goto switchD_100482ab4_caseD_89;
  case 0x91:
  case 0xe5:
    goto switchD_100482ab4_caseD_91;
  case 0x95:
    goto switchD_100482ab4_caseD_95;
  case 0x96:
    goto switchD_100482ab4_caseD_96;
  case 0x9d:
    param_1 = param_3;
    param_7 = param_4;
    break;
  case 0xa5:
    goto switchD_100482ab4_caseD_a5;
  case 0xad:
    param_1 = param_6;
    break;
  case 0xb1:
    goto switchD_100482ab4_caseD_b1;
  case 0xc1:
    goto switchD_100482ab4_caseD_c1;
  case 0xc5:
    goto switchD_100482ab4_caseD_c5;
  case 0xd1:
    goto switchD_100482ab4_caseD_d1;
  case 0xd5:
    goto switchD_100482ab4_caseD_d5;
  case 0xd9:
    goto switchD_100482ab4_caseD_d9;
  case 0xe9:
  case 0xf1:
  case 0xf9:
    goto switchD_100482ab4_caseD_e9;
  case 0xed:
    param_7 = param_3;
    break;
  case 0xf5:
    _swift_bridgeObjectRelease(param_4);
    param_1 = param_6;
    break;
  case 0xf6:
    goto switchD_100482ab4_caseD_f6;
  case 0xf7:
    param_7 = param_2;
    break;
  case 0xfd:
    goto switchD_100482ab4_caseD_fd;
  }
  FUN_100006cdc(param_1,param_7);
  return param_1;
}

