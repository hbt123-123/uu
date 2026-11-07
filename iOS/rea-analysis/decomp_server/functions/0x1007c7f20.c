// rea decompile_all
// name: FUN_1007c7f20
// address: 0x1007c7f20
// body: available
// range: 0x1007c7f20-0x1007c7f6b inclusive
// range: 0x1007c7f78-0x1007c7f9f inclusive
// range: 0x1007c7fac-0x1007c7fc7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007c7f20(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 2) {
    uVar2 = 4;
  }
  if (param_3 + 2 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfd < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfe) {
                    /* WARNING: Could not recover jumptable at 0x0001007c7f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1007c7f6c + (ulong)(byte)(&DAT_100852a45)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x02';
                    /* WARNING: Could not recover jumptable at 0x0001007c7f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1007c7fa0 + (ulong)(byte)(&DAT_100852a40)[uVar1] * 4))();
  return;
}

