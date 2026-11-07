// rea decompile_all
// name: FUN_1005ad1ec
// address: 0x1005ad1ec
// body: available
// range: 0x1005ad1ec-0x1005ad317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005ad1ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  FUN_100006cdc(uVar1,uVar2);
  lVar3 = param_2[4];
  plVar4 = param_1 + 4;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  if (*plVar4 == 0) {
LAB_1005ad2c8:
    uVar1 = param_2[8];
    uVar5 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    param_1[0xb] = uVar5;
    param_1[10] = uVar2;
    uVar1 = *(undefined8 *)((long)param_2 + 0x59);
    *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
    *(undefined8 *)((long)param_1 + 0x59) = uVar1;
    lVar3 = param_2[4];
    uVar2 = param_2[7];
    uVar1 = param_2[6];
    param_1[5] = param_2[5];
    *plVar4 = lVar3;
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    return param_1;
  }
  if (lVar3 == 0) {
    FUN_1005a7f28(plVar4);
    goto LAB_1005ad2c8;
  }
  param_1[4] = lVar3;
  _swift_bridgeObjectRelease();
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  FUN_100006cdc(uVar1,uVar2);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar1);
  if (param_1[0xb] != 0) {
    lVar3 = param_2[0xb];
    if (lVar3 != 0) {
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar5 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar5;
      FUN_100006cdc(uVar1,uVar2);
      uVar1 = param_1[0xb];
      param_1[0xb] = lVar3;
      _swift_bridgeObjectRelease(uVar1);
      param_1[0xc] = param_2[0xc];
      goto LAB_1005ad2fc;
    }
    FUN_1005a7fb4(param_1 + 9);
  }
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
LAB_1005ad2fc:
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}

