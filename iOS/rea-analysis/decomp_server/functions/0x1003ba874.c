// rea decompile_all
// name: FUN_1003ba874
// address: 0x1003ba874
// body: available
// range: 0x1003ba874-0x1003ba93b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1003ba874(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar1 = *(long *)(lVar3 + -8);
  uVar2 = (ulong)*(uint *)(lVar1 + 0x50) & 0xff;
  if (((uint)uVar2 < 8 && (*(uint *)(lVar1 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar2 - 0x19 | uVar2) - *(long *)(lVar1 + 0x40)) {
    *param_1 = *param_2;
    puVar4 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
    *puVar4 = *puVar5;
    puVar4[1] = puVar5[1];
    pcVar6 = *(code **)(lVar1 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar6)(puVar4 + 2,puVar5 + 2,lVar3);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)((uint)uVar2 & 0xf8 ^ 0x1f8) & uVar2 + 0x10));
    _swift_retain();
  }
  return param_1;
}

