// rea decompile_all
// name: FUN_1000cd514
// address: 0x1000cd514
// body: available
// range: 0x1000cd514-0x1000cd68b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000cd514(long param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  uint *puVar7;
  long extraout_x8;
  ulong uVar8;
  uint *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  puVar4 = &DAT_100a775d0;
  FUN_100004bb4(&DAT_100a775d0,&DAT_10080c210);
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (uint *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar10 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100a762a0,&DAT_10080aa90);
    puVar5 = puVar10;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    iVar2 = *(int *)(puVar4 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar11 + 0x48);
    do {
      puVar7 = puVar9;
      FUN_10007f314(param_1,puVar9,&DAT_100a775d0,&DAT_10080c210);
      uVar1 = *puVar9;
      uVar12 = (ulong)uVar1;
      thunk_FUN_1001a2c34();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000cd688);
        (*pcVar3)();
      }
      uVar8 = uVar12 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar8 + 0x40) = *(ulong *)(puVar5 + uVar8 + 0x40) | 1L << (uVar12 & 0x3f);
      *(uint *)(*(long *)(puVar5 + 0x30) + uVar12 * 4) = uVar1;
      lVar13 = *(long *)(puVar5 + 0x38);
      lVar6 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x20))
                (lVar13 + *(long *)(*(long *)(lVar6 + -8) + 0x48) * uVar12,
                 (long)puVar9 + (long)iVar2,lVar6);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000cd68c);
        (*pcVar3)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + lVar11;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
  }
  return puVar5;
}

