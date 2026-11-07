// rea decompile_all
// name: FUN_1005b0b10
// address: 0x1005b0b10
// body: available
// range: 0x1005b0b10-0x1005b0c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005b0b10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_100006cdc(uVar1,uVar4);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  if (param_1[7] != 0) {
    lVar2 = param_2[7];
    if (lVar2 != 0) {
      uVar1 = param_1[5];
      uVar4 = param_1[6];
      uVar3 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar3;
      FUN_100006cdc(uVar1,uVar4);
      uVar1 = param_1[7];
      param_1[7] = lVar2;
      _swift_bridgeObjectRelease(uVar1);
      param_1[8] = param_2[8];
      goto LAB_1005b0bb0;
    }
    FUN_1005a7fb4(param_1 + 5);
  }
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
LAB_1005b0bb0:
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  if (param_1[0xe] != 1) {
    lVar2 = param_2[0xe];
    if (lVar2 != 1) {
      uVar1 = param_1[10];
      uVar4 = param_1[0xb];
      uVar3 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar3;
      FUN_100006cdc(uVar1,uVar4);
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
      uVar1 = param_1[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = lVar2;
      _swift_bridgeObjectRelease(uVar1);
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      return param_1;
    }
    FUN_1005b0ab0(param_1 + 10);
  }
  uVar1 = param_2[10];
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar4;
  uVar1 = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
  *(undefined8 *)((long)param_1 + 0x69) = uVar1;
  return param_1;
}

