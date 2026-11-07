// rea decompile_all
// name: FUN_100040424
// address: 0x100040424
// body: available
// range: 0x100040424-0x10004061f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000405e8 to 0x100040620 switchD_10004048c::caseD_6d (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10004061c to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100040424(undefined8 ***param_1,undefined8 ***param_2,undefined8 ***param_3,
                  undefined8 ***param_4,undefined8 ***param_5,undefined8 ***param_6,
                  undefined8 ***param_7,undefined8 ***param_8,undefined8 ***param_9,
                  undefined4 param_10,undefined4 param_11,undefined8 param_12,undefined8 ***param_13
                  ,undefined8 ***param_14,undefined8 ***param_15,undefined8 ***param_16,
                  undefined8 ***param_17,byte param_18)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ***unaff_x26;
  undefined8 unaff_x27;
  undefined8 ***unaff_x28;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuStack_70;
  
  uVar7 = (uint)((ulong)param_14 >> 0x3c) & 3;
  uVar1 = uVar7 | (uint)param_18 << 2 & 0xff;
  bVar6 = uVar1 == 0xc;
  if (0xc < uVar1) {
switchD_10004048c_caseD_15:
switchD_10004048c_caseD_64:
    return;
  }
  uVar8 = (ulong)(uVar7 | (uint)param_18 << 2) & 0xff;
  pbVar9 = &switchD_10004048c::switchdataD_10080970c;
  uVar10 = (ulong)(&switchD_10004048c::switchdataD_10080970c)[uVar8] * 4 + 0x100040490;
  bVar5 = bVar6;
  pppuVar2 = param_2;
  pppuVar11 = param_7;
  pppuVar12 = param_3;
  pppuVar3 = param_14;
  pppuVar4 = param_9;
  ppppuVar13 = (undefined8 ****)&stack0xfffffffffffffff0;
  switch(uVar8) {
  case 0:
    param_6 = param_17;
    param_5 = param_16;
    param_4 = param_15;
    unaff_x26 = param_13;
    unaff_x27 = param_12;
  case 0x44:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_7);
    unaff_x28 = param_8;
switchD_10004048c_caseD_ac:
    FUN_100006cdc(unaff_x28,param_9);
switchD_10004048c_caseD_56:
    param_1 = unaff_x26;
    _swift_bridgeObjectRelease(unaff_x27);
LAB_10004054c:
    FUN_100006cdc(param_1,param_14);
switchD_10004048c_caseD_54:
    param_1 = param_4;
switchD_10004048c_caseD_2c:
    param_2 = param_5;
    param_3 = param_6;
    goto switchD_10004048c_caseD_c4;
  case 1:
    _swift_bridgeObjectRelease(param_2);
    param_1 = param_3;
    pppuVar3 = param_8;
  case 0xb4:
    param_2 = pppuVar3;
    FUN_100006cdc(param_1,param_4);
    FUN_100006cdc(param_5,param_6);
    param_1 = param_7;
    param_3 = param_9;
switchD_10004048c_caseD_bc:
    goto switchD_10004048c_caseD_c4;
  case 2:
  case 8:
    goto switchD_10004048c_caseD_2;
  case 3:
    FUN_100006cdc(param_2,param_3);
    param_1 = param_4;
    param_3 = param_8;
  case 0x2e:
  case 0x32:
  case 0x46:
  case 0xa4:
switchD_10004048c_caseD_2e:
    FUN_100006cdc(param_1,param_5);
    param_1 = param_6;
    param_2 = param_7;
switchD_10004048c_caseD_c4:
switchD_10004048c_caseD_1e:
switchD_10004048c_caseD_24:
switchD_10004048c_caseD_1c:
    switchD_10004048c::caseD_6d(param_1,param_2,param_3);
    return;
  case 4:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    param_1 = param_5;
    param_2 = param_6;
    break;
  default:
    param_1 = param_2;
  case 0x40:
  case 0x4e:
    _swift_bridgeObjectRelease(param_1);
    param_1 = param_3;
switchD_10004048c_caseD_3a:
    param_2 = param_4;
    break;
  case 7:
    param_1 = param_2;
  case 0x9c:
    _swift_bridgeObjectRelease(param_1);
    param_1 = param_4;
    param_3 = param_8;
    goto switchD_10004048c_caseD_2e;
  case 9:
  case 0x38:
    _swift_bridgeObjectRelease(param_2);
