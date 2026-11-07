// rea decompile_all
// name: FUN_1003a5ee4
// address: 0x1003a5ee4
// body: available
// range: 0x1003a5ee4-0x1003a600b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1003a5ee4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  undefined *apuStack_40 [2];
  
  lVar3 = 0;
  FUN_1003a5b90();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar7 = (long)apuStack_40 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cbc40();
  FUN_1003a5bc8();
  lVar6 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,lVar3);
  if ((int)lVar6 != 1) {
    puVar5 = &DAT_100a7c630;
    FUN_100004bb4(&DAT_100a7c630,&DAT_1008103d8);
    uVar1 = *(undefined8 *)(lVar7 + *(int *)(puVar5 + 0x30));
    uVar2 = ((undefined8 *)(lVar7 + *(int *)(puVar5 + 0x30)))[1];
    FUN_100006cdc(*(undefined8 *)(lVar7 + *(int *)(puVar5 + 0x40)),
                  ((undefined8 *)(lVar7 + *(int *)(puVar5 + 0x40)))[1]);
    puVar5 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    apuStack_40[1] = puVar4;
    FUN_100061340(uVar1,uVar2,0x7a69726f68747541,0xed00006e6f697461,puVar5);
    puVar4 = apuStack_40[1];
  }
  lVar6 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar7,lVar6);
  return puVar4;
}

