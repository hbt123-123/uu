// rea decompile_all
// name: FUN_100466504
// address: 0x100466504
// body: available
// range: 0x100466504-0x1004665b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100466504(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [40];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  local_b0 = param_1[2];
  local_a0 = param_1[4];
  if (local_b0 != 0) {
    FUN_1000a0074(&local_c0,auStack_90);
    puVar1 = auStack_90;
    FUN_1000a0074(puVar1,&local_68);
    uStack_e8 = uStack_60;
    local_f0 = local_68;
    uStack_d8 = uStack_50;
    uStack_e0 = uStack_58;
    local_d0 = local_48;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_100467108();
    (*pcVar2)(&local_f0,1,&DAT_1009c4d58,puVar1,param_3,param_4);
  }
  return;
}

