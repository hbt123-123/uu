// rea decompile_all
// name: FUN_10061a1bc
// address: 0x10061a1bc
// body: available
// range: 0x10061a1bc-0x10061a283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10061a1bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_2,param_1,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  lVar5 = *(long *)(lVar2 + -8);
  puVar4 = &stack0xffffffffffffffb0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100617228(puVar4,param_1,param_2);
  puVar3 = puVar4;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(puVar4,1,lVar1);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  return (int)puVar3 != 1;
}

