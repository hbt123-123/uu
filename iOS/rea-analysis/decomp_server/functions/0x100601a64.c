// rea decompile_all
// name: FUN_100601a64
// address: 0x100601a64
// body: available
// range: 0x100601a64-0x100601db7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100601a64(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[4] = param_2[4];
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_2 + 0x34);
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  lVar4 = param_1[9];
  if (lVar4 == 0) {
    if (param_2[9] != 0) {
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      uVar1 = *(undefined4 *)(param_2 + 10);
      *(undefined1 *)((long)param_1 + 0x54) = *(undefined1 *)((long)param_2 + 0x54);
      *(undefined4 *)(param_1 + 10) = uVar1;
      uVar5 = param_2[0xc];
      _swift_bridgeObjectRetain();
      if (uVar5 >> 0x3c < 0xf) {
        uVar3 = param_2[0xb];
        FUN_100008184(uVar3,uVar5);
        param_1[0xb] = uVar3;
        param_1[0xc] = uVar5;
      }
      else {
        uVar3 = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xb] = uVar3;
      }
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)((long)param_2 + 0x6c);
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      uVar3 = param_2[0x11];
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
      param_1[0x11] = uVar3;
      uVar6 = *(undefined8 *)((long)param_2 + 0xbc);
      uVar3 = *(undefined8 *)((long)param_2 + 0xb4);
      uVar8 = *(undefined8 *)((long)param_2 + 0xcc);
      uVar7 = *(undefined8 *)((long)param_2 + 0xc4);
      uVar2 = *(undefined1 *)((long)param_2 + 0xd4);
      uVar9 = *(undefined8 *)((long)param_2 + 0xa4);
      *(undefined8 *)((long)param_1 + 0xac) = *(undefined8 *)((long)param_2 + 0xac);
      *(undefined8 *)((long)param_1 + 0xa4) = uVar9;
      *(undefined1 *)((long)param_1 + 0xd4) = uVar2;
      *(undefined8 *)((long)param_1 + 0xcc) = uVar8;
      *(undefined8 *)((long)param_1 + 0xc4) = uVar7;
      *(undefined8 *)((long)param_1 + 0xbc) = uVar6;
      *(undefined8 *)((long)param_1 + 0xb4) = uVar3;
      uVar3 = *(undefined8 *)((long)param_2 + 0x94);
      *(undefined8 *)((long)param_1 + 0x9c) = *(undefined8 *)((long)param_2 + 0x9c);
      *(undefined8 *)((long)param_1 + 0x94) = uVar3;
      uVar6 = param_2[0x1b];
      param_1[0x1b] = uVar6;
      param_1[0x1c] = param_2[0x1c];
      uVar3 = param_2[0x1d];
      param_1[0x1d] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar3);
      return param_1;
    }
    uVar6 = param_2[9];
    uVar3 = param_2[8];
    uVar7 = param_2[10];
    uVar9 = param_2[0xd];
    uVar8 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar7;
    param_1[0xd] = uVar9;
    param_1[0xc] = uVar8;
    param_1[9] = uVar6;
    param_1[8] = uVar3;
    uVar6 = param_2[0xf];
    uVar3 = param_2[0xe];
    uVar8 = param_2[0x11];
    uVar7 = param_2[0x10];
    uVar9 = param_2[0x12];
    uVar11 = param_2[0x15];
    uVar10 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar9;
    param_1[0x15] = uVar11;
    param_1[0x14] = uVar10;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar3;
    param_1[0x11] = uVar8;
    param_1[0x10] = uVar7;
    uVar6 = param_2[0x17];
    uVar3 = param_2[0x16];
    uVar8 = param_2[0x19];
    uVar7 = param_2[0x18];
    uVar9 = param_2[0x1a];
    uVar11 = param_2[0x1d];
    uVar10 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar9;
    param_1[0x1d] = uVar11;
    param_1[0x1c] = uVar10;
    param_1[0x17] = uVar6;
    param_1[0x16] = uVar3;
    param_1[0x19] = uVar8;
    param_1[0x18] = uVar7;
    return param_1;
  }
  if (param_2[9] == 0) {
    FUN_100601db8(param_1 + 8);
    uVar8 = param_2[0xb];
    uVar7 = param_2[10];
    uVar6 = param_2[0xd];
    uVar3 = param_2[0xc];
    uVar9 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar9;
    param_1[0xb] = uVar8;
    param_1[10] = uVar7;
    param_1[0xd] = uVar6;
    param_1[0xc] = uVar3;
    uVar3 = param_2[0x12];
    uVar7 = param_2[0x15];
    uVar6 = param_2[0x14];
    uVar11 = param_2[0xf];
    uVar10 = param_2[0xe];
    uVar9 = param_2[0x11];
    uVar8 = param_2[0x10];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x15] = uVar7;
    param_1[0x14] = uVar6;
    param_1[0xf] = uVar11;
    param_1[0xe] = uVar10;
    param_1[0x11] = uVar9;
    param_1[0x10] = uVar8;
    uVar3 = param_2[0x1a];
    uVar7 = param_2[0x1d];
    uVar6 = param_2[0x1c];
    uVar11 = param_2[0x17];
    uVar10 = param_2[0x16];
    uVar9 = param_2[0x19];
    uVar8 = param_2[0x18];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar3;
    param_1[0x1d] = uVar7;
    param_1[0x1c] = uVar6;
    param_1[0x17] = uVar11;
    param_1[0x16] = uVar10;
    param_1[0x19] = uVar9;
    param_1[0x18] = uVar8;
    return param_1;
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(lVar4);
  uVar1 = *(undefined4 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x54) = *(undefined1 *)((long)param_2 + 0x54);
  *(undefined4 *)(param_1 + 10) = uVar1;
  uVar5 = param_2[0xc];
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    if (uVar5 >> 0x3c < 0xf) {
      uVar7 = param_2[0xb];
      FUN_100008184(uVar7,uVar5);
      uVar3 = param_1[0xb];
      uVar6 = param_1[0xc];
      param_1[0xb] = uVar7;
      param_1[0xc] = uVar5;
      FUN_100006cdc(uVar3,uVar6);
      goto LAB_100601cfc;
    }
    FUN_100008d0c(param_1 + 0xb);
  }
  else if (uVar5 >> 0x3c < 0xf) {
    uVar3 = param_2[0xb];
    FUN_100008184(uVar3,uVar5);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar5;
    goto LAB_100601cfc;
  }
  uVar3 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar3;
