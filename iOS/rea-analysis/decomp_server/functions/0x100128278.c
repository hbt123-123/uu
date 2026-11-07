// rea decompile_all
// name: FUN_100128278
// address: 0x100128278
// body: available
// range: 0x100128278-0x10012839b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100128278(long param_1)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptySetSingleton_100995eb0;
  if (puVar10 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100a75a60,&DAT_100809b10);
    puVar4 = puVar10;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar12 = (undefined *)0x0;
    uVar11 = *(ulong *)(puVar4 + 0x28);
    uVar13 = ~(-1L << ((ulong)(byte)puVar4[0x20] & 0x3f));
    do {
      iVar1 = *(int *)(param_1 + 0x20 + (long)puVar12 * 4);
      uVar5 = uVar11;
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar11,iVar1,4);
      uVar5 = uVar5 & uVar13;
      uVar7 = uVar5 >> 6;
      uVar8 = *(ulong *)(puVar4 + uVar7 * 8 + 0x38);
      uVar9 = 1L << (uVar5 & 0x3f);
      lVar6 = *(long *)(puVar4 + 0x30);
      uVar2 = uVar9 & uVar8;
      while (uVar2 != 0) {
        if (*(int *)(lVar6 + uVar5 * 4) == iVar1) goto LAB_100128308;
        uVar5 = uVar5 + 1 & uVar13;
        uVar7 = uVar5 >> 6;
        uVar8 = *(ulong *)(puVar4 + uVar7 * 8 + 0x38);
        uVar9 = 1L << (uVar5 & 0x3f);
        uVar2 = uVar9 & uVar8;
      }
      *(ulong *)(puVar4 + uVar7 * 8 + 0x38) = uVar9 | uVar8;
      *(int *)(lVar6 + uVar5 * 4) = iVar1;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10012839c);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
LAB_100128308:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  return puVar4;
}

