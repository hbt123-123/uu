// rea decompile_all
// name: FUN_10012839c
// address: 0x10012839c
// body: available
// range: 0x10012839c-0x1001284ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10012839c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 auStack_a8 [72];
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptySetSingleton_100995eb0;
  if (puVar10 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100a76278,&DAT_10080aa50);
    puVar6 = puVar10;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar12 = (undefined *)0x0;
    do {
      puVar1 = (ulong *)(param_1 + 0x20 + (long)puVar12 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar6 + 0x28));
      _swift_bridgeObjectRetain(uVar3);
      puVar7 = auStack_a8;
      __sSS4hash4intoys6HasherVz_tF(puVar7,uVar2,uVar3);
      __ss6HasherV9_finalizeSiyF();
      uVar8 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
      uVar11 = (ulong)puVar7 & (uVar8 ^ 0xffffffffffffffff);
      while( true ) {
        uVar9 = 1L << (uVar11 & 0x3f);
        if ((uVar9 & *(ulong *)(puVar6 + (uVar11 >> 6) * 8 + 0x38)) == 0) break;
        puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar11 * 0x10);
        uVar9 = *puVar1;
        uVar4 = puVar1[1];
        if ((uVar9 == uVar2 && uVar4 == uVar3) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar9,uVar4,uVar2,uVar3,0), (uVar9 & 1) != 0)) {
          _swift_bridgeObjectRelease(uVar3);
          goto LAB_100128408;
        }
        uVar11 = uVar11 + 1 & ~uVar8;
      }
      *(ulong *)(puVar6 + (uVar11 >> 6) * 8 + 0x38) =
           uVar9 | *(ulong *)(puVar6 + (uVar11 >> 6) * 8 + 0x38);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar11 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100128500);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
LAB_100128408:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  return puVar6;
}

