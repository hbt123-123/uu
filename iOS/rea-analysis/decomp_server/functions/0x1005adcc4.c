// rea decompile_all
// name: FUN_1005adcc4
// address: 0x1005adcc4
// body: available
// range: 0x1005adcc4-0x1005ade97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005adcc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  FUN_100008184(uVar3,uVar5);
  uVar4 = *param_1;
  uVar1 = param_1[1];
  *param_1 = uVar3;
  param_1[1] = uVar5;
  FUN_100006cdc(uVar4,uVar1);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
  *(undefined1 *)((long)param_1 + 0x26) = *(undefined1 *)((long)param_2 + 0x26);
  param_1[5] = param_2[5];
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[7] = param_2[7];
  uVar3 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[9] = param_2[9];
  uVar3 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)((long)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  param_1[0xc] = param_2[0xc];
  uVar3 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  if (param_1[0x10] == 0) {
    if (param_2[0x10] == 0) {
      uVar3 = param_2[0xe];
      uVar5 = param_2[0x11];
      uVar4 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar3;
      param_1[0x11] = uVar5;
      param_1[0x10] = uVar4;
    }
    else {
      uVar3 = param_2[0xe];
      uVar4 = param_2[0xf];
      FUN_100008184(uVar3,uVar4);
      param_1[0xe] = uVar3;
      param_1[0xf] = uVar4;
      param_1[0x10] = param_2[0x10];
      uVar3 = param_2[0x11];
      param_1[0x11] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_retain(uVar3);
    }
  }
  else if (param_2[0x10] == 0) {
    FUN_1005ade98(param_1 + 0xe);
    uVar5 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
  }
  else {
    uVar3 = param_2[0xe];
    uVar5 = param_2[0xf];
    FUN_100008184(uVar3,uVar5);
    uVar4 = param_1[0xe];
    uVar1 = param_1[0xf];
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar5;
    FUN_100006cdc(uVar4,uVar1);
    uVar3 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    _swift_retain();
    _swift_release(uVar3);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}

