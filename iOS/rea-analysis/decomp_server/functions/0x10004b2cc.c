// rea decompile_all
// name: FUN_10004b2cc
// address: 0x10004b2cc
// body: available
// range: 0x10004b2cc-0x10004b54f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10004b2cc(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    FUN_10006fac4(0,lVar11,0);
    uVar1 = param_1 + 0x40;
    uVar14 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar17 = 0;
    iVar2 = *(int *)(param_1 + 0x24);
    do {
      if (((long)uVar14 < 0) || (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) <= (long)uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10004b53c);
        (*pcVar6)();
      }
      uVar13 = uVar14 >> 6;
      uVar16 = 1L << (uVar14 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar13 * 8) & uVar16) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10004b540);
        (*pcVar6)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10004b544);
        (*pcVar6)();
      }
      lVar12 = *(long *)(param_1 + 0x38) + uVar14 * 0x80;
      uVar7 = *(undefined8 *)(lVar12 + 0x58);
      uVar3 = *(undefined4 *)(lVar12 + 0x60);
      uVar9 = *(undefined8 *)(lVar12 + 0x68);
      uVar18 = *(undefined8 *)(lVar12 + 0x70);
      uVar4 = *(undefined4 *)(lVar12 + 0x78);
      uVar15 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar15) {
        FUN_10006fac4(1 < *(ulong *)(puVar5 + 0x18),uVar15 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar15 + 1;
      *(undefined8 *)(puVar5 + uVar15 * 0x28 + 0x20) = uVar7;
      *(undefined4 *)(puVar5 + uVar15 * 0x28 + 0x28) = uVar3;
      *(undefined8 *)(puVar5 + uVar15 * 0x28 + 0x30) = uVar9;
      *(undefined8 *)(puVar5 + uVar15 * 0x28 + 0x38) = uVar18;
      *(undefined4 *)(puVar5 + uVar15 * 0x28 + 0x40) = uVar4;
      uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if ((long)uVar15 <= (long)uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10004b548);
        (*pcVar6)();
      }
      uVar8 = *(ulong *)(uVar1 + uVar13 * 8);
      if ((uVar8 & uVar16) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10004b54c);
        (*pcVar6)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10004b550);
        (*pcVar6)();
      }
      uVar8 = uVar8 & -2L << (uVar14 & 0x3f);
      if (uVar8 == 0) {
        lVar12 = uVar13 << 6;
        puVar10 = (ulong *)(param_1 + 0x48 + uVar13 * 8);
        do {
          uVar13 = uVar13 + 1;
          if (uVar15 + 0x3f >> 6 <= uVar13) {
            FUN_10003f79c(uVar14,iVar2,0);
            uVar14 = uVar15;
            goto LAB_10004b374;
          }
          uVar16 = *puVar10;
          lVar12 = lVar12 + 0x40;
          puVar10 = puVar10 + 1;
        } while (uVar16 == 0);
        FUN_10003f79c(uVar14,iVar2,0);
        uVar14 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + lVar12;
      }
      else {
        uVar13 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar14 & 0x7fffffffffffffc0;
      }
LAB_10004b374:
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar11);
  }
  return puVar5;
}

