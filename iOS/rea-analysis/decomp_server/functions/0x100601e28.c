// rea decompile_all
// name: FUN_100601e28
// address: 0x100601e28
// body: available
// range: 0x100601e28-0x100601faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100601e28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar1);
  uVar4 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  _swift_bridgeObjectRelease(uVar1);
  uVar4 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  if (param_1[9] == 0) {
LAB_100601eec:
    uVar4 = param_2[0x18];
    uVar5 = param_2[0x1b];
    uVar1 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar4;
    param_1[0x1b] = uVar5;
    param_1[0x1a] = uVar1;
    uVar4 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar4;
    uVar4 = param_2[0x10];
    uVar5 = param_2[0x13];
    uVar1 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar4;
    param_1[0x13] = uVar5;
    param_1[0x12] = uVar1;
    uVar5 = param_2[0x14];
    uVar1 = param_2[0x17];
    uVar4 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar5;
    param_1[0x17] = uVar1;
    param_1[0x16] = uVar4;
    uVar4 = param_2[8];
    uVar5 = param_2[0xb];
    uVar1 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar5;
    param_1[10] = uVar1;
    uVar5 = param_2[0xc];
    uVar1 = param_2[0xf];
    uVar4 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar5;
    param_1[0xf] = uVar1;
    param_1[0xe] = uVar4;
    return param_1;
  }
  lVar2 = param_2[9];
  if (lVar2 == 0) {
    FUN_100601db8(param_1 + 8);
    goto LAB_100601eec;
  }
  param_1[8] = param_2[8];
  param_1[9] = lVar2;
  _swift_bridgeObjectRelease();
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x54) = *(undefined1 *)((long)param_2 + 0x54);
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    uVar3 = param_2[0xc];
    if (uVar3 >> 0x3c < 0xf) {
      uVar4 = param_1[0xb];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = uVar3;
      FUN_100006cdc(uVar4);
      goto LAB_100601f30;
    }
    FUN_100008d0c(param_1 + 0xb);
  }
  uVar4 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
LAB_100601f30:
  uVar4 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar4;
  uVar4 = param_2[0x10];
  uVar1 = param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar4;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x11] = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar4 = *(undefined8 *)((long)param_2 + 0xa4);
  *(undefined8 *)((long)param_1 + 0xac) = *(undefined8 *)((long)param_2 + 0xac);
  *(undefined8 *)((long)param_1 + 0xa4) = uVar4;
  uVar4 = *(undefined8 *)((long)param_2 + 0xb4);
  *(undefined8 *)((long)param_1 + 0xbc) = *(undefined8 *)((long)param_2 + 0xbc);
  *(undefined8 *)((long)param_1 + 0xb4) = uVar4;
  uVar4 = *(undefined8 *)((long)param_2 + 0xc4);
  *(undefined8 *)((long)param_1 + 0xcc) = *(undefined8 *)((long)param_2 + 0xcc);
  *(undefined8 *)((long)param_1 + 0xc4) = uVar4;
  *(undefined1 *)((long)param_1 + 0xd4) = *(undefined1 *)((long)param_2 + 0xd4);
  uVar4 = *(undefined8 *)((long)param_2 + 0x94);
  *(undefined8 *)((long)param_1 + 0x9c) = *(undefined8 *)((long)param_2 + 0x9c);
  *(undefined8 *)((long)param_1 + 0x94) = uVar4;
  uVar4 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[0x1d];
  uVar1 = param_1[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar4;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}

