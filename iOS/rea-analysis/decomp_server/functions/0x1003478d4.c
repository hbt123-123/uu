// rea decompile_all
// name: FUN_1003478d4
// address: 0x1003478d4
// body: available
// range: 0x1003478d4-0x1003479e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1003478d4(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_100995eb0;
  if (puVar9 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100a875e0,&DAT_10081b708);
    puVar3 = puVar9;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar11 = (undefined *)0x0;
    uVar12 = ~(-1L << ((ulong)(byte)puVar3[0x20] & 0x3f));
    do {
      lVar10 = *(long *)(param_1 + 0x20 + (long)puVar11 * 8);
      uVar4 = *(ulong *)(puVar3 + 0x28);
      __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar4,lVar10);
      uVar4 = uVar4 & uVar12;
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      lVar5 = *(long *)(puVar3 + 0x30);
      uVar1 = uVar8 & uVar7;
      while (uVar1 != 0) {
        if (*(long *)(lVar5 + uVar4 * 8) == lVar10) goto LAB_10034795c;
        uVar4 = uVar4 + 1 & uVar12;
        uVar6 = uVar4 >> 6;
        uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
        uVar8 = 1L << (uVar4 & 0x3f);
        uVar1 = uVar8 & uVar7;
      }
      *(ulong *)(puVar3 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(long *)(lVar5 + uVar4 * 8) = lVar10;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003479e8);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_10034795c:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar3;
}

