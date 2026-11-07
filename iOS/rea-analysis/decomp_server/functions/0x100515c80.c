// rea decompile_all
// name: FUN_100515c80
// address: 0x100515c80
// body: available
// range: 0x100515c80-0x100515d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100515c80(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x28 < 0x19)
  {
    (**(code **)(lVar4 + 0x10))(param_1);
    uVar2 = (long)param_1 + lVar5 + 7 & 0xfffffffffffffff8;
    uVar3 = (long)param_2 + lVar5 + 7 & 0xfffffffffffffff8;
    lVar4 = *(long *)(uVar3 + 0x18);
    *(long *)(uVar2 + 0x18) = lVar4;
    *(undefined8 *)(uVar2 + 0x20) = *(undefined8 *)(uVar3 + 0x20);
    (*(code *)**(undefined8 **)(lVar4 + -8))();
  }
  else {
    uVar1 = *(uint *)(lVar4 + 0x50) & 0xf8;
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}

