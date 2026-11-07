// rea decompile_all
// name: FUN_10069aed4
// address: 0x10069aed4
// body: available
// range: 0x10069aed4-0x10069af4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10069aed4(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _free((void *)*param_2);
  *param_2 = 0;
  puVar1 = (uint *)*param_1;
  if (puVar1 == (uint *)0x0) {
    uVar2 = _DAT_100b2c490 & 0xffffffff00000000;
    puVar1 = DAT_100b2c498;
    uVar3 = _DAT_100b2c490;
  }
  else {
    *param_1 = 0;
    _closedir();
    if ((int)puVar1 == 0) {
      uVar3 = 0;
    }
    else {
      puVar1 = (uint *)___error();
      uVar3 = (ulong)*puVar1;
    }
    FUN_10069f164();
    uVar2 = 0;
  }
  auVar4._0_8_ = uVar2 | uVar3 & 0xffffffff;
  auVar4._8_8_ = puVar1;
  return auVar4;
}

