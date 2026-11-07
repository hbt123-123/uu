// rea decompile_all
// name: FUN_10008450c
// address: 0x10008450c
// body: available
// range: 0x10008450c-0x10008469f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10008450c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar1);
  if (param_1[7] != 0) {
    lVar3 = param_2[7];
    if (lVar3 != 0) {
      param_1[6] = param_2[6];
      param_1[7] = lVar3;
      _swift_bridgeObjectRelease();
      uVar1 = param_1[8];
      param_1[8] = param_2[8];
      _swift_bridgeObjectRelease(uVar1);
      if (param_1[0xc] != 0) {
        FUN_100001428(param_1 + 9);
      }
      uVar1 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar1;
      uVar1 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar1;
      uVar1 = param_1[0xd];
      param_1[0xd] = param_2[0xd];
      _swift_bridgeObjectRelease(uVar1);
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
      goto LAB_1000845f8;
    }
    FUN_100065194(param_1 + 6);
  }
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar2;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar4 = param_2[6];
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
LAB_1000845f8:
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRelease(uVar1);
  if (param_1[0x11] != 0) {
    lVar3 = param_2[0x11];
    if (lVar3 != 0) {
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = lVar3;
      _swift_bridgeObjectRelease();
      uVar1 = param_1[0x12];
      param_1[0x12] = param_2[0x12];
      _swift_bridgeObjectRelease(uVar1);
      if (param_1[0x16] != 0) {
        FUN_100001428(param_1 + 0x13);
      }
      uVar1 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar1;
      uVar1 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar1;
      uVar1 = param_1[0x17];
      param_1[0x17] = param_2[0x17];
      _swift_bridgeObjectRelease(uVar1);
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
      return param_1;
    }
    FUN_100065194(param_1 + 0x10);
  }
  uVar1 = param_2[0x14];
  uVar4 = param_2[0x17];
  uVar2 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar1;
  param_1[0x17] = uVar4;
  param_1[0x16] = uVar2;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar4 = param_2[0x10];
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar4;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  return param_1;
}

