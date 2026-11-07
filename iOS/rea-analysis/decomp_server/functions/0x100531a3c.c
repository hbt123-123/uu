// rea decompile_all
// name: FUN_100531a3c
// address: 0x100531a3c
// body: available
// range: 0x100531a3c-0x100531b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100531a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  local_c0 = param_3;
  uStack_b8 = param_4;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_a0 = param_7;
  local_80 = param_3;
  uStack_78 = param_4;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,0x100900ffc,&TargetProtocolRequirement_10090100c);
  _swift_getAssociatedConformanceWitness
            (uVar2,param_3,uVar1,0x100900ffc,&TargetProtocolRequirement_100901004);
  FUN_100530ea8(param_1,param_2,FUN_10050e658,auStack_90,FUN_100531ed0,auStack_d0,uVar1,param_4,
                uVar2);
  return;
}

