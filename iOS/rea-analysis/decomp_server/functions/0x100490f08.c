// rea decompile_all
// name: FUN_100490f08
// address: 0x100490f08
// body: available
// range: 0x100490f08-0x100490fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100490f08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_70 = param_1[4];
  local_60 = param_1[6];
  if (((local_70 & local_60 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      ((uint)(local_60 >> 0x3b) & 6 | (uint)(local_70 >> 0x3d) & 1) == 2) {
    uStack_88 = param_1[1];
    local_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_68 = param_1[5];
    uStack_50 = param_1[8];
    local_58 = param_1[7];
    local_48 = param_1[9];
    local_70 = local_70 & 0xdfffffffffffffff;
    local_60 = local_60 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1004947d4();
    (*pcVar1)(&local_90,3,&DAT_1009c6630,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100490fd4);
  (*pcVar1)();
}

