// rea decompile_all
// name: FUN_10028a5d8
// address: 0x10028a5d8
// body: available
// range: 0x10028a5d8-0x10028a66b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_10028a5d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = *param_2;
    FUN_100008184(uVar4,uVar3);
    *param_1 = uVar4;
    param_1[1] = uVar3;
  }
  else {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
  }
  lVar2 = param_2[2];
  if (lVar2 == 0) {
    lVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar2;
    param_1[4] = param_2[4];
  }
  else {
    uVar4 = param_2[3];
    uVar1 = param_2[4];
    param_1[2] = lVar2;
    param_1[3] = uVar4;
    param_1[4] = uVar1;
    _swift_retain(uVar1);
  }
  return param_1;
}