switchD_10004048c_caseD_2:
    param_1 = param_3;
    param_2 = param_4;
switchD_10004048c_caseD_84:
    FUN_100006cdc(param_1,param_2);
switchD_10004048c_caseD_6b:
    param_1 = param_5;
    param_2 = param_6;
    param_3 = param_7;
    goto switchD_10004048c_caseD_c4;
  case 10:
    param_1 = param_2;
  case 0x18:
    _swift_bridgeObjectRelease(param_1);
    param_1 = param_3;
switchD_10004048c_caseD_3c:
    _swift_bridgeObjectRelease(param_1);
    param_1 = param_4;
    param_2 = param_5;
    break;
  case 0xc:
    param_1 = param_2;
  case 0x16:
    pppuVar2 = param_3;
switchD_10004048c_caseD_3e:
    param_14 = pppuVar2;
    goto LAB_10004054c;
  case 0x14:
  case 0x68:
  case 0x8c:
    pbVar9 = (byte *)unaff_x28;
  case 0x20:
    uVar10 = 0x3000000000000000;
switchD_10004048c_caseD_76:
    uVar10 = uVar10 & ((ulong)pbVar9 ^ 0xffffffffffffffff);
switchD_10004048c_caseD_21:
    bVar6 = uVar10 == 0;
switchD_10004048c_caseD_67:
    uVar10 = (ulong)(((uint)uVar8 ^ 0xffffffff) & 0xff);
    bVar5 = bVar6;
switchD_10004048c_caseD_26:
    bVar6 = false;
    if (bVar5) {
      bVar6 = (int)uVar10 == 0;
    }
switchD_10004048c_caseD_66:
    if (bVar6) {
      return;
    }
