// rea decompile_all
// name: FUN_100238aa4
// address: 0x100238aa4
// body: available
// range: 0x100238aa4-0x100238ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100238aa4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_c8 [3];
  undefined1 auStack_b0 [24];
  undefined *local_98 [11];
  
  puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if ((param_3 & 1) == 0) {
    puVar5 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    _swift_isUniquelyReferenced_nonNull_native(PTR___swiftEmptyDictionarySingleton_100995ea8);
    local_98[0] = puVar4;
    FUN_10024595c(&DAT_d000000000000010,0x80000001008a72c0,0x6e65746e6f432d58,0xee00657079542d74,
                  puVar5);
    puVar4 = local_98[0];
    _swift_beginAccess(&DAT_100b36348,local_98,0,0);
    lVar3 = DAT_100b36348;
    if (DAT_100b36348 != 0) {
      _swift_beginAccess(DAT_100b36348 + 0x30,auStack_b0,0,0);
      uVar1 = *(undefined8 *)(lVar3 + 0x30);
      uVar2 = *(undefined8 *)(lVar3 + 0x38);
      _swift_bridgeObjectRetain(uVar2);
      puVar5 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native(puVar4);
      local_c8[0] = puVar4;
      FUN_10024595c(uVar1,uVar2,0x552d687475412d58,0xeb00000000726573,puVar5);
      puVar4 = local_c8[0];
      lVar3 = DAT_100b36348;
      if (DAT_100b36348 != 0) {
        _swift_beginAccess(DAT_100b36348 + 0x40,local_c8,0,0);
        uVar1 = *(undefined8 *)(lVar3 + 0x40);
        uVar2 = *(undefined8 *)(lVar3 + 0x48);
        _swift_bridgeObjectRetain(uVar2);
        puVar5 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native(puVar4);
        FUN_10024595c(uVar1,uVar2,0x542d687475412d58,0xec0000006e656b6f,puVar5);
      }
    }
  }
  else {
    puVar5 = &DAT_100a7e440;
    FUN_100004bb4(&DAT_100a7e440,&DAT_1008134a8);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined8 *)(puVar5 + 0x20) = 0x542d687475412d58;
    *(undefined8 *)(puVar5 + 0x28) = 0xec0000006e656b6f;
    *(undefined8 *)(puVar5 + 0x30) = param_1;
    *(undefined8 *)(puVar5 + 0x38) = param_2;
    FUN_10023a824(param_1,param_2,1);
    puVar4 = puVar5;
    FUN_100234524(puVar5);
    _swift_setDeallocating(puVar5);
    FUN_100040bb4(puVar5 + 0x20,&DAT_100a7e448,&DAT_100813ee0);
  }
  return puVar4;
}

