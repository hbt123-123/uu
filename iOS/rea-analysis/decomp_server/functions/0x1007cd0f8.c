// rea decompile_all
// name: FUN_1007cd0f8
// address: 0x1007cd0f8
// body: available
// range: 0x1007cd0f8-0x1007cd143 inclusive
// range: 0x1007cd150-0x1007cd177 inclusive
// range: 0x1007cd184-0x1007cd19f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007cd0f8(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 6) {
    uVar2 = 4;
  }
  if (param_3 + 6 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xf9 < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfa) {
                    /* WARNING: Could not recover jumptable at 0x0001007cd140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1007cd144 + (ulong)(byte)(&DAT_10085306d)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x06';
                    /* WARNING: Could not recover jumptable at 0x0001007cd174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1007cd178 + (ulong)(byte)(&DAT_100853068)[uVar1] * 4))();
  return;
}

