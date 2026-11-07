// rea decompile_all
// name: FUN_1005ace14
// address: 0x1005ace14
// body: available
// range: 0x1005ace14-0x1005acf23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005ace14(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  FUN_100008184(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  lVar1 = param_2[4];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  if (lVar1 == 0) {
    uVar3 = param_2[8];
    uVar2 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar2;
    param_1[10] = uVar4;
    uVar3 = *(undefined8 *)((long)param_2 + 0x59);
    *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
    *(undefined8 *)((long)param_1 + 0x59) = uVar3;
    lVar1 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = lVar1;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
  }
  else {
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    param_1[4] = lVar1;
    param_1[5] = uVar3;
    uVar2 = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    FUN_100008184(uVar4,uVar2);
    param_1[6] = uVar4;
    param_1[7] = uVar2;
    param_1[8] = param_2[8];
    lVar1 = param_2[0xb];
    _swift_bridgeObjectRetain();
    if (lVar1 == 0) {
      uVar3 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar3;
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
    }
    else {
      uVar3 = param_2[9];
      uVar4 = param_2[10];
      FUN_100008184(uVar3,uVar4);
      param_1[9] = uVar3;
      param_1[10] = uVar4;
      param_1[0xb] = lVar1;
      param_1[0xc] = param_2[0xc];
      _swift_bridgeObjectRetain(lVar1);
    }
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  }
  return param_1;
}

