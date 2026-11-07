// rea decompile_all
// name: FUN_1005acb18
// address: 0x1005acb18
// body: available
// range: 0x1005acb18-0x1005accaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005acb18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  FUN_100006cdc(uVar1,uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[0x10] == 0) {
LAB_1005acc28:
    uVar1 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar2 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar2;
  }
  else {
    lVar3 = param_2[0x10];
    if (lVar3 == 0) {
      FUN_1005aca7c(param_1 + 0xe);
      goto LAB_1005acc28;
    }
    uVar1 = param_1[0xe];
    uVar2 = param_1[0xf];
    uVar5 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    FUN_100006cdc(uVar1,uVar2);
    uVar1 = param_1[0x10];
    param_1[0x10] = lVar3;
    _swift_bridgeObjectRelease(uVar1);
    uVar1 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    _swift_release(uVar1);
  }
  plVar4 = param_1 + 0x12;
  lVar3 = param_2[0x12];
  if (*plVar4 != 0) {
    if (lVar3 != 0) {
      param_1[0x12] = lVar3;
      _swift_bridgeObjectRelease();
      uVar1 = param_1[0x13];
      uVar2 = param_1[0x14];
      uVar5 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar5;
      FUN_100006cdc(uVar1,uVar2);
      uVar1 = param_1[0x15];
      param_1[0x15] = param_2[0x15];
      _swift_bridgeObjectRelease(uVar1);
      goto LAB_1005acc84;
    }
    FUN_1005acaa8(plVar4);
  }
  lVar3 = param_2[0x12];
  uVar2 = param_2[0x15];
  uVar1 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  *plVar4 = lVar3;
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
LAB_1005acc84:
  uVar1 = param_2[0x17];
  uVar2 = param_1[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}

