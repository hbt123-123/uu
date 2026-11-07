// rea decompile_all
// name: FUN_1005b6b94
// address: 0x1005b6b94
// body: available
// range: 0x1005b6b94-0x1005b6c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b6b94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 local_50;
  undefined1 local_48;
  
  local_50 = *param_1;
  if (((((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 3) != 0xff)) &&
     ((*(byte *)(param_1 + 3) & 1) == 0 && ((uint)((ulong)param_1[2] >> 0x3c) & 3) == 0)) {
    local_48 = (undefined1)param_1[1];
    pcVar1 = *(code **)(param_4 + 0x80);
    FUN_1005b9f00();
    (*pcVar1)(&local_50,1,&DAT_1009d6cb0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6c44);
  (*pcVar1)();
}

