// rea decompile_all
// name: FUN_10061cca0
// address: 0x10061cca0
// body: available
// range: 0x10061cca0-0x10061cd9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010061cd00) */

void FUN_10061cca0(code *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100904f48,&TargetProtocolRequirement_100904f50);
  FUN_10061601c();
  lVar2 = lVar1;
  (*param_1)();
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  puVar3 = &DAT_1009e04f8;
  _swift_allocObject(&DAT_1009e04f8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(long *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  pcVar5 = *(code **)(param_4 + 0x10);
  _swift_retain(uVar4);
  (*pcVar5)(FUN_10060cfbc,puVar3,param_3,param_4);
  _swift_unknownObjectRelease(lVar2);
  _swift_release(puVar3);
  return;
}

