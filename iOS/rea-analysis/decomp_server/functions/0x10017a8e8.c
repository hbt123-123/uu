// rea decompile_all
// name: FUN_10017a8e8
// address: 0x10017a8e8
// body: available
// range: 0x10017a8e8-0x10017aae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10017aaac to 0x100040b80 FUN_100040b80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10017aae0 to 0x100008184 FUN_100008184 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017a8e8(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                  ulong *param_6,ulong *param_7,ulong *param_8,ulong *param_9,undefined4 param_10,
                  undefined4 param_11,undefined8 param_12,ulong *param_13,ulong *param_14,
                  ulong *param_15,ulong *param_16,ulong *param_17,byte param_18)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *unaff_x26;
  undefined8 unaff_x27;
  ulong *unaff_x28;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xffffffffffffffa0;
  uVar7 = (uint)((ulong)param_14 >> 0x3c) & 3;
  uVar1 = uVar7 | (uint)param_18 << 2 & 0xff;
  bVar6 = uVar1 == 0xc;
  if (0xc < uVar1) {
switchD_10017a950_caseD_ed:
    return;
  }
  uVar8 = (ulong)(uVar7 | (uint)param_18 << 2) & 0xff;
  pbVar9 = &switchD_10017a950::switchdataD_10080f92f;
  uVar10 = (ulong)(&switchD_10017a950::switchdataD_10080f92f)[uVar8] * 4 + 0x10017a954;
  puVar3 = &stack0xffffffffffffffa0;
  puVar4 = &stack0xffffffffffffffa0;
  puVar5 = &stack0xffffffffffffffa0;
  puVar11 = param_7;
  switch(uVar8) {
  case 0:
  case 0x29:
    param_6 = param_17;
    param_5 = param_16;
    param_4 = param_15;
    unaff_x26 = param_13;
    unaff_x27 = param_12;
  case 0xb9:
    param_1 = param_2;
switchD_10017a950_caseD_12:
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_7);
    unaff_x28 = param_8;
switchD_10017a950_caseD_19:
    param_1 = unaff_x26;
    FUN_100008184(unaff_x28,param_9);
    _swift_bridgeObjectRetain(unaff_x27);
switchD_10017a950_caseD_d:
LAB_10017aa10:
    FUN_100008184(param_1,param_14);
    param_1 = param_4;
    param_2 = param_5;
    param_3 = param_6;
switchD_10017a950_caseD_88:
switchD_10017a950_caseD_7b:
switchD_10017a950_caseD_81:
switchD_10017a950_caseD_79:
    FUN_100040b80(param_1,param_2,param_3);
    return;
  case 1:
  case 0x2a:
    _swift_bridgeObjectRetain(param_2);
    param_14 = param_8;
  case 0x13:
    param_1 = param_3;
switchD_10017a950_caseD_d1:
    FUN_100008184(param_1,param_4);
    FUN_100008184(param_5,param_6);
    param_1 = param_7;
    param_2 = param_14;
    param_3 = param_9;
    goto switchD_10017a950_caseD_88;
  case 2:
  case 8:
  case 0x2b:
  case 0x31:
    goto switchD_10017a950_caseD_2;
  case 3:
  case 0x2c:
    param_1 = param_2;
    param_2 = param_3;
    param_3 = param_8;
  case 0x26:
    FUN_100008184(param_1,param_2);
    param_1 = param_4;
switchD_10017a950_caseD_a1:
    param_2 = param_5;
switchD_10017a950_caseD_a9:
    FUN_100008184(param_1,param_2);
    param_1 = param_6;
    param_2 = param_7;
switchD_10017a950_caseD_14:
    goto switchD_10017a950_caseD_88;
  case 4:
  case 0x2d:
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    param_1 = param_5;
    param_2 = param_6;
    break;
  default:
    param_1 = param_2;
  case 0x72:
    _swift_bridgeObjectRetain(param_1);
    param_1 = param_3;
switchD_10017a950_caseD_1b:
    param_2 = param_4;
