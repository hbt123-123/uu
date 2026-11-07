// rea decompile_all
// name: FUN_100631df0
// address: 0x100631df0
// body: available
// range: 0x100631df0-0x100631e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100631df0(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),PTR___sSlTL_1009959e8
             ,PTR___s5IndexSlTl_1009956e8);
  lVar3 = *(long *)(lVar1 + -8);
  pcVar4 = *(code **)(lVar3 + 0x10);
  (*pcVar4)(param_1,param_2,lVar1);
  uVar2 = (ulong)*(byte *)(lVar3 + 0x50);
  lVar3 = *(long *)(lVar3 + 0x40) + uVar2;
  (*pcVar4)(lVar3 + param_1 & (uVar2 ^ 0xffffffffffffffff),
            lVar3 + param_2 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}

