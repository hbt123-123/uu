// rea decompile_all
// name: FUN_1005127e4
// address: 0x1005127e4
// body: available
// range: 0x1005127e4-0x1005128c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005127e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar6 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  uVar4 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,uVar1,0x100900ffc,&TargetProtocolRequirement_10090100c);
  lVar5 = lVar6;
  __sSa5countSivg(lVar6,uVar4);
  if (0 < lVar5) {
    lVar5 = unaff_x20[4];
    lVar3 = unaff_x20[5];
    FUN_10003f030(unaff_x20 + 1,lVar5);
    (**(code **)(lVar3 + 8))(lVar5,lVar3);
    (**(code **)(lVar2 + 0x38))(lVar6,lVar5,param_1,param_3,param_4,uVar1,lVar2);
  }
  return;
}