switchD_10017a950_caseD_17:
    break;
  case 7:
  case 0x15:
  case 0x28:
  case 0x30:
    param_1 = param_2;
  case 0x49:
  case 0x99:
  case 0xf9:
    _swift_bridgeObjectRetain(param_1);
    param_1 = param_4;
    param_3 = param_8;
    goto switchD_10017a950_caseD_a1;
  case 9:
  case 0x32:
    param_1 = param_2;
  case 0x25:
    _swift_bridgeObjectRetain(param_1);
switchD_10017a950_caseD_2:
    FUN_100008184(param_3,param_4);
    param_1 = param_5;
    param_2 = param_6;
    param_3 = param_7;
    goto switchD_10017a950_caseD_88;
  case 10:
  case 0x33:
    _swift_bridgeObjectRetain(param_2);
  case 0xe:
  case 0xf:
  case 0x21:
  case 0x45:
    _swift_bridgeObjectRetain(param_3);
    param_1 = param_4;
switchD_10017a950_caseD_18:
    param_2 = param_5;
switchD_10017a950_caseD_42:
    break;
  case 0xc:
  case 0x35:
    param_1 = param_2;
  case 0x1c:
  case 0x1f:
  case 0x43:
    param_14 = param_3;
    goto LAB_10017aa10;
  case 0xd:
    goto switchD_10017a950_caseD_d;
  case 0x12:
  case 0xc1:
    goto switchD_10017a950_caseD_12;
  case 0x14:
  case 0xb1:
    goto switchD_10017a950_caseD_14;
  case 0x17:
    goto switchD_10017a950_caseD_17;
  case 0x18:
  case 0x1a:
    goto switchD_10017a950_caseD_18;
  case 0x19:
  case 0x22:
  case 0x24:
  case 0x27:
  case 0xc9:
    goto switchD_10017a950_caseD_19;
  case 0x1b:
  case 0x1d:
  case 0x1e:
  case 0x23:
    goto switchD_10017a950_caseD_1b;
  case 0x41:
    goto switchD_10017a950_caseD_41;
  case 0x42:
    goto switchD_10017a950_caseD_42;
  case 0x51:
    FUN_100008184(param_1,param_6);
    return;
  case 0x59:
    FUN_100008184();
    return;
  case 0x61:
    uVar8 = *param_1;
    param_2 = (ulong *)param_1[1];
    param_3 = (ulong *)param_1[2];
    param_4 = (ulong *)param_1[3];
    param_5 = (ulong *)param_1[4];
    param_6 = (ulong *)param_1[5];
    param_7 = (ulong *)param_1[6];
    param_8 = (ulong *)param_1[7];
  case 0x69:
    FUN_10017ad28(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  case 0x71:
    goto switchD_10017a950_caseD_71;
  case 0x79:
  case 0x7a:
    goto switchD_10017a950_caseD_79;
  case 0x7b:
  case 0x8a:
  case 0x8d:
  case 0xe3:
  case 0xe6:
    goto switchD_10017a950_caseD_7b;
  case 0x7c:
  case 0x80:
  case 0x82:
  case 0x85:
  case 0x8e:
  case 0x91:
  case 0xe7:
  case 0xea:
    pbVar9 = (byte *)unaff_x28;
  case 0xf0:
    uVar10 = 0x3000000000000000;
switchD_10017a950_caseD_f2:
    bVar6 = (uVar10 & ((ulong)pbVar9 ^ 0xffffffffffffffff)) == 0;
switchD_10017a950_caseD_f1:
    if (bVar6 && (((uint)uVar8 ^ 0xffffffff) & 0xff) == 0) {
switchD_10017a950_caseD_8f:
      return;
    }
switchD_10017a950_caseD_7d:
switchD_10017a950_caseD_ef:
switchD_10017a950_caseD_7e:
switchD_10017a950_caseD_8b:
    switchD_10017a950::caseD_83();
    return;
  case 0x7d:
    goto switchD_10017a950_caseD_7d;
  case 0x7e:
  case 0xee:
    goto switchD_10017a950_caseD_7e;
  case 0x7f:
  case 0x93:
  case 0xec:
    goto switchD_10017a950_caseD_7f;
  case 0x81:
    goto switchD_10017a950_caseD_81;
  case 0x83:
  case 0x86:
    puVar2 = &stack0xffffffffffffff50;
  case 0x92:
  case 0xeb:
    *(ulong **)(puVar2 + 0x10) = param_14;
    *(ulong **)(puVar2 + 0x18) = param_3;
    puVar3 = puVar2;
switchD_10017a950_caseD_7f:
    *(ulong **)(puVar3 + 0x20) = param_4;
    *(ulong **)(puVar3 + 0x28) = param_5;
    puVar4 = puVar3;
switchD_10017a950_caseD_90:
    *(ulong **)(puVar4 + 0x30) = param_6;
    *(ulong **)(puVar4 + 0x38) = param_7;
    puVar5 = puVar4;
switchD_10017a950_caseD_84:
    *(undefined1 **)(puVar5 + 0x40) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar5 + 0x48) = unaff_x30;
    puVar11 = *(ulong **)(puVar5 + 0x50);
    uVar7 = 4;
    if ((puVar5[0x58] & 1) == 0) {
      uVar7 = 0;
    }
    uVar7 = (uint)((ulong)puVar11 >> 0x3c) & 3 | uVar7;
    if (uVar7 < 4) {
      if (uVar7 < 2) {
        if (uVar7 == 0) {
          _swift_bridgeObjectRetain();
          FUN_10017ac50(param_3,param_4,param_5,param_6,param_7);
          param_7 = puVar11;
        }
        else {
          _swift_bridgeObjectRetain(param_3);
          puVar11 = param_5;
          param_5 = param_7;
switchD_10017a950_caseD_71:
          param_7 = param_5;
          _swift_bridgeObjectRetain(puVar11);
          param_8 = param_6;
        }
        goto LAB_10017ac38;
      }
      if (uVar7 == 2) {
        _swift_bridgeObjectRetain(param_2);
        FUN_100008184(param_4,param_5);
        param_8 = param_6;
        goto LAB_10017ac38;
      }
    }
    else {
      if (5 < uVar7) {
        if (uVar7 == 6) {
          _swift_bridgeObjectRetain(param_2);
          param_7 = param_3;
switchD_10017a950_caseD_41:
          param_8 = param_7;
          param_7 = param_4;
        }
        else {
          _swift_bridgeObjectRetain(param_3);
          param_8 = param_4;
          param_7 = param_5;
        }
        goto LAB_10017ac38;
      }
      param_8 = param_5;
      param_7 = param_6;
      if (uVar7 == 4) goto LAB_10017ac38;
    }
    param_8 = param_2;
    param_7 = param_3;
