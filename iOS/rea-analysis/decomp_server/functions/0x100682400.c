// rea decompile_all
// name: FUN_100682400
// address: 0x100682400
// body: available
// range: 0x100682400-0x10068269f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100682400(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  ulong local_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  lVar15 = 0;
  do {
    while (uVar16 == 0) {
      bVar7 = SCARRY8(lVar15,1);
      lVar15 = lVar15 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100682688);
        (*pcVar6)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar15) {
        _swift_release(param_1);
        return;
      }
      uVar16 = ((ulong *)(param_1 + 0x40))[lVar15];
    }
    uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar15 << 6;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
    local_98 = *puVar1;
    uVar4 = puVar1[1];
    uStack_90 = uVar4;
    FUN_10003e8bc(*(long *)(param_1 + 0x38) + uVar11 * 0x20,auStack_88);
    FUN_10007f314(&local_98,&local_c8,&DAT_100ab9ff8,&DAT_10084dd80);
    uVar5 = uStack_c0;
    uVar11 = local_c8;
    _swift_bridgeObjectRetain(uVar4);
    FUN_1006818d4(auStack_e8,auStack_88);
    FUN_10007f3d4(auStack_e8,auStack_108);
    uVar8 = *param_2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar14 = *param_2;
    uVar9 = uVar11;
    uVar10 = uVar5;
    FUN_1001a2c70();
    uVar13 = (ulong)~(uint)uVar10 & 1;
    lVar2 = *(long *)(uVar14 + 0x10) + uVar13;
    if (SCARRY8(*(long *)(uVar14 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10068268c);
      (*pcVar6)();
    }
    if (*(long *)(uVar14 + 0x18) < lVar2) {
      FUN_10068d2e4(lVar2,uVar8);
      uVar9 = uVar11;
      uVar8 = uVar5;
      FUN_1001a2c70();
      if (((uint)uVar10 & 1) != ((uint)uVar8 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1006826a0);
        (*pcVar6)();
      }
LAB_1006825e8:
      if ((uVar10 & 1) != 0) goto LAB_10068247c;
LAB_1006825f0:
      lVar2 = uVar14 + (uVar9 >> 6) * 8;
      *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar9 & 0x3f);
      puVar3 = (ulong *)(*(long *)(uVar14 + 0x30) + uVar9 * 0x10);
      *puVar3 = uVar11;
      puVar3[1] = uVar5;
      FUN_10007f3d4(auStack_108,*(long *)(uVar14 + 0x38) + uVar9 * 0x20);
      if (SCARRY8(*(long *)(uVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100682690);
        (*pcVar6)();
      }
      *(long *)(uVar14 + 0x10) = *(long *)(uVar14 + 0x10) + 1;
    }
    else {
      if ((uVar8 & 1) != 0) goto LAB_1006825e8;
      FUN_10068cf94();
      if ((uVar10 & 1) == 0) goto LAB_1006825f0;
LAB_10068247c:
      lVar2 = *(long *)(uVar14 + 0x38) + uVar9 * 0x20;
      FUN_10003f094(lVar2);
      FUN_10007f3d4(auStack_108,lVar2);
      _swift_bridgeObjectRelease(uVar5);
    }
    uVar16 = uVar16 - 1 & uVar16;
    *param_2 = uVar14;
    FUN_10003f094(auStack_b8);
    FUN_100040bb4(&local_98,&DAT_100ab9ff8,&DAT_10084dd80);
  } while( true );
}

