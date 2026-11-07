// rea decompile_all
// name: FUN_10051aec4
// address: 0x10051aec4
// body: available
// range: 0x10051aec4-0x10051af37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051aec4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x68))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_100995bd8,lVar1)
  ;
  FUN_10051b940(param_1,&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  return;
}

