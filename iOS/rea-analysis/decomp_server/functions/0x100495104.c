// rea decompile_all
// name: FUN_100495104
// address: 0x100495104
// body: available
// range: 0x100495104-0x10049519b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100495104(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  _swift_bridgeObjectRetain();
  FUN_100008184(uVar2,uVar3);
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar1 = param_2[5];
  if (lVar1 == 0) {
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = lVar1;
    uVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar3;
    uVar2 = param_2[8];
    uVar4 = param_2[9];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    FUN_100008184(uVar2,uVar4);
    param_1[8] = uVar2;
    param_1[9] = uVar4;
  }
  return param_1;
}

