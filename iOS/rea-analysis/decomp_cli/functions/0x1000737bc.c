// rea decompile_all
// name: FUN_1000737bc
// address: 0x1000737bc
// body: available
// range: 0x1000737bc-0x10007393b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000737bc(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  puVar3 = &DAT_100104500;
  FUN_10000eb08(&DAT_100104500,&DAT_1000d4b60);
  lVar12 = *(long *)(puVar3 + -8);
  puVar9 = &stack0xffffffffffffffa0 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_1000f0748;
  if (puVar10 != (undefined *)0x0) {
    FUN_10000eb08(&DAT_100104508,&DAT_1000d4b68);
    puVar4 = puVar10;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    iVar1 = *(int *)(puVar3 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar12 + 0x48);
    _swift_retain();
    do {
      puVar7 = puVar9;
      FUN_1000133cc(param_1,puVar9,&DAT_100104500,&DAT_1000d4b60);
      puVar5 = puVar9;
      FUN_100081160();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100073938);
        (*pcVar2)();
      }
      uVar8 = (ulong)puVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar8 + 0x40) =
           *(ulong *)(puVar4 + uVar8 + 0x40) | 1L << ((ulong)puVar5 & 0x3f);
      lVar11 = *(long *)(puVar4 + 0x30);
      lVar6 = 0;
      __ss17CodingUserInfoKeyVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(lVar6 + -8) + 0x48) * (long)puVar5,puVar9,lVar6);
      FUN_100020a9c(puVar9 + iVar1,*(long *)(puVar4 + 0x38) + (long)puVar5 * 0x20);
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10007393c);
        (*pcVar2)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}