switchD_10004048c_caseD_22:
switchD_10004048c_caseD_27:
    switchD_10004048c::caseD_6a();
    return;
  case 0x15:
    goto switchD_10004048c_caseD_15;
  case 0x1c:
  case 0x1d:
    goto switchD_10004048c_caseD_1c;
  case 0x1e:
    goto switchD_10004048c_caseD_1e;
  case 0x1f:
  case 0x23:
  case 0x25:
  case 0x28:
  case 0x3d:
  case 0x6e:
  case 0x70:
  case 0x87:
  case 0x92:
  case 0x94:
  case 0x99:
    goto switchD_10004048c_caseD_1f;
  case 0x21:
  case 0x6c:
  case 0x90:
    goto switchD_10004048c_caseD_21;
  case 0x22:
    goto switchD_10004048c_caseD_22;
  case 0x24:
  case 0x6f:
  case 0x93:
    goto switchD_10004048c_caseD_24;
  case 0x26:
  case 0x29:
  case 0x71:
  case 0x95:
    goto switchD_10004048c_caseD_26;
  case 0x27:
  case 0x72:
  case 0x86:
  case 0x96:
    goto switchD_10004048c_caseD_27;
  case 0x2c:
    goto switchD_10004048c_caseD_2c;
  case 0x2d:
  case 0x45:
    if (((ulong)param_5 & 0xfffffffe00000000) != 0x7ffffffe00000000) {
      FUN_100040834();
      return;
    }
    return;
  case 0x30:
  case 0x48:
    param_1 = param_3;
    if ((uint)uVar8 == 0) {
      pppuStack_70 = (undefined8 ***)&stack0xfffffffffffffff0;
      _swift_bridgeObjectRelease(param_2);
      FUN_100006cdc(param_3,param_4);
      return;
    }
  case 0x4b:
    FUN_100006cdc(param_1,param_4);
    return;
  case 0x31:
    if (((ulong)param_5 >> 0x3d & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      param_5 = param_4;
    }
    else {
      param_5 = (undefined8 ***)((ulong)param_5 & 0xdfffffffffffffff);
      param_3 = param_4;
    }
    FUN_100006cdc(param_3,param_5);
    return;
  case 0x3a:
    goto switchD_10004048c_caseD_3a;
  case 0x3c:
    goto switchD_10004048c_caseD_3c;
  case 0x3e:
    goto switchD_10004048c_caseD_3e;
  case 0x49:
  case 0x65:
  case 0x73:
  case 0x75:
  case 0x85:
  case 0x89:
  case 0x97:
    goto switchD_10004048c_caseD_49;
  case 0x4a:
  case 0xdc:
    goto switchD_10004048c_caseD_4a;
  case 0x54:
    goto switchD_10004048c_caseD_54;
  case 0x55:
  case 0x69:
  case 0x8d:
    goto switchD_10004048c_caseD_55;
  case 0x56:
    goto switchD_10004048c_caseD_56;
  case 100:
  case 0x88:
    goto switchD_10004048c_caseD_64;
  case 0x66:
  case 0x8a:
    goto switchD_10004048c_caseD_66;
  case 0x67:
  case 0x8b:
  case 0xd4:
    goto switchD_10004048c_caseD_67;
  case 0x6a:
  case 0x8e:
    ppppuVar13 = &pppuStack_70;
    pppuStack_70 = (undefined8 ***)&stack0xfffffffffffffff0;
switchD_10004048c_caseD_4a:
    pppuVar12 = ppppuVar13[2];
    pbVar9 = (byte *)((ulong)pppuVar12 >> 0x3c & 3);
    uVar7 = 4;
    if (((ulong)ppppuVar13[3] & 1) == 0) {
      uVar7 = 0;
    }
    uVar8 = (ulong)uVar7;
    pppuVar11 = param_5;
switchD_10004048c_caseD_e4:
    uVar7 = (uint)pbVar9 | (uint)uVar8;
    if (uVar7 < 4) {
      if (uVar7 < 2) {
        param_5 = param_7;
        param_14 = param_3;
        if (uVar7 == 0) {
switchD_10004048c_caseD_ec:
          _swift_bridgeObjectRelease();
          FUN_1000407a8(param_14,param_4,pppuVar11,param_6,param_5);
          pppuVar4 = param_8;
switchD_10004048c_caseD_f4:
          param_1 = pppuVar4;
switchD_10004048c_caseD_fc:
          param_7 = pppuVar12;
        }
        else {
          _swift_bridgeObjectRelease(param_3);
          _swift_bridgeObjectRelease(pppuVar11);
          param_1 = param_6;
        }
        goto LAB_100040790;
      }
      if (uVar7 == 2) {
        _swift_bridgeObjectRelease(param_2);
        FUN_100006cdc(param_4,pppuVar11);
        param_1 = param_6;
        goto LAB_100040790;
      }
    }
    else {
      if (5 < uVar7) {
        if (uVar7 == 6) {
          _swift_bridgeObjectRelease(param_2);
          param_1 = param_3;
          param_7 = param_4;
        }
        else {
          _swift_bridgeObjectRelease(param_3);
          param_1 = param_4;
          param_7 = pppuVar11;
        }
        goto LAB_100040790;
      }
      param_1 = pppuVar11;
      param_7 = param_6;
      if (uVar7 == 4) goto LAB_100040790;
    }
    param_1 = param_2;
    param_7 = param_3;
LAB_100040790:
    FUN_100006cdc(param_1,param_7);
    return;
  case 0x6b:
  case 0x8f:
    goto switchD_10004048c_caseD_6b;
  case 0x6d:
  case 0x91:
    uVar8 = (ulong)param_3 >> 0x3c;
switchD_10004048c_caseD_1f:
    param_1 = param_2;
    if (uVar8 < 0xf) {
switchD_10004048c_caseD_49:
      FUN_100006cdc(param_1,param_3);
      return;
    }
switchD_10004048c_caseD_77:
    return;
  case 0x74:
  case 0x98:
    goto switchD_10004048c_caseD_74;
  case 0x76:
    goto switchD_10004048c_caseD_76;
  case 0x77:
    goto switchD_10004048c_caseD_77;
  case 0x84:
    goto switchD_10004048c_caseD_84;
  case 0xac:
    goto switchD_10004048c_caseD_ac;
  case 0xbc:
    goto switchD_10004048c_caseD_bc;
  case 0xc4:
    goto switchD_10004048c_caseD_c4;
  case 0xcc:
    break;
  case 0xe4:
    goto switchD_10004048c_caseD_e4;
  case 0xec:
    goto switchD_10004048c_caseD_ec;
  case 0xf4:
    goto switchD_10004048c_caseD_f4;
  case 0xfc:
    goto switchD_10004048c_caseD_fc;
  }
switchD_10004048c_caseD_55:
switchD_10004048c_caseD_74:
  FUN_100006cdc(param_1,param_2);
  return;
}

