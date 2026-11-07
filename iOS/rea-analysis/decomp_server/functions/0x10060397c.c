// rea decompile_all
// name: FUN_10060397c
// address: 0x10060397c
// body: available
// range: 0x10060397c-0x100603bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10060397c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    FUN_100604aa4(0,lVar10,0);
    uVar1 = param_1 + 0x40;
    uVar14 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar16 = 0;
    iVar5 = *(int *)(param_1 + 0x24);
    do {
      if (((long)uVar14 < 0) || (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) <= (long)uVar14)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100603ba8);
        (*pcVar7)();
      }
      uVar11 = uVar14 >> 6;
      uVar12 = 1L << (uVar14 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar11 * 8) & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100603bac);
        (*pcVar7)();
      }
      if (iVar5 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100603bb0);
        (*pcVar7)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar14 * 0x10);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar15 = *(ulong *)(puVar6 + 0x10);
      uVar8 = *(ulong *)(puVar6 + 0x18);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar8 >> 1 <= uVar15) {
        FUN_100604aa4(1 < uVar8,uVar15 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar15 + 1;
      *(undefined8 *)(puVar6 + uVar15 * 0x10 + 0x20) = uVar3;
      *(undefined8 *)(puVar6 + uVar15 * 0x10 + 0x28) = uVar4;
      uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if ((long)uVar15 <= (long)uVar14) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100603bb4);
        (*pcVar7)();
      }
      uVar8 = *(ulong *)(uVar1 + uVar11 * 8);
      if ((uVar8 & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100603bb8);
        (*pcVar7)();
      }
      if (iVar5 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100603bbc);
        (*pcVar7)();
      }
      uVar8 = uVar8 & -2L << (uVar14 & 0x3f);
      if (uVar8 == 0) {
        lVar13 = uVar11 << 6;
        puVar9 = (ulong *)(param_1 + 0x48 + uVar11 * 8);
        do {
          uVar11 = uVar11 + 1;
          if (uVar15 + 0x3f >> 6 <= uVar11) {
            FUN_10003f79c(uVar14,iVar5,0);
            uVar14 = uVar15;
            goto LAB_100603a20;
          }
          uVar12 = *puVar9;
          lVar13 = lVar13 + 0x40;
          puVar9 = puVar9 + 1;
        } while (uVar12 == 0);
        FUN_10003f79c(uVar14,iVar5,0);
        uVar14 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + lVar13;
      }
      else {
        uVar11 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar14 & 0x7fffffffffffffc0;
      }
LAB_100603a20:
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar10);
  }
  return puVar6;
}

