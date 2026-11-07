// rea decompile_all
// name: FUN_100180b34
// address: 0x100180b34
// body: available
// range: 0x100180b34-0x100180c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100180b34(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long extraout_x8;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation4DataV8IteratorVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  uVar2 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    lVar4 = 0;
    if (uVar2 != 0) {
      lVar4 = (long)(int)param_1;
    }
  }
  else {
    lVar4 = 0;
    if (uVar2 == 2) {
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
  FUN_100008184(param_1,param_2);
  __s10Foundation4DataV8IteratorV_2atAeC_SitcfC
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_2,
             lVar4);
  __s10Foundation4DataV8IteratorV4nexts5UInt8VSgyF();
  uVar3 = 0;
  uVar2 = 1;
  if (((uint)param_1 >> 8 & 1) == 0) {
    do {
      uVar2 = (uVar2 + ((uint)param_1 & 0xff)) % 0xfff1;
      uVar3 = (uVar2 + uVar3) % 0xfff1;
      __s10Foundation4DataV8IteratorV4nexts5UInt8VSgyF();
    } while (((uint)param_1 >> 8 & 1) == 0);
    uVar3 = uVar3 * 0x10000;
  }
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return uVar3 | uVar2;
}

