// rea decompile_all
// name: FUN_1005cd19c
// address: 0x1005cd19c
// body: available
// range: 0x1005cd19c-0x1005cd22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cd19c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined1 local_60;
  undefined8 local_58;
  
  lVar2 = 0;
  FUN_1005c8c98();
  puVar1 = (undefined8 *)(param_3 + *(int *)(lVar2 + 0x1c));
  pcVar3 = FUN_1005ce000;
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_2;
  lStack_68 = param_3;
  local_60 = param_6;
  local_58 = param_7;
  FUN_1005cad70(FUN_1005ce000,auStack_90,*puVar1,puVar1[1]);
  *param_1 = pcVar3;
  return;
}

