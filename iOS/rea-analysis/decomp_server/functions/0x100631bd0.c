// rea decompile_all
// name: FUN_100631bd0
// address: 0x100631bd0
// body: available
// range: 0x100631bd0-0x100631c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100631bd0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_48;
  
  puVar2 = PTR___sSlTL_1009959e8;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar1,PTR___sSlTL_1009959e8,PTR___s5IndexSlTl_1009956e8);
  _swift_getAssociatedConformanceWitness(uVar4,uVar1,uVar3,puVar2,PTR___sSl5IndexSl_SLTn_1009959e0);
  lVar5 = 0x13f;
  __sSnMa(0x13f,uVar3,uVar4);
  if (uVar3 < 0x40) {
    local_48 = *(long *)(lVar5 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_48,param_1 + 0x20);
  }
  return;
}

