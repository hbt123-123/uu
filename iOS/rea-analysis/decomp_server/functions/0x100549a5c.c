// rea decompile_all
// name: FUN_100549a5c
// address: 0x100549a5c
// body: available
// range: 0x100549a5c-0x100549e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100549de0) */

void FUN_100549a5c(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *unaff_x20;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong local_c0 [6];
  undefined *local_90 [5];
  undefined *local_68;
  
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((long)uVar9 < 0x40) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  lVar4 = param_1;
  _swift_bridgeObjectRetain();
  lVar13 = 0;
  lVar1 = param_1;
  while( true ) {
    while (uVar14 != 0) {
      uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar8 = lVar13 << 9 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 3;
      uVar11 = *(ulong *)(*(long *)(lVar1 + 0x30) + uVar8);
      uVar15 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + uVar8);
      uVar8 = *unaff_x20;
      lVar1 = lVar4;
      if ((*(long *)(uVar8 + 0x10) == 0) || (uVar18 = uVar11, FUN_1003618e4(), (param_2 & 1) == 0))
      {
        _swift_bridgeObjectRetain(uVar15);
        uVar18 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar12 = (undefined *)*unaff_x20;
        uVar8 = uVar11;
        local_90[0] = puVar12;
        FUN_1003618e4();
        uVar10 = (ulong)~(uint)param_2 & 1;
        lVar16 = *(long *)(puVar12 + 0x10) + uVar10;
        if (SCARRY8(*(long *)(puVar12 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100549ddc);
          (*pcVar2)();
        }
        if (*(long *)(puVar12 + 0x18) < lVar16) {
          FUN_10054c3a4(lVar16);
          uVar8 = uVar11;
          FUN_1003618e4();
          uVar10 = uVar18;
          puVar12 = local_90[0];
          if (((uint)param_2 & 1) != ((uint)uVar18 & 1)) {
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___sSiN_100995968);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100549e14);
            (*pcVar2)();
          }
        }
        else {
          uVar10 = param_2;
          puVar12 = local_90[0];
          if ((uVar18 & 1) == 0) {
            FUN_10054b118();
            puVar12 = local_90[0];
          }
        }
        local_90[0] = puVar12;
        if ((param_2 & 1) == 0) {
          *(ulong *)(puVar12 + (uVar8 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar12 + (uVar8 >> 6) * 8 + 0x40) | 1L << (uVar8 & 0x3f);
          *(ulong *)(*(long *)(puVar12 + 0x30) + uVar8 * 8) = uVar11;
          *(undefined8 *)(*(long *)(puVar12 + 0x38) + uVar8 * 8) = uVar15;
          if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100549de0);
            (*pcVar2)();
          }
          *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
        }
        else {
          uVar7 = *(undefined8 *)(*(long *)(puVar12 + 0x38) + uVar8 * 8);
          *(undefined8 *)(*(long *)(puVar12 + 0x38) + uVar8 * 8) = uVar15;
          _swift_bridgeObjectRelease(uVar7);
        }
        *unaff_x20 = (ulong)puVar12;
        param_2 = uVar10;
      }
      else {
        lVar16 = *(long *)(*(long *)(uVar8 + 0x38) + uVar18 * 8);
        uVar8 = *(ulong *)(lVar16 + 0x10);
        _swift_bridgeObjectRetain(uVar15);
        _swift_bridgeObjectRetain(lVar16);
        puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (uVar8 != 0) {
          uVar18 = 0;
          lVar17 = lVar16 + 0x20;
          do {
            if (*(ulong *)(lVar16 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100549dd8);
              (*pcVar2)();
            }
            FUN_1000b142c(lVar17,local_90);
            ppuVar5 = local_90;
            FUN_10054a43c(ppuVar5,uVar15);
            if (((ulong)ppuVar5 & 1) == 0) {
              FUN_10003f094(local_90);
            }
            else {
              FUN_1000a0074(local_90,local_c0);
              puVar6 = puVar12;
              _swift_isUniquelyReferenced_nonNull_native();
              local_68 = puVar12;
              if (((ulong)puVar6 & 1) == 0) {
                FUN_10051169c(0,*(long *)(puVar12 + 0x10) + 1,1);
              }
              uVar10 = *(ulong *)(local_68 + 0x10);
              if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar10) {
                FUN_10051169c(1 < *(ulong *)(local_68 + 0x18),uVar10 + 1,1);
              }
              puVar12 = local_68;
              *(ulong *)(local_68 + 0x10) = uVar10 + 1;
              FUN_1000a0074(local_c0,local_68 + uVar10 * 0x28 + 0x20);
            }
            uVar18 = uVar18 + 1;
            lVar17 = lVar17 + 0x28;
          } while (uVar8 != uVar18);
        }
        _swift_bridgeObjectRelease(lVar16);
        local_90[0] = puVar12;
        FUN_1004fa608(uVar15);
        puVar12 = local_90[0];
        uVar8 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native(uVar8);
        local_c0[0] = *unaff_x20;
        FUN_1005216ac(puVar12,uVar11,uVar8);
        *unaff_x20 = local_c0[0];
        param_2 = uVar11;
      }
    }
    bVar3 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar3) break;
    if ((long)(uVar9 + 0x3f >> 6) <= lVar13) {
      _swift_release(lVar1);
      return;
    }
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100549dd4);
  (*pcVar2)();
}

