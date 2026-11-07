// rea decompile_all
// name: FUN_100525324
// address: 0x100525324
// body: available
// range: 0x100525324-0x100525423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100525324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __ss6HasherV8_combineyySuF(param_2);
  uVar4 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,param_3,0x100900ffc,&TargetProtocolRequirement_10090100c);
  uVar3 = *(undefined8 *)(param_6 + 8);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,param_4,0x100900ffc,&TargetProtocolRequirement_10090100c);
  _swift_getAssociatedConformanceWitness
            (uVar4,param_3,uVar1,0x100900ffc,&TargetProtocolRequirement_100901004);
  _swift_getAssociatedConformanceWitness
            (uVar3,param_4,uVar2,0x100900ffc,&TargetProtocolRequirement_100901004);
  __sSDsSHR_rlE4hash4intoys6HasherVz_tF();
  return;
}

