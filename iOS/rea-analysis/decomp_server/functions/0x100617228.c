// rea decompile_all
// name: FUN_100617228
// address: 0x100617228
// body: available
// range: 0x100617228-0x10061734f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100617228(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_3,param_2,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar2 = 0xff;
  FUN_100616300(0xff,lVar1);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  puVar6 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_3 + 0x18))(puVar6,param_2,param_3);
  lVar3 = *(long *)(lVar2 + -8);
  puVar4 = puVar6;
  (**(code **)(lVar3 + 0x30))(puVar6,1,lVar2);
  if ((int)puVar4 != 1) {
    puVar4 = puVar6;
    _swift_getEnumCaseMultiPayload(puVar6,lVar2);
    if ((int)puVar4 != 1) {
      lVar2 = *(long *)(lVar1 + -8);
      (**(code **)(lVar2 + 0x20))(param_1,puVar6,lVar1);
      uVar5 = 0;
      goto LAB_100617320;
    }
    (**(code **)(lVar3 + 8))(puVar6,lVar2);
  }
  lVar2 = *(long *)(lVar1 + -8);
  uVar5 = 1;
LAB_100617320:
  (**(code **)(lVar2 + 0x38))(param_1,uVar5,1,lVar1);
  return;
}

