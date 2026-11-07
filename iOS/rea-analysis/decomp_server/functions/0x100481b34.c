// rea decompile_all
// name: FUN_100481b34
// address: 0x100481b34
// body: available
// range: 0x100481b34-0x100481d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100481cf8 to 0x100040b80 FUN_100040b80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100481d2c to 0x100008184 FUN_100008184 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100481b34(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7,ulong param_8,ulong param_9,ulong param_10,
                  ulong param_11,ulong param_12,ulong param_13,ulong param_14,ulong param_15,
                  ulong param_16,byte param_17)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *unaff_x22;
  ulong uVar16;
  ulong unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 unaff_x30;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [80];
  
  puVar3 = &stack0xffffffffffffffa0;
  uVar9 = (uint)(param_13 >> 0x3c) & 3;
  uVar2 = uVar9 | (uint)param_17 << 2 & 0xff;
  bVar7 = SBORROW4(uVar2,0xc);
  iVar1 = uVar2 - 0xc;
  bVar8 = uVar2 == 0xc;
  if (0xc < uVar2) {
switchD_100481b9c_caseD_33:
switchD_100481b9c_caseD_22:
switchD_100481b9c_caseD_27:
    return;
  }
  uVar10 = (ulong)(uVar9 | (uint)param_17 << 2) & 0xff;
  pbVar11 = &switchD_100481b9c::switchdataD_10082daf0;
  uVar12 = (ulong)(&switchD_100481b9c::switchdataD_10082daf0)[uVar10] * 4 + 0x100481ba0;
  puVar4 = &stack0xffffffffffffffa0;
  puVar6 = (ulong *)&stack0xffffffffffffffa0;
  puVar5 = (ulong *)&stack0xffffffffffffffa0;
  uVar13 = param_7;
  uVar14 = param_6;
  uVar15 = param_5;
  uVar16 = param_3;
  switch(uVar10) {
  case 0:
  case 0x5b:
    param_6 = param_16;
    param_5 = param_15;
    param_4 = param_14;
  case 0xd:
  case 0x68:
    param_1 = param_2;
    unaff_x26 = param_12;
    unaff_x27 = param_11;
    goto switchD_100481b9c_caseD_25;
  case 1:
  case 0x3b:
  case 0x5c:
    param_1 = param_2;
  case 0xd5:
    param_13 = param_8;
    goto switchD_100481b9c_caseD_f1;
  case 2:
  case 8:
  case 0x5d:
  case 99:
    goto switchD_100481b9c_caseD_2;
  case 3:
  case 0x29:
  case 0x5e:
    param_1 = param_2;
    param_2 = param_3;
    param_3 = param_8;
  case 0x32:
  case 0x58:
    FUN_100008184(param_1,param_2);
    param_1 = param_4;
    param_2 = param_5;
switchD_100481b9c_caseD_30:
    FUN_100008184(param_1,param_2);
    param_1 = param_6;
switchD_100481b9c_caseD_10:
    param_2 = param_7;
    goto switchD_100481b9c_caseD_46;
  case 4:
  case 0x5f:
    param_1 = param_2;
  case 0x37:
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_4);
    param_1 = param_5;
    param_2 = param_6;
    break;
  default:
    param_1 = param_2;
  case 0xa8:
  case 0xb6:
  case 0xd2:
  case 0xee:
    _swift_bridgeObjectRetain(param_1);
switchD_100481b9c_caseD_ce:
    param_1 = param_3;
switchD_100481b9c_caseD_17:
    param_2 = param_4;
switchD_100481b9c_caseD_49:
    break;
  case 7:
  case 0x11:
  case 0x47:
  case 0x5a:
  case 0x62:
  case 0x6c:
    param_1 = param_2;
  case 0x2d:
  case 0x2e:
    _swift_bridgeObjectRetain(param_1);
    param_3 = param_8;
