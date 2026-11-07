// rea decompile_all
// name: FUN_1005ac7a4
// address: 0x1005ac7a4
// body: available
// range: 0x1005ac7a4-0x1005aca7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005ac7a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[8];
  uVar8 = param_2[9];
  FUN_100008184(uVar3,uVar8);
  uVar7 = param_1[8];
  uVar1 = param_1[9];
  param_1[8] = uVar3;
  param_1[9] = uVar8;
  FUN_100006cdc(uVar7,uVar1);
  param_1[10] = param_2[10];
  uVar3 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0xc] = param_2[0xc];
  uVar3 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  if (param_1[0x10] == 0) {
    if (param_2[0x10] == 0) {
      uVar3 = param_2[0xe];
      uVar8 = param_2[0x11];
      uVar7 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar3;
      param_1[0x11] = uVar8;
      param_1[0x10] = uVar7;
    }
    else {
      uVar3 = param_2[0xe];
      uVar7 = param_2[0xf];
      FUN_100008184(uVar3,uVar7);
      param_1[0xe] = uVar3;
      param_1[0xf] = uVar7;
      param_1[0x10] = param_2[0x10];
      uVar3 = param_2[0x11];
      param_1[0x11] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_retain(uVar3);
    }
  }
  else if (param_2[0x10] == 0) {
    FUN_1005aca7c(param_1 + 0xe);
    uVar8 = param_2[0xe];
    uVar7 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar8;
    param_1[0x11] = uVar7;
    param_1[0x10] = uVar3;
  }
  else {
    uVar3 = param_2[0xe];
    uVar8 = param_2[0xf];
    FUN_100008184(uVar3,uVar8);
    uVar7 = param_1[0xe];
    uVar1 = param_1[0xf];
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar8;
    FUN_100006cdc(uVar7,uVar1);
    uVar3 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    _swift_retain();
    _swift_release(uVar3);
  }
  plVar4 = param_1 + 0x12;
  lVar5 = *plVar4;
  plVar6 = param_2 + 0x12;
  lVar2 = *plVar6;
  if (lVar5 == 0) {
    if (lVar2 == 0) {
      lVar2 = *plVar6;
      uVar7 = param_2[0x15];
      uVar3 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      *plVar4 = lVar2;
      param_1[0x15] = uVar7;
      param_1[0x14] = uVar3;
    }
    else {
      param_1[0x12] = lVar2;
      uVar3 = param_2[0x13];
      uVar7 = param_2[0x14];
      _swift_bridgeObjectRetain();
      FUN_100008184(uVar3,uVar7);
      param_1[0x13] = uVar3;
      param_1[0x14] = uVar7;
      param_1[0x15] = param_2[0x15];
      _swift_bridgeObjectRetain();
    }
  }
  else if (lVar2 == 0) {
    FUN_1005acaa8(plVar4);
    lVar2 = *plVar6;
    uVar7 = param_2[0x15];
    uVar3 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    *plVar4 = lVar2;
    param_1[0x15] = uVar7;
    param_1[0x14] = uVar3;
  }
  else {
    param_1[0x12] = lVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar5);
    uVar3 = param_2[0x13];
    uVar8 = param_2[0x14];
    FUN_100008184(uVar3,uVar8);
    uVar7 = param_1[0x13];
    uVar1 = param_1[0x14];
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar8;
    FUN_100006cdc(uVar7,uVar1);
    uVar3 = param_1[0x15];
    param_1[0x15] = param_2[0x15];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
  }
  param_1[0x16] = param_2[0x16];
  uVar3 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}

