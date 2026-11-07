// rea decompile_all
// name: FUN_100652448
// address: 0x100652448
// body: available
// range: 0x100652448-0x100652507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100652448(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR___sSzTL_100995aa8;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,PTR___sSzTL_100995aa8,PTR___s5WordsSzTl_1009956f0);
  lVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  __sSz5words5WordsQzvgTj
            (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,lVar2,puVar1,PTR___sSz5WordsSz_SkTn_100995aa0);
  FUN_100660000(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar2,
                *(undefined8 *)(*(long *)(*(long *)(param_3 + 8) + 8) + 8));
  return;
}