switchD_100481b9c_caseD_f:
    param_1 = param_4;
    param_2 = param_5;
    goto switchD_100481b9c_caseD_30;
  case 9:
  case 100:
  case 0xe0:
    param_1 = param_2;
  case 0x57:
    _swift_bridgeObjectRetain(param_1);
    goto switchD_100481b9c_caseD_2;
  case 10:
  case 0x65:
    _swift_bridgeObjectRetain(param_2);
  case 0x40:
  case 0x41:
  case 0x53:
  case 0x94:
    param_1 = param_3;
switchD_100481b9c_caseD_c8:
    _swift_bridgeObjectRetain(param_1);
    param_1 = param_4;
switchD_100481b9c_caseD_4a:
    param_2 = param_5;
switchD_100481b9c_caseD_92:
    break;
  case 0xc:
  case 0x67:
  case 0xbd:
  case 0xd0:
  case 0xd9:
  case 0xf4:
    param_1 = param_2;
  case 0x4e:
  case 0x51:
  case 0x9e:
  case 0xc6:
  case 0xe2:
  case 0xf5:
  case 0xfe:
    goto LAB_100481c5c;
  case 0xe:
  case 0x69:
    goto switchD_100481b9c_caseD_e;
  case 0xf:
  case 0x39:
  case 0x3c:
  case 0x6a:
    goto switchD_100481b9c_caseD_f;
  case 0x10:
  case 0x6b:
    goto switchD_100481b9c_caseD_10;
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x23:
  case 0x24:
  case 0x4d:
  case 0x4f:
  case 0x50:
  case 0x55:
  case 0x72:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x7e:
  case 0x7f:
  case 0xa6:
    goto switchD_100481b9c_caseD_17;
  case 0x18:
  case 0x73:
    goto switchD_100481b9c_caseD_18;
  case 0x1e:
  case 0x79:
    goto switchD_100481b9c_caseD_1e;
  case 0x1f:
  case 0x3d:
  case 0x45:
  case 0x7a:
    goto switchD_100481b9c_caseD_1f;
  case 0x22:
  case 0x7d:
  case 0xbc:
    goto switchD_100481b9c_caseD_22;
  case 0x25:
  case 0x44:
    goto switchD_100481b9c_caseD_25;
  case 0x27:
    goto switchD_100481b9c_caseD_27;
  case 0x28:
  case 0x80:
  case 0x8b:
    goto switchD_100481b9c_caseD_28;
  case 0x2a:
    goto switchD_100481b9c_caseD_2a;
  case 0x2b:
    goto switchD_100481b9c_caseD_2b;
  case 0x2c:
    goto switchD_100481b9c_caseD_2c;
  case 0x2f:
    goto switchD_100481b9c_caseD_2f;
  case 0x30:
  case 0x9a:
  case 0x9d:
  case 0xae:
  case 0xc2:
  case 0xc5:
  case 0xca:
  case 0xde:
  case 0xe1:
  case 0xe6:
  case 0xfa:
  case 0xfd:
    goto switchD_100481b9c_caseD_30;
  case 0x31:
    goto switchD_100481b9c_caseD_31;
  case 0x33:
    goto switchD_100481b9c_caseD_33;
  case 0x34:
    goto switchD_100481b9c_caseD_34;
  case 0x35:
    goto switchD_100481b9c_caseD_35;
  case 0x36:
    goto switchD_100481b9c_caseD_36;
  case 0x38:
  case 0x9c:
  case 0xd8:
    goto switchD_100481b9c_caseD_38;
  case 0x3e:
    goto switchD_100481b9c_caseD_3e;
  case 0x3f:
  case 0x85:
    goto switchD_100481b9c_caseD_3f;
  case 0x46:
    goto switchD_100481b9c_caseD_46;
  case 0x49:
  case 0xec:
    goto switchD_100481b9c_caseD_49;
  case 0x4a:
  case 0x4c:
    goto switchD_100481b9c_caseD_4a;
  case 0x4b:
  case 0x54:
  case 0x56:
  case 0x59:
    goto switchD_100481b9c_caseD_4b;
  case 0x81:
    goto switchD_100481b9c_caseD_81;
  case 0x82:
    break;
  case 0x83:
    goto switchD_100481b9c_caseD_83;
  case 0x84:
    goto switchD_100481b9c_caseD_84;
  case 0x86:
    goto switchD_100481b9c_caseD_86;
  case 0x87:
  case 0x8c:
    goto switchD_100481b9c_caseD_87;
  case 0x88:
  case 0x89:
    goto switchD_100481b9c_caseD_88;
  case 0x8a:
    goto switchD_100481b9c_caseD_8a;
  case 0x8f:
    uVar10 = param_13 & 0xff;
    uVar9 = (uint)(byte)param_13;
    bVar7 = SBORROW4(uVar9,3);
    iVar1 = uVar9 - 3;
    bVar8 = uVar9 == 3;
    uVar16 = param_9;
    unaff_x26 = param_10;
  case 0xd4:
    uVar9 = (uint)uVar10;
    if (bVar8 || iVar1 < 0 != bVar7) {
      if (uVar9 < 2) {
        if (uVar9 != 0) {
          param_2 = param_3;
          param_3 = param_4;
          if (uVar9 != 1) {
            return;
          }
          goto LAB_100482068;
        }
        _swift_bridgeObjectRetain();
      }
      else {
        param_13 = uVar16;
        if (uVar9 == 2) goto LAB_100481ff0;
        if (uVar9 != 3) {
          return;
        }
      }
      FUN_100008184(param_4,param_4);
      param_13 = param_7;
    }
    else {
      if (uVar9 < 6) {
        if (uVar9 == 4) {
          _swift_bridgeObjectRetain(param_4);
          _swift_bridgeObjectRetain(param_5);
          param_4 = param_6;
          goto LAB_100482048;
        }
        param_1 = param_4;
        if (uVar9 != 5) {
          return;
        }
switchD_100481b9c_caseD_b3:
        _swift_bridgeObjectRetain(param_1);
        param_13 = uVar16;
LAB_100481ff0:
        FUN_100008184(param_4,param_5);
        param_5 = param_6;
        param_6 = param_7;
        goto LAB_100482098;
      }
      if (uVar9 != 6) {
        if (uVar9 != 7) {
          return;
        }
        _swift_bridgeObjectRetain(param_2);
        _swift_bridgeObjectRetain(param_3);
        param_7 = param_4;
LAB_100482048:
        FUN_100008184(param_4,param_7);
        return;
      }
LAB_100482068:
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(param_3);
      FUN_100008184(param_5,param_6);
      FUN_100008184(param_7,uVar16);
      param_5 = unaff_x26;
      param_6 = param_9;
    }
