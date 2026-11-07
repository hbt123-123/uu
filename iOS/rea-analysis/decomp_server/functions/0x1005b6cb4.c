// rea decompile_all
// name: FUN_1005b6cb4
// address: 0x1005b6cb4
// body: available
// range: 0x1005b6cb4-0x1005b6d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b6cb4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  uint uVar2;
  
  if ((((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(byte *)(param_1 + 3) != 0xff)) {
    uVar2 = 4;
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      uVar2 = 0;
    }
    if ((uVar2 | (uint)((ulong)param_1[2] >> 0x3c) & 3) == 2) {
      (**(code **)(param_4 + 0x70))(*param_1,param_1[1],3,param_3);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6d28);
  (*pcVar1)();
}

