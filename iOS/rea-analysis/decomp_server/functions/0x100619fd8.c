// rea decompile_all
// name: FUN_100619fd8
// address: 0x100619fd8
// body: available
// range: 0x100619fd8-0x10061a0c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100619fd8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_2,param_1,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar2 = 0xff;
  FUN_100616300(0xff,uVar1);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  puVar5 = (undefined8 *)
           (&stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(param_2 + 0x18))(puVar5,param_1,param_2);
  lVar3 = *(long *)(lVar2 + -8);
  puVar4 = puVar5;
  (**(code **)(lVar3 + 0x30))(puVar5,1,lVar2);
  uVar1 = 0;
  if ((int)puVar4 != 1) {
    puVar4 = puVar5;
    _swift_getEnumCaseMultiPayload(puVar5,lVar2);
    if ((int)puVar4 == 1) {
      uVar1 = *puVar5;
    }
    else {
      (**(code **)(lVar3 + 8))(puVar5,lVar2);
      uVar1 = 0;
    }
  }
  return uVar1;
}