LAB_100482098:
    FUN_100040b80(param_5,param_6,param_13);
    return;
  case 0x90:
    goto switchD_100481b9c_caseD_90;
  case 0x91:
    goto switchD_100481b9c_caseD_91;
  case 0x92:
    goto switchD_100481b9c_caseD_92;
  case 0x98:
    if ((int)uVar10 != 0xff) {
      FUN_100481f28();
      return;
    }
    return;
  case 0x99:
  case 0xad:
  case 0xc1:
  case 0xdd:
  case 0xf9:
    goto switchD_100481b9c_caseD_99;
  case 0xac:
    goto switchD_100481b9c_caseD_ac;
  case 0xb0:
  case 0xbe:
  case 0xda:
  case 0xf6:
  case 0xfc:
    goto switchD_100481b9c_caseD_b0;
  case 0xb1:
    goto switchD_100481b9c_caseD_b1;
  case 0xb2:
    goto switchD_100481b9c_caseD_b2;
  case 0xb3:
  case 0xd7:
  case 0xf3:
    goto switchD_100481b9c_caseD_b3;
  case 0xc0:
    goto switchD_100481b9c_caseD_c0;
  case 0xc4:
    pbVar11 = unaff_x22;
    goto switchD_100481b9c_caseD_87;
  case 200:
    goto switchD_100481b9c_caseD_c8;
  case 0xc9:
  case 0xe5:
    puVar3 = auStack_d0;
    goto switchD_100481b9c_caseD_99;
  case 0xce:
  case 0xea:
    goto switchD_100481b9c_caseD_ce;
  case 0xd6:
  case 0xf2:
    goto switchD_100481b9c_caseD_d6;
  case 0xdc:
    goto switchD_100481b9c_caseD_dc;
  case 0xe4:
    goto switchD_100481b9c_caseD_e4;
  case 0xf0:
    goto switchD_100481b9c_caseD_f0;
  case 0xf1:
    goto switchD_100481b9c_caseD_f1;
  case 0xf8:
    goto switchD_100481b9c_caseD_f8;
  }
