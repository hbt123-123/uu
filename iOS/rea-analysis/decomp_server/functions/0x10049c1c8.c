// rea decompile_all
// name: FUN_10049c1c8
// address: 0x10049c1c8
// body: available
// range: 0x10049c1c8-0x10049c29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10049c1c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_48 = param_1[9];
  if (((local_70 < 0xffffffff00000000 || uStack_58 >> 0x20 != 0) ||
      (uStack_48 & 0x3000000000000000) != 0) &&
      ((uint)(uStack_48 >> 0x3b) & 6 | (uint)(uStack_58 >> 0x3f)) == 1) {
    uStack_88 = param_1[1];
    local_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    local_60 = param_1[6];
    local_50 = param_1[8];
    uStack_58 = uStack_58 & 0x7fffffffffffffff;
    uStack_48 = uStack_48 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10049dd3c();
    (*pcVar1)(&local_90,2,&DAT_1009c7190,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10049c29c);
  (*pcVar1)();
}

