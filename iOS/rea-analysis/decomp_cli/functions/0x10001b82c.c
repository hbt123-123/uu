// rea decompile_all
// name: FUN_10001b82c
// address: 0x10001b82c
// body: available
// range: 0x10001b82c-0x10001b967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10001b82c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  lVar2 = param_1[3];
  if (lVar2 == 0) {
    if (param_2[3] == 0) {
      uVar3 = param_2[3];
      uVar1 = param_2[2];
      uVar4 = param_2[4];
      uVar6 = param_2[7];
      uVar5 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      param_1[7] = uVar6;
      param_1[6] = uVar5;
      param_1[3] = uVar3;
      param_1[2] = uVar1;
    }
    else {
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_1[4] = param_2[4];
      uVar1 = param_2[5];
      param_1[5] = uVar1;
      param_1[6] = param_2[6];
      uVar3 = param_2[7];
      param_1[7] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar3);
    }
  }
  else if (param_2[3] == 0) {
    FUN_10001b968(param_1 + 2);
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar1 = param_2[6];
    uVar6 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar6;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    param_1[7] = uVar3;
    param_1[6] = uVar1;
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    param_1[4] = param_2[4];
    uVar1 = param_1[5];
    param_1[5] = param_2[5];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
    param_1[6] = param_2[6];
    uVar1 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}

