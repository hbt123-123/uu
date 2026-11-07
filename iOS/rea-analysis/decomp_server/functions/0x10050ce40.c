// rea decompile_all
// name: FUN_10050ce40
// address: 0x10050ce40
// body: available
// range: 0x10050ce40-0x10050cf5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050ce40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long lStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  
  uVar3 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  local_f0 = param_3;
  uStack_e8 = param_4;
  local_e0 = param_5;
  lStack_d8 = param_6;
  local_c0 = param_3;
  uStack_b8 = param_4;
  local_b0 = param_5;
  lStack_a8 = param_6;
  local_90 = param_3;
  uStack_88 = param_4;
  local_80 = param_5;
  lStack_78 = param_6;
  local_70 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar3,param_3,0x100900ffc,&TargetProtocolRequirement_10090100c);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 8),param_4,0x100900ffc,&TargetProtocolRequirement_10090100c
            );
  _swift_getAssociatedConformanceWitness
            (uVar3,param_3,uVar1,0x100900ffc,&TargetProtocolRequirement_100901004);
  FUN_10050d094(param_1,param_2,thunk_FUN_10050e6f4,auStack_a0,FUN_10050e75c,auStack_d0,
                FUN_10050e778,auStack_100,uVar1,uVar2,uVar3);
  return;
}

