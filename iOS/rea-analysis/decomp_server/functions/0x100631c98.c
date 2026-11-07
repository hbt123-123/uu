// rea decompile_all
// name: FUN_100631c98
// address: 0x100631c98
// body: available
// range: 0x100631c98-0x100631d67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100631c98(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),PTR___sSlTL_1009959e8
             ,PTR___s5IndexSlTl_1009956e8);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  uVar5 = ~uVar4;
  uVar1 = *(long *)(lVar3 + 0x40) + uVar4;
  if (((uint)uVar4 < 8 && (*(uint *)(lVar3 + 0x50) & 0x100000) == 0) &&
      (uVar1 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(lVar3 + 0x40) < 0x19) {
    pcVar6 = *(code **)(lVar3 + 0x10);
    (*pcVar6)(param_1,param_2,lVar2);
    (*pcVar6)(uVar1 + (long)param_1 & uVar5,uVar1 + (long)param_2 & uVar5,lVar2);
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + (uVar4 + 0x10 & uVar5));
    _swift_retain();
  }
  return param_1;
}

