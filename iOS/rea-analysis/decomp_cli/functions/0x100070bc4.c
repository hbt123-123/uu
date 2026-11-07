// rea decompile_all
// name: FUN_100070bc4
// address: 0x100070bc4
// body: available
// range: 0x100070bc4-0x100070c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100070bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_1,PTR___sSYTL_1000f0360,PTR___s8RawValueSYTl_1000f02c0);
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  __sSY8rawValue03RawB0QzvgTj
            (&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1,param_3);
  lVar2 = lVar1;
  (**(code **)(param_4 + 0x10))(lVar1,param_4);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}

