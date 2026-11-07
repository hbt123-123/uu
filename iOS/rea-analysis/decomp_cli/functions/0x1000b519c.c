// rea decompile_all
// name: FUN_1000b519c
// address: 0x1000b519c
// body: available
// range: 0x1000b519c-0x1000b541b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000b519c(undefined *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_a8 [72];
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar12 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar12 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar2 = PTR___swiftEmptySetSingleton_1000f0750;
  if (puVar12 != (undefined *)0x0) {
    FUN_10000eb08(&DAT_100104860,&DAT_1000d51a8);
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar2 = puVar12;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar12 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar12 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar12 != (undefined *)0x0) {
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar14 = (undefined *)0x0;
      puVar15 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      do {
        if (puVar14 == puVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b5418);
          (*pcVar3)();
        }
        uVar13 = *(ulong *)(param_1 + (long)puVar14 * 8 + 0x20);
        __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
        uVar7 = uVar13;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar6 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
        uVar7 = uVar7 & (uVar6 ^ 0xffffffffffffffff);
        uVar9 = uVar7 >> 6;
        uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
        uVar11 = 1L << (uVar7 & 0x3f);
        lVar8 = *(long *)(puVar2 + 0x30);
        uVar1 = uVar11 & uVar10;
        while (uVar1 != 0) {
          if (*(ulong *)(lVar8 + uVar7 * 8) == uVar13) goto LAB_1000b535c;
          uVar7 = uVar7 + 1 & ~uVar6;
          uVar9 = uVar7 >> 6;
          uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
          uVar11 = 1L << (uVar7 & 0x3f);
          uVar1 = uVar11 & uVar10;
        }
        *(ulong *)(puVar2 + uVar9 * 8 + 0x38) = uVar11 | uVar10;
        *(ulong *)(lVar8 + uVar7 * 8) = uVar13;
        if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b541c);
          (*pcVar3)();
        }
        *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
        _swift_retain(uVar13);
LAB_1000b535c:
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar12);
    }
    else {
      puVar14 = (undefined *)0x0;
      do {
        puVar15 = puVar14;
        FUN_1000794e0(puVar14,param_1);
        bVar4 = SCARRY8((long)puVar14,1);
        puVar14 = puVar14 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b5410);
          (*pcVar3)();
        }
        __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
        puVar5 = puVar15;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar6 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
        uVar7 = (ulong)puVar5 & (uVar6 ^ 0xffffffffffffffff);
        uVar9 = uVar7 >> 6;
        uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
        uVar11 = 1L << (uVar7 & 0x3f);
        lVar8 = *(long *)(puVar2 + 0x30);
        uVar1 = uVar11 & uVar10;
        while (uVar1 != 0) {
          if (*(undefined **)(lVar8 + uVar7 * 8) == puVar15) {
            _swift_unknownObjectRelease(puVar15);
            goto joined_r0x0001000b526c;
          }
          uVar7 = uVar7 + 1 & ~uVar6;
          uVar9 = uVar7 >> 6;
          uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
          uVar11 = 1L << (uVar7 & 0x3f);
          uVar1 = uVar11 & uVar10;
        }
        *(ulong *)(puVar2 + uVar9 * 8 + 0x38) = uVar11 | uVar10;
        *(undefined **)(lVar8 + uVar7 * 8) = puVar15;
        if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b5414);
          (*pcVar3)();
        }
        *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
joined_r0x0001000b526c:
      } while (puVar14 != puVar12);
    }
  }
  return puVar2;
}

