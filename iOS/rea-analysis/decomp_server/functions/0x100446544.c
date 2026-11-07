// rea decompile_all
// name: FUN_100446544
// address: 0x100446544
// body: available
// range: 0x100446544-0x10044661f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100446544(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  undefined4 local_50;
  byte local_4c;
  
  uStack_68 = param_1[3];
  local_60 = param_1[4];
  uStack_58 = param_1[5];
  local_4c = *(byte *)((long)param_1 + 0x34);
  if (local_4c >> 6 == 0 &&
      (((((uStack_68 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
        local_60 >> 0x21 != 0x3fffffff) || uStack_58 >> 0x21 != 0) || local_4c >> 1 != 0)) {
    local_50 = *(undefined4 *)(param_1 + 6);
    local_70 = param_1[2];
    uStack_78 = param_1[1];
    local_80 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10044836c();
    (*pcVar1)(&local_80,1,&DAT_1009c1330,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100446620);
  (*pcVar1)();
}

