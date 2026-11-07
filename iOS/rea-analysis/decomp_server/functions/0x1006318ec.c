// rea decompile_all
// name: FUN_1006318ec
// address: 0x1006318ec
// body: available
// range: 0x1006318ec-0x100631993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1006318ec(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,PTR___sSlTL_1009959e8,PTR___s11SubSequenceSlTl_1009956d0);
  *param_1 = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  param_1[1] = lVar3;
  pvVar4 = *(void **)(lVar3 + 0x40);
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar4);
  }
  else {
    _swift_coroFrameAlloc(pvVar4,0xdc6);
  }
  param_1[2] = (long)pvVar4;
  __sSly11SubSequenceQzSny5IndexQzGcigTj(pvVar4,param_2,uVar1,uVar2);
  auVar5._8_8_ = pvVar4;
  auVar5._0_8_ = FUN_100312640;
  return auVar5;
}

