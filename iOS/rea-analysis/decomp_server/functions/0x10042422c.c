// rea decompile_all
// name: FUN_10042422c
// address: 0x10042422c
// body: available
// range: 0x10042422c-0x1004242e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042422c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uStack_58 = param_1[1];
  local_60 = *param_1;
  local_50 = param_1[2];
  if ((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(byte *)(param_1 + 9) != 0xff)) {
    uVar1 = 4;
    if ((*(byte *)(param_1 + 9) & 1) == 0) {
      uVar1 = 0;
    }
    if ((uVar1 | (uint)((ulong)param_1[8] >> 0x3c) & 3) == 5) {
      pcVar2 = *(code **)(param_4 + 0x88);
      FUN_10042f97c();
      (*pcVar2)(&local_60,6,&DAT_1009bee28,param_1,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004242e4);
  (*pcVar2)();
}

