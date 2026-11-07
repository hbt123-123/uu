// rea decompile_all
// name: FUN_1003a60dc
// address: 0x1003a60dc
// body: available
// range: 0x1003a60dc-0x1003a61ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003a60dc(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1003a5bc8();
  puVar1 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,param_1);
  if ((int)puVar1 != 1) {
    puVar2 = &DAT_100a7c630;
    FUN_100004bb4(&DAT_100a7c630,&DAT_1008103d8);
    _swift_bridgeObjectRelease(*(undefined8 *)(puVar4 + (long)*(int *)(puVar2 + 0x30) + 8));
    FUN_100006cdc(*(undefined8 *)(puVar4 + *(int *)(puVar2 + 0x40)),
                  *(undefined8 *)((long)(puVar4 + *(int *)(puVar2 + 0x40)) + 8));
  }
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar4,lVar3);
  return ZEXT816(0xe000000000000000) << 0x40;
}