switchD_100481b9c_caseD_8a:
switchD_100481b9c_caseD_84:
  FUN_100008184(param_1,param_2);
  return;
switchD_100481b9c_caseD_46:
  goto switchD_100481b9c_caseD_36;
switchD_100481b9c_caseD_2:
  param_1 = param_3;
  param_2 = param_4;
switchD_100481b9c_caseD_e4:
  FUN_100008184(param_1,param_2);
switchD_100481b9c_caseD_86:
  param_1 = param_5;
  param_2 = param_6;
  param_3 = param_7;
  goto switchD_100481b9c_caseD_36;
switchD_100481b9c_caseD_f1:
  _swift_bridgeObjectRetain(param_1);
switchD_100481b9c_caseD_1f:
  param_1 = param_3;
switchD_100481b9c_caseD_f0:
  FUN_100008184(param_1,param_4);
switchD_100481b9c_caseD_90:
  param_1 = param_5;
switchD_100481b9c_caseD_2b:
  FUN_100008184(param_1,param_6);
  param_1 = param_7;
switchD_100481b9c_caseD_31:
  param_2 = param_13;
  param_3 = param_9;
  goto switchD_100481b9c_caseD_36;
switchD_100481b9c_caseD_25:
  unaff_x28 = param_8;
switchD_100481b9c_caseD_e:
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_3);
switchD_100481b9c_caseD_18:
  _swift_bridgeObjectRetain(param_7);
switchD_100481b9c_caseD_4b:
  param_1 = unaff_x27;
  FUN_100008184(unaff_x28,param_9);
switchD_100481b9c_caseD_b0:
  _swift_bridgeObjectRetain(param_1);
switchD_100481b9c_caseD_1e:
  param_1 = unaff_x26;
  goto switchD_100481b9c_caseD_3f;
switchD_100481b9c_caseD_99:
  *(ulong *)(puVar3 + 0x30) = param_13;
  *(ulong *)(puVar3 + 0x38) = param_3;
  puVar4 = puVar3;
