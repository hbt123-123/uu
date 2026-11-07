// rea decompile_all
// name: FUN_1003b14a0
// address: 0x1003b14a0
// body: available
// range: 0x1003b14a0-0x1003b1533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003b14a0(undefined1 (*param_1) [16],ulong param_2,uint param_3)

{
  ulong uVar1;
  
  param_3 = param_3 & 0xff;
  uVar1 = (ulong)param_3;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if ((param_3 == 0) || (param_3 == 1)) {
LAB_1003b1510:
        FUN_1002c153c();
        goto LAB_1003b1528;
      }
    }
    else if (param_3 == 2) goto LAB_1003b1510;
  }
  else if (5 < param_3) {
    if ((param_3 == 6) || (param_3 == 8)) goto LAB_1003b1510;
    if ((param_3 == 9) && (uVar1 = 0, param_1 != (undefined1 (*) [16])0x0 || param_2 != 0)) {
      uVar1 = (ulong)param_1 ^ 1 | param_2;
    }
  }
  FUN_1002c14c0(uVar1);
LAB_1003b1528:
  return *param_1;
}

