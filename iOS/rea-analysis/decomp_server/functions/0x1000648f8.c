// rea decompile_all
// name: FUN_1000648f8
// address: 0x1000648f8
// body: available
// range: 0x1000648f8-0x100064b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000648f8(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  ulong local_68;
  
  lVar6 = 0;
  FUN_1000e984c();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  FUN_100004bb4(&DAT_100a763e8,&DAT_10080ac18);
  lVar10 = *unaff_x20;
  lVar6 = lVar10;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar10 + 0x10) == 0) {
    _swift_release(lVar10);
LAB_100064ae8:
    *unaff_x20 = lVar6;
    return;
  }
  pvVar1 = (void *)(lVar10 + 0x40);
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar6 != lVar10) || ((void *)((long)pvVar1 + uVar8 * 8) <= (void *)(lVar6 + 0x40))) {
    _memmove((void *)(lVar6 + 0x40),pvVar1,uVar8 << 3);
  }
  lVar13 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  local_68 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    local_68 = ~(-1L << (uVar8 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(lVar10 + 0x40);
  if (local_68 == 0) goto LAB_100064a24;
  do {
    uVar9 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar13 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar11 = *(long *)(lVar7 + 0x48) * uVar9;
      FUN_100082394(*(long *)(lVar10 + 0x38) + lVar11,
                    auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),FUN_1000e984c);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_1000823d8(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                    *(long *)(lVar6 + 0x38) + lVar11,FUN_1000e984c);
      _swift_bridgeObjectRetain(uVar4);
      if (local_68 != 0) break;
LAB_100064a24:
      do {
        lVar11 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100064b10);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar11) {
          _swift_release(lVar10);
          goto LAB_100064ae8;
        }
        local_68 = *(ulong *)((long)pvVar1 + lVar11 * 8);
        lVar13 = lVar13 + 1;
      } while (local_68 == 0);
      uVar9 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar13 = lVar11;
    }
  } while( true );
}

