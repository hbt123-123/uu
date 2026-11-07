// rea decompile_all
// name: FUN_1003bb914
// address: 0x1003bb914
// body: available
// range: 0x1003bb914-0x1003bbac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1003bb914(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  lVar3 = param_2[0xd];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  if (lVar3 == 0) {
    lVar3 = param_2[0xd];
    uVar6 = param_2[0x10];
    uVar5 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = lVar3;
    param_1[0x10] = uVar6;
    param_1[0xf] = uVar5;
    uVar5 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar5;
    *(undefined4 *)((long)param_1 + 0x97) = *(undefined4 *)((long)param_2 + 0x97);
  }
  else {
    uVar5 = param_2[0xe];
    uVar4 = param_2[0xf];
    param_1[0xd] = lVar3;
    param_1[0xe] = uVar5;
    uVar6 = param_2[0x10];
    uVar1 = param_2[0x11];
    param_1[0xf] = uVar4;
    param_1[0x10] = uVar6;
    uVar4 = param_2[0x12];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar4;
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    *(undefined2 *)((long)param_1 + 0x99) = *(undefined2 *)((long)param_2 + 0x99);
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
  }
  lVar3 = param_2[0x14];
  if (lVar3 == 0) {
    lVar3 = param_2[0x14];
    uVar6 = param_2[0x17];
    uVar5 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = lVar3;
    param_1[0x17] = uVar6;
    param_1[0x16] = uVar5;
    uVar5 = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar5;
    *(undefined4 *)((long)param_1 + 0xcf) = *(undefined4 *)((long)param_2 + 0xcf);
  }
  else {
    uVar5 = param_2[0x15];
    uVar4 = param_2[0x16];
    param_1[0x14] = lVar3;
    param_1[0x15] = uVar5;
    uVar6 = param_2[0x17];
    uVar1 = param_2[0x18];
    param_1[0x16] = uVar4;
    param_1[0x17] = uVar6;
    uVar4 = param_2[0x19];
    param_1[0x18] = uVar1;
    param_1[0x19] = uVar4;
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
    *(undefined2 *)((long)param_1 + 0xd1) = *(undefined2 *)((long)param_2 + 0xd1);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
  }
  uVar5 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = uVar5;
  uVar5 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar5;
  uVar6 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar6;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}

