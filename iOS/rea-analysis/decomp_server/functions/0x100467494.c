// rea decompile_all
// name: FUN_100467494
// address: 0x100467494
// body: available
// range: 0x100467494-0x100467593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100467494(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    if (param_2[2] == 0) {
      uVar3 = param_2[1];
      uVar1 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[4] = param_2[4];
      param_1[1] = uVar3;
      *param_1 = uVar1;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
    }
    else {
      uVar1 = *param_2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
      *param_1 = uVar1;
      param_1[2] = param_2[2];
      uVar1 = param_2[3];
      uVar3 = param_2[4];
      _swift_bridgeObjectRetain();
      FUN_100008184(uVar1,uVar3);
      param_1[3] = uVar1;
      param_1[4] = uVar3;
    }
  }
  else if (param_2[2] == 0) {
    FUN_100467594(param_1);
    uVar1 = param_2[4];
    uVar5 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    param_1[4] = uVar1;
  }
  else {
    uVar1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    uVar1 = param_2[3];
    uVar4 = param_2[4];
    FUN_100008184(uVar1,uVar4);
    uVar3 = param_1[3];
    uVar5 = param_1[4];
    param_1[3] = uVar1;
    param_1[4] = uVar4;
    FUN_100006cdc(uVar3,uVar5);
  }
  uVar1 = param_2[5];
  uVar4 = param_2[6];
  FUN_100008184(uVar1,uVar4);
  uVar3 = param_1[5];
  uVar5 = param_1[6];
  param_1[5] = uVar1;
  param_1[6] = uVar4;
  FUN_100006cdc(uVar3,uVar5);
  return param_1;
}