switchD_100481b9c_caseD_81:
  *(ulong *)(puVar4 + 0x40) = param_4;
  *(ulong *)(puVar4 + 0x48) = param_5;
  *(ulong *)(puVar4 + 0x50) = param_6;
  *(ulong *)(puVar4 + 0x58) = param_7;
  *(undefined1 **)(puVar4 + 0x60) = &stack0xfffffffffffffff0;
  *(undefined8 *)(puVar4 + 0x68) = unaff_x30;
  uVar16 = *(ulong *)(puVar4 + 0xa0);
  uVar10 = *(ulong *)(puVar4 + 0x90);
  uVar9 = (uint)(uVar16 >> 0x39) & 0x18 | (uint)(uVar10 >> 0x3d);
  if (0x17 < uVar9) {
    return;
  }
  uVar15 = *(ulong *)(puVar4 + 0x78);
  uVar14 = *(ulong *)(puVar4 + 0x80);
  uVar13 = *(ulong *)(puVar4 + 0x70);
  puVar6 = (ulong *)puVar4;
  switch(uVar9) {
  case 0:
    param_7 = param_3;
    param_6 = param_2;
    goto switchD_100481b9c_caseD_2c;
  case 1:
switchD_100481b9c_caseD_dc:
    param_1 = param_6;
switchD_100481b9c_caseD_91:
    param_6 = param_1;
    param_5 = param_7;
    break;
  case 2:
    param_4 = *(ulong *)(puVar4 + 0x98);
    pbVar11 = *(byte **)(puVar4 + 0x88);
    puVar5 = (ulong *)puVar4;
switchD_100481b9c_caseD_2a:
    *(char *)(puVar5 + 4) = (char)uVar10;
    puVar5[2] = uVar14;
    puVar5[3] = (ulong)pbVar11;
    *puVar5 = uVar13;
    puVar5[1] = uVar15;
    FUN_100481f00();
    param_6 = param_4;
    param_5 = uVar16 & 0xcfffffffffffffff;
    break;
  case 3:
switchD_100481b9c_caseD_34:
    param_1 = uVar15;
    *puVar6 = uVar13;
    FUN_1004820c8();
switchD_100481b9c_caseD_38:
    param_6 = param_1;
    param_5 = uVar14;
    break;
  case 4:
switchD_100481b9c_caseD_f8:
    param_6 = param_3;
    param_5 = param_4;
    break;
  default:
    param_6 = param_2;
    param_5 = param_3;
    break;
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x16:
  case 0x17:
    param_1 = param_3;
    param_7 = param_5;
    param_6 = param_4;
switchD_100481b9c_caseD_2c:
    param_5 = param_7;
    _swift_bridgeObjectRetain(param_1);
    break;
  case 0xb:
    _swift_bridgeObjectRetain(param_4);
    param_5 = param_7;
    break;
  case 0x11:
    _swift_bridgeObjectRetain(param_3);
    param_1 = param_4;
    param_7 = param_5;
    param_5 = param_6;
switchD_100481b9c_caseD_35:
    _swift_bridgeObjectRetain(param_1);
    param_6 = param_7;
    break;
  case 0x12:
switchD_100481b9c_caseD_c0:
    param_1 = param_3;
    uVar14 = param_5;
switchD_100481b9c_caseD_3e:
    param_5 = param_6;
switchD_100481b9c_caseD_b2:
    param_4 = param_7;
switchD_100481b9c_caseD_d6:
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(uVar14);
    FUN_100008184(param_5,param_4);
    param_1 = param_8;
    param_7 = uVar13;
switchD_100481b9c_caseD_ac:
    param_5 = param_7;
    param_6 = param_1;
    break;
  case 0x15:
    FUN_100447e1c();
    param_6 = param_4;
  }
  FUN_100008184(param_6,param_5);
  return;
switchD_100481b9c_caseD_87:
  uVar12 = (ulong)pbVar11 & 0x3000000000000000;
  uVar10 = unaff_x24;
switchD_100481b9c_caseD_28:
  bVar8 = false;
  if (uVar10 >> 8 == 0xffffffff) {
    bVar8 = uVar12 == 0;
  }
switchD_100481b9c_caseD_b1:
  if (bVar8) {
switchD_100481b9c_caseD_88:
    return;
  }
switchD_100481b9c_caseD_2f:
switchD_100481b9c_caseD_83:
  switchD_100481b9c::caseD_c9();
  return;
switchD_100481b9c_caseD_3f:
  param_3 = param_13;
LAB_100481c5c:
  FUN_100008184(param_1,param_3);
  param_1 = param_4;
  param_2 = param_5;
  param_3 = param_6;
switchD_100481b9c_caseD_36:
  FUN_100040b80(param_1,param_2,param_3);
  return;
}

