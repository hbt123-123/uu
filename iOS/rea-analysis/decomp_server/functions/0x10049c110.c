// rea decompile_all
// name: FUN_10049c110
// address: 0x10049c110
// body: available
// range: 0x10049c110-0x10049c1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10049c110(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  if ((((ulong)param_1[4] < 0xffffffff00000000 || (ulong)param_1[7] >> 0x20 != 0) ||
      (param_1[9] & 0x3000000000000000) != 0) &&
      (((uint)((ulong)param_1[9] >> 0x3b) & 6) == 0 && -1 < (long)param_1[7])) {
    uStack_68 = param_1[1];
    local_70 = *param_1;
    uStack_58 = param_1[3];
    uStack_60 = param_1[2];
    local_50 = (undefined1)param_1[4];
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10049db44();
    (*pcVar1)(&local_70,1,&DAT_1009c7078,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10049c1c8);
  (*pcVar1)();
}