LAB_100601cfc:
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)((long)param_2 + 0x6c);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  uVar3 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x11] = uVar3;
  uVar6 = *(undefined8 *)((long)param_2 + 0xbc);
  uVar3 = *(undefined8 *)((long)param_2 + 0xb4);
  uVar8 = *(undefined8 *)((long)param_2 + 0xcc);
  uVar7 = *(undefined8 *)((long)param_2 + 0xc4);
  uVar2 = *(undefined1 *)((long)param_2 + 0xd4);
  uVar9 = *(undefined8 *)((long)param_2 + 0xa4);
  *(undefined8 *)((long)param_1 + 0xac) = *(undefined8 *)((long)param_2 + 0xac);
  *(undefined8 *)((long)param_1 + 0xa4) = uVar9;
  *(undefined1 *)((long)param_1 + 0xd4) = uVar2;
  *(undefined8 *)((long)param_1 + 0xcc) = uVar8;
  *(undefined8 *)((long)param_1 + 0xc4) = uVar7;
  *(undefined8 *)((long)param_1 + 0xbc) = uVar6;
  *(undefined8 *)((long)param_1 + 0xb4) = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x94);
  *(undefined8 *)((long)param_1 + 0x9c) = *(undefined8 *)((long)param_2 + 0x9c);
  *(undefined8 *)((long)param_1 + 0x94) = uVar3;
  uVar3 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x1c] = param_2[0x1c];
  uVar3 = param_1[0x1d];
  param_1[0x1d] = param_2[0x1d];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}

