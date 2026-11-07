// rea decompile_all
// name: FUN_1006018f4
// address: 0x1006018f4
// body: available
// range: 0x1006018f4-0x100601a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1006018f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  lVar2 = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  if (lVar2 == 0) {
    uVar3 = param_2[0x18];
    uVar5 = param_2[0x1b];
    uVar1 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar3;
    param_1[0x1b] = uVar5;
    param_1[0x1a] = uVar1;
    uVar3 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar3;
    uVar3 = param_2[0x10];
    uVar5 = param_2[0x13];
    uVar1 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar3;
    param_1[0x13] = uVar5;
    param_1[0x12] = uVar1;
    uVar5 = param_2[0x14];
    uVar1 = param_2[0x17];
    uVar3 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar5;
    param_1[0x17] = uVar1;
    param_1[0x16] = uVar3;
    uVar3 = param_2[8];
    uVar5 = param_2[0xb];
    uVar1 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar5;
    param_1[10] = uVar1;
    uVar5 = param_2[0xc];
    uVar1 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar5;
    param_1[0xf] = uVar1;
    param_1[0xe] = uVar3;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar2;
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    *(undefined1 *)((long)param_1 + 0x54) = *(undefined1 *)((long)param_2 + 0x54);
    uVar4 = param_2[0xc];
    _swift_bridgeObjectRetain(lVar2);
    if (uVar4 >> 0x3c < 0xf) {
      uVar3 = param_2[0xb];
      FUN_100008184(uVar3,uVar4);
      param_1[0xb] = uVar3;
      param_1[0xc] = uVar4;
    }
    else {
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
    }
    param_1[0xd] = param_2[0xd];
    uVar3 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    uVar3 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar3;
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
    uVar3 = *(undefined8 *)((long)param_2 + 0xa4);
    *(undefined8 *)((long)param_1 + 0xac) = *(undefined8 *)((long)param_2 + 0xac);
    *(undefined8 *)((long)param_1 + 0xa4) = uVar3;
    uVar3 = *(undefined8 *)((long)param_2 + 0xb4);
    *(undefined8 *)((long)param_1 + 0xbc) = *(undefined8 *)((long)param_2 + 0xbc);
    *(undefined8 *)((long)param_1 + 0xb4) = uVar3;
    uVar3 = *(undefined8 *)((long)param_2 + 0xc4);
    *(undefined8 *)((long)param_1 + 0xcc) = *(undefined8 *)((long)param_2 + 0xcc);
    *(undefined8 *)((long)param_1 + 0xc4) = uVar3;
    *(undefined1 *)((long)param_1 + 0xd4) = *(undefined1 *)((long)param_2 + 0xd4);
    uVar3 = *(undefined8 *)((long)param_2 + 0x94);
    *(undefined8 *)((long)param_1 + 0x9c) = *(undefined8 *)((long)param_2 + 0x9c);
    *(undefined8 *)((long)param_1 + 0x94) = uVar3;
    uVar3 = param_2[0x1b];
    uVar1 = param_2[0x1c];
    param_1[0x1b] = uVar3;
    param_1[0x1c] = uVar1;
    uVar1 = param_2[0x1d];
    param_1[0x1d] = uVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar1);
  }
  return param_1;
}