LAB_10017ac38:
    FUN_100008184(param_8,param_7);
    return;
  case 0x84:
    goto switchD_10017a950_caseD_84;
  case 0x88:
  case 0xe1:
    goto switchD_10017a950_caseD_88;
  case 0x89:
  case 0xe2:
    break;
  case 0x8b:
  case 0xe4:
    goto switchD_10017a950_caseD_8b;
  case 0x8c:
  case 0xe5:
    goto switchD_10017a950_caseD_8c;
  case 0x8f:
  case 0xe8:
    goto switchD_10017a950_caseD_8f;
  case 0x90:
  case 0xe9:
    goto switchD_10017a950_caseD_90;
  case 0xa1:
    goto switchD_10017a950_caseD_a1;
  case 0xa9:
    goto switchD_10017a950_caseD_a9;
  case 0xd1:
    goto switchD_10017a950_caseD_d1;
  case 0xed:
    goto switchD_10017a950_caseD_ed;
  case 0xef:
    goto switchD_10017a950_caseD_ef;
  case 0xf1:
    goto switchD_10017a950_caseD_f1;
  case 0xf2:
    goto switchD_10017a950_caseD_f2;
  }
switchD_10017a950_caseD_8c:
  FUN_100008184(param_1,param_2);
  return;
}

