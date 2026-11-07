// rea decompile_all
// name: FUN_100182018
// address: 0x100182018
// body: available
// range: 0x100182018-0x1001820cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100182018(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100008184(param_3,param_4);
  uVar3 = 0;
  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
  uVar2 = param_5;
  FUN_10017cb14();
  bVar1 = (byte)uVar3;
  FUN_10017cb2c();
  _swift_bridgeObjectRelease(0xe000000000000000);
  *param_1 = uVar2;
  *(byte *)(param_1 + 1) = bVar1 & 1;
  param_1[2] = param_5;
  param_1[3] = uVar3;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  return;
}

