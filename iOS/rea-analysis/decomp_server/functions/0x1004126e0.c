// rea decompile_all
// name: FUN_1004126e0
// address: 0x1004126e0
// body: available
// range: 0x1004126e0-0x10041297b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004126e0(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((long)uVar15 < 0x40) {
    uVar19 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  lVar12 = 0;
  while( true ) {
    while (uVar19 != 0) {
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = lVar12 << 10 | LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar13);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar13);
      local_a0 = *puVar1;
      uVar5 = puVar1[1];
      local_90 = *puVar2;
      uVar9 = puVar2[1];
      uStack_98 = uVar5;
      uStack_88 = uVar9;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar9);
      (*param_2)(&local_80,&local_a0);
      _swift_bridgeObjectRelease(uVar9);
      _swift_bridgeObjectRelease(uVar5);
      uVar9 = uStack_68;
      uVar5 = local_70;
      uVar6 = uStack_78;
      uVar13 = local_80;
      lVar17 = *param_5;
      uVar10 = local_80;
      uVar11 = uStack_78;
      FUN_1001a2c70();
      lVar14 = *(long *)(lVar17 + 0x10);
      uVar16 = (ulong)~(uint)uVar11 & 1;
      lVar18 = lVar14 + uVar16;
      if (SCARRY8(lVar14,uVar16)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100412968);
        (*pcVar7)();
      }
      if (*(long *)(lVar17 + 0x18) < lVar18) {
        FUN_100067d74(lVar18,param_4 & 1);
        uVar10 = uVar13;
        uVar16 = uVar6;
        FUN_1001a2c70();
        if (((uint)uVar11 & 1) != ((uint)uVar16 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10041297c);
          (*pcVar7)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_100063aac();
      }
      uVar19 = uVar19 - 1 & uVar19;
      lVar18 = *param_5;
      if ((uVar11 & 1) == 0) {
        lVar14 = lVar18 + (uVar10 >> 6) * 8;
        *(ulong *)(lVar14 + 0x40) = *(ulong *)(lVar14 + 0x40) | 1L << (uVar10 & 0x3f);
        puVar3 = (ulong *)(*(long *)(lVar18 + 0x30) + uVar10 * 0x10);
        *puVar3 = uVar13;
        puVar3[1] = uVar6;
        puVar1 = (undefined8 *)(*(long *)(lVar18 + 0x38) + uVar10 * 0x10);
        *puVar1 = uVar5;
        puVar1[1] = uVar9;
        if (SCARRY8(*(long *)(lVar18 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10041296c);
          (*pcVar7)();
        }
        *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + 1;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(lVar18 + 0x38) + uVar10 * 0x10);
        uVar5 = *puVar1;
        uVar4 = puVar1[1];
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRelease(uVar9);
        _swift_bridgeObjectRelease(uVar6);
        puVar1 = (undefined8 *)(*(long *)(lVar18 + 0x38) + uVar10 * 0x10);
        uVar9 = puVar1[1];
        *puVar1 = uVar5;
        puVar1[1] = uVar4;
        _swift_bridgeObjectRelease(uVar9);
      }
      param_4 = 1;
    }
    bVar8 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100412964);
      (*pcVar7)();
    }
    if ((long)(uVar15 + 0x3f >> 6) <= lVar12) break;
    uVar19 = ((ulong *)(param_1 + 0x40))[lVar12];
  }
  _swift_release(param_3);
  _swift_release(param_1);
  return;
}

