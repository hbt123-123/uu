// rea decompile_all
// name: FUN_100446620
// address: 0x100446620
// body: available
// range: 0x100446620-0x1004466fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100446620(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  
  uStack_58 = param_1[3];
  uVar1 = param_1[4];
  if ((*(byte *)((long)param_1 + 0x34) & 0xc0) == 0x40 &&
      (((((uStack_58 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 || uVar1 >> 0x21 != 0x3fffffff
        ) || (ulong)param_1[5] >> 0x21 != 0) || *(byte *)((long)param_1 + 0x34) >> 1 != 0)) {
    local_60 = param_1[2];
    uStack_68 = param_1[1];
    local_70 = *param_1;
    local_4c = (undefined1)(uVar1 >> 0x20);
    local_50 = (undefined4)uVar1;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_100448564();
    (*pcVar2)(&local_70,2,&DAT_1009c1440,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004466fc);
  (*pcVar2)();
}

