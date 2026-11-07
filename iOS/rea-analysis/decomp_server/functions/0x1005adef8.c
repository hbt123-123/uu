// rea decompile_all
// name: FUN_1005adef8
// address: 0x1005adef8
// body: available
// range: 0x1005adef8-0x1005ae007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005adef8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  FUN_100006cdc(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined2 *)((long)param_1 + 0x25) = *(undefined2 *)((long)param_2 + 0x25);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)((long)param_2 + 0x5c);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  lVar3 = param_1[0x10];
  if (lVar3 != 0) {
    lVar4 = param_2[0x10];
    if (lVar4 != 0) {
      uVar1 = param_1[0xe];
      uVar2 = param_1[0xf];
      uVar5 = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar5;
      FUN_100006cdc(uVar1,uVar2);
      param_1[0x10] = lVar4;
      _swift_bridgeObjectRelease(lVar3);
      uVar1 = param_1[0x11];
      param_1[0x11] = param_2[0x11];
      _swift_release(uVar1);
      goto LAB_1005adfec;
    }
    FUN_1005ade98(param_1 + 0xe);
  }
  uVar1 = param_2[0xe];
  uVar5 = param_2[0x11];
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  param_1[0x11] = uVar5;
  param_1[0x10] = uVar2;
LAB_1005adfec:
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}

