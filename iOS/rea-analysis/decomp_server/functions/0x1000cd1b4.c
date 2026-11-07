// rea decompile_all
// name: FUN_1000cd1b4
// address: 0x1000cd1b4
// body: available
// range: 0x1000cd1b4-0x1000cd33f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000cd1b4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x8;
  ulong uVar10;
  ulong *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  
  puVar6 = &DAT_100a775e8;
  FUN_100004bb4(&DAT_100a775e8,&DAT_10080c230);
  lVar13 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar12 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100a763e8,&DAT_10080ac18);
    puVar7 = puVar12;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    iVar4 = *(int *)(puVar6 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    lVar13 = *(long *)(lVar13 + 0x48);
    _swift_retain();
    do {
      FUN_10007f314(param_1,puVar11,&DAT_100a775e8,&DAT_10080c230);
      uVar2 = *puVar11;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar8 = uVar2;
      uVar10 = uVar3;
      FUN_1001a2c70();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000cd33c);
        (*pcVar5)();
      }
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar10 + 0x40) = *(ulong *)(puVar7 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar14 = *(long *)(puVar7 + 0x38);
      lVar9 = 0;
      FUN_1000e984c();
      FUN_1000823d8((long)puVar11 + (long)iVar4,
                    lVar14 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * uVar8,FUN_1000e984c);
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000cd340);
        (*pcVar5)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      param_1 = param_1 + lVar13;
      puVar12 = puVar12 + -1;
    } while (puVar12 != (undefined *)0x0);
    _swift_release(puVar7);
  }
  return puVar7;
}

