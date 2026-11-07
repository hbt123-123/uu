// rea decompile_all
// name: FUN_10001920c
// address: 0x10001920c
// body: available
// range: 0x10001920c-0x10001944f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10001920c(void)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined *local_90 [3];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x88,auStack_78,0,0);
  lVar12 = *(long *)(unaff_x20 + 0x88);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar9 < 0x40) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(lVar12 + 0x38);
  _swift_bridgeObjectRetain(lVar12);
  lVar16 = 0;
  puVar13 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  while( true ) {
    while (uVar15 != 0) {
      uVar14 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      uVar1 = *(uint *)(*(long *)(lVar12 + 0x30) +
                       (lVar16 << 8 | LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) << 2));
      uVar14 = (ulong)uVar1;
      ppuVar8 = local_90;
      _swift_beginAccess(unaff_x20 + 0x80,ppuVar8,0x20,0);
      lVar11 = *(long *)(unaff_x20 + 0x80);
      if ((*(long *)(lVar11 + 0x10) == 0) ||
         (uVar5 = uVar14, thunk_FUN_1001a2c34(), ((ulong)ppuVar8 & 1) == 0)) {
        _swift_endAccess(local_90);
      }
      else {
        uVar2 = *(undefined4 *)(*(long *)(lVar11 + 0x38) + uVar5 * 4);
        _swift_endAccess(local_90);
        puVar6 = puVar13;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar7 = (uint)puVar6;
        uVar5 = uVar14;
        local_90[0] = puVar13;
        thunk_FUN_1001a2c34();
        uVar10 = (ulong)~(uint)ppuVar8 & 1;
        lVar11 = *(long *)(puVar13 + 0x10) + uVar10;
        if (SCARRY8(*(long *)(puVar13 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001943c);
          (*pcVar3)();
        }
        if (*(long *)(puVar13 + 0x18) < lVar11) {
          FUN_1000665c0(lVar11);
          thunk_FUN_1001a2c34();
          if (((uint)ppuVar8 & 1) != (uVar7 & 1)) {
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___ss5Int32VN_100995c78);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100019450);
            (*pcVar3)();
          }
        }
        else {
          uVar14 = uVar5;
          if (((ulong)puVar6 & 1) == 0) {
            FUN_100062dac();
          }
        }
        puVar13 = local_90[0];
        if (((ulong)ppuVar8 & 1) == 0) {
          *(ulong *)(local_90[0] + (uVar14 >> 6) * 8 + 0x40) =
               *(ulong *)(local_90[0] + (uVar14 >> 6) * 8 + 0x40) | 1L << (uVar14 & 0x3f);
          *(uint *)(*(long *)(local_90[0] + 0x30) + uVar14 * 4) = uVar1;
          *(undefined4 *)(*(long *)(local_90[0] + 0x38) + uVar14 * 4) = uVar2;
          if (SCARRY8(*(long *)(local_90[0] + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100019440);
            (*pcVar3)();
          }
          *(long *)(local_90[0] + 0x10) = *(long *)(local_90[0] + 0x10) + 1;
        }
        else {
          *(undefined4 *)(*(long *)(local_90[0] + 0x38) + uVar14 * 4) = uVar2;
        }
      }
    }
    bVar4 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100019438);
      (*pcVar3)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar16) break;
    uVar15 = ((ulong *)(lVar12 + 0x38))[lVar16];
  }
  _swift_release(lVar12);
  return puVar13;
}

