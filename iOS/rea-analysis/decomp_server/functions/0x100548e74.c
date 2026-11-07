// rea decompile_all
// name: FUN_100548e74
// address: 0x100548e74
// body: available
// range: 0x100548e74-0x100548f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100548e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_80 [3];
  undefined8 local_68;
  
  uVar4 = *(undefined8 *)(param_6 + 8);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,param_4,0x100900ffc,&TargetProtocolRequirement_10090100c);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_7 + 8),param_5,0x100900ffc,
             &TargetProtocolRequirement_10090100c);
  _swift_getAssociatedConformanceWitness
            (uVar4,param_4,uVar1,0x100900ffc,&TargetProtocolRequirement_100901004);
  uVar3 = 0;
  __sSDMa(0,uVar1,uVar2,uVar4);
  local_80[0] = param_1;
  local_68 = uVar3;
  _swift_bridgeObjectRetain(param_1);
  FUN_10054869c(local_80,param_2,param_3);
  FUN_10003f094(local_80);
  return;
}

