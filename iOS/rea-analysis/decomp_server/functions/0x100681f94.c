// rea decompile_all
// name: FUN_100681f94
// address: 0x100681f94
// body: available
// range: 0x100681f94-0x10068222b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100681f94(code *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  long unaff_x21;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar13 = *(long *)(param_3 + 0x10);
  if (lVar13 != 0) {
    FUN_10068c9e8(0,lVar13,0);
    uVar1 = param_3 + 0x40;
    uVar8 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f)));
    lVar11 = 0;
    iVar4 = *(int *)(param_3 + 0x24);
    do {
      if (((long)uVar8 < 0) || (1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f) <= (long)uVar8)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100682218);
        (*pcVar7)();
      }
      uVar15 = uVar8 >> 6;
      uVar16 = 1L << (uVar8 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar15 * 8) & uVar16) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10068221c);
        (*pcVar7)();
      }
      if (iVar4 != *(int *)(param_3 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100682220);
        (*pcVar7)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 0x10);
      local_80 = *puVar2;
      uVar3 = puVar2[1];
      uStack_78 = uVar3;
      _swift_bridgeObjectRetain(uVar3);
      (*param_1)(&local_70,&local_80,local_88);
      if (unaff_x21 != 0) {
        _swift_release(puVar5);
        _swift_bridgeObjectRelease(uVar3);
        return;
      }
      _swift_bridgeObjectRelease(uVar3);
      uVar6 = uStack_68;
      uVar3 = local_70;
      uVar14 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar14) {
        FUN_10068c9e8(1 < *(ulong *)(puVar5 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar14 + 1;
      *(undefined8 *)(puVar5 + uVar14 * 0x10 + 0x20) = uVar3;
      *(undefined8 *)(puVar5 + uVar14 * 0x10 + 0x28) = uVar6;
      uVar14 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      if ((long)uVar14 <= (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100682224);
        (*pcVar7)();
      }
      uVar9 = *(ulong *)(uVar1 + uVar15 * 8);
      if ((uVar9 & uVar16) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100682228);
        (*pcVar7)();
      }
      if (iVar4 != *(int *)(param_3 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10068222c);
        (*pcVar7)();
      }
      uVar9 = uVar9 & -2L << (uVar8 & 0x3f);
      if (uVar9 == 0) {
        lVar12 = uVar15 << 6;
        puVar10 = (ulong *)(param_3 + 0x48 + uVar15 * 8);
        do {
          uVar15 = uVar15 + 1;
          if (uVar14 + 0x3f >> 6 <= uVar15) {
            FUN_10003f79c(uVar8,iVar4,0);
            goto LAB_100682040;
          }
          uVar16 = *puVar10;
          lVar12 = lVar12 + 0x40;
          puVar10 = puVar10 + 1;
        } while (uVar16 == 0);
        FUN_10003f79c(uVar8,iVar4,0);
        uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + lVar12;
      }
      else {
        uVar15 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | uVar8 & 0x7fffffffffffffc0;
      }
LAB_100682040:
      lVar11 = lVar11 + 1;
      uVar8 = uVar14;
    } while (lVar11 != lVar13);
  }
  return;
}

