// rea decompile_all
// name: FUN_100518b1c
// address: 0x100518b1c
// body: available
// range: 0x100518b1c-0x100518b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100518b1c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar2 = 0xb;
    if (((uint)(param_2 >> 0x3c) & (uint)((param_1 & 0x800000000000000) == 0)) == 0) {
      uVar2 = 7;
    }
    uVar2 = uVar2 | uVar1 << 0x10;
    __sSS5index6beforeSS5IndexVAD_tF(uVar2,param_1,param_2);
    __sSSySJSS5IndexVcig();
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = uVar2;
    return auVar3;
  }
  return ZEXT816(0);
}

