// rea decompile_all
// name: FUN_10053a044
// address: 0x10053a044
// body: available
// range: 0x10053a044-0x10053a0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10053a044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_38 [8];
  
  pcVar2 = *(code **)(param_8 + 0x20);
  uVar1 = 0;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  lStack_68 = param_8;
  local_60 = param_3;
  local_58 = param_4;
  local_50 = param_2;
  __sSaMa(0,param_5);
  (*pcVar2)(local_38,FUN_10053a400,auStack_90,uVar1,param_6,param_8);
  return;
}

