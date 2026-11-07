// rea decompile_all
// name: FUN_1005b6d94
// address: 0x1005b6d94
// body: available
// range: 0x1005b6d94-0x1005b6e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b6d94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  
  uStack_58 = param_1[1];
  local_60 = *param_1;
  local_50 = param_1[2];
  if ((((local_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(byte *)(param_1 + 3) != 0xff)) {
    uVar1 = 4;
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      uVar1 = 0;
    }
    if ((uVar1 | (uint)(local_50 >> 0x3c) & 3) == 4) {
      local_50 = local_50 & 0xcfffffffffffffff;
      pcVar2 = *(code **)(param_4 + 0x88);
      FUN_100519a60();
      (*pcVar2)(&local_60,5,&DAT_1009d6d28,param_1,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6e4c);
  (*pcVar2)();
}

