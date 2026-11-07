// rea decompile_all
// name: FUN_100013b54
// address: 0x100013b54
// body: available
// range: 0x100013b54-0x100013d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100013b54(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    FUN_10006fafc(0,lVar6,0);
    uVar1 = param_1 + 0x40;
    uVar11 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar13 = 0;
    iVar2 = *(int *)(param_1 + 0x24);
    do {
      if (((long)uVar11 < 0) || (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) <= (long)uVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100013d78);
        (*pcVar5)();
      }
      uVar14 = uVar11 >> 6;
      uVar9 = 1L << (uVar11 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar14 * 8) & uVar9) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100013d7c);
        (*pcVar5)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100013d80);
        (*pcVar5)();
      }
      uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x30) + uVar11 * 4);
      uVar12 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar12) {
        FUN_10006fafc(1 < *(ulong *)(puVar4 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar12 + 1;
      *(undefined4 *)(puVar4 + uVar12 * 4 + 0x20) = uVar3;
      uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if ((long)uVar12 <= (long)uVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100013d84);
        (*pcVar5)();
      }
      uVar7 = *(ulong *)(uVar1 + uVar14 * 8);
      if ((uVar7 & uVar9) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100013d88);
        (*pcVar5)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100013d8c);
        (*pcVar5)();
      }
      uVar7 = uVar7 & -2L << (uVar11 & 0x3f);
      if (uVar7 == 0) {
        lVar10 = uVar14 << 6;
        puVar8 = (ulong *)(param_1 + 0x48 + uVar14 * 8);
        do {
          uVar14 = uVar14 + 1;
          if (uVar12 + 0x3f >> 6 <= uVar14) {
            FUN_10003f79c();
            uVar11 = uVar12;
            goto LAB_100013bfc;
          }
          uVar11 = *puVar8;
          lVar10 = lVar10 + 0x40;
          puVar8 = puVar8 + 1;
        } while (uVar11 == 0);
        FUN_10003f79c();
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + lVar10;
      }
      else {
        uVar14 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar11 & 0x7fffffffffffffc0;
      }
LAB_100013bfc:
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar6);
  }
  return puVar4;
}

