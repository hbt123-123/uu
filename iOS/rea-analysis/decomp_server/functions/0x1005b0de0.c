// rea decompile_all
// name: FUN_1005b0de0
// address: 0x1005b0de0
// body: available
// range: 0x1005b0de0-0x1005b0f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005b0de0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  FUN_100008184(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  FUN_100006cdc(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[6] == 0) {
    if (param_2[6] == 0) {
      uVar2 = param_2[4];
      uVar4 = param_2[7];
      uVar3 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      param_1[7] = uVar4;
      param_1[6] = uVar3;
    }
    else {
      uVar2 = param_2[4];
      uVar3 = param_2[5];
      FUN_100008184(uVar2,uVar3);
      param_1[4] = uVar2;
      param_1[5] = uVar3;
      param_1[6] = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
      *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
      *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
      *(undefined1 *)((long)param_1 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
      *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
      *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[6] == 0) {
    FUN_1005a7fb4(param_1 + 4);
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
  }
  else {
    uVar2 = param_2[4];
    uVar4 = param_2[5];
    FUN_100008184(uVar2,uVar4);
    uVar3 = param_1[4];
    uVar1 = param_1[5];
    param_1[4] = uVar2;
    param_1[5] = uVar4;
    FUN_100006cdc(uVar3,uVar1);
    uVar2 = param_1[6];
    param_1[6] = param_2[6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
    *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
    *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
    *(undefined1 *)((long)param_1 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
    *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
    *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}

