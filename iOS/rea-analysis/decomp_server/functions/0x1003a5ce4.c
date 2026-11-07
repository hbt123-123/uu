// rea decompile_all
// name: FUN_1003a5ce4
// address: 0x1003a5ce4
// body: available
// range: 0x1003a5ce4-0x1003a5ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003a5ce4(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined *puVar5;
  long extraout_x8;
  undefined1 (*pauVar6) [16];
  code *pcVar7;
  
  lVar3 = 0;
  FUN_1003a5b90();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pauVar6 = (undefined1 (*) [16])
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1003a5bc8();
  pauVar4 = pauVar6;
  _swift_getEnumCaseMultiPayload(pauVar6,lVar3);
  if ((int)pauVar4 == 1) {
    FUN_1002c14c0();
  }
  else {
    puVar5 = &DAT_100a7c630;
    FUN_100004bb4(&DAT_100a7c630,&DAT_1008103d8);
    _swift_bridgeObjectRelease(*(undefined8 *)(*pauVar6 + (long)*(int *)(puVar5 + 0x30) + 8));
    pauVar4 = *(undefined1 (**) [16])(*pauVar6 + *(int *)(puVar5 + 0x40));
    FUN_100006cdc(pauVar4,*(undefined8 *)((long)(*pauVar6 + *(int *)(puVar5 + 0x40)) + 8));
    FUN_1002c153c();
  }
  uVar1 = *(undefined8 *)(*pauVar4 + 8);
  auVar2 = *pauVar4;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 8);
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar7)(pauVar6,lVar3);
  return auVar2;
}

