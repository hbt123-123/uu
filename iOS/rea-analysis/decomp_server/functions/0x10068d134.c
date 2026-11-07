// rea decompile_all
// name: FUN_10068d134
// address: 0x10068d134
// body: available
// range: 0x10068d134-0x10068d2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10068d134(void)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_c8 [56];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  
  FUN_100004bb4(&DAT_100ab9ff0,&DAT_10084dd78);
  lVar12 = *unaff_x20;
  lVar7 = lVar12;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar12 + 0x10) != 0) {
    pvVar1 = (void *)(lVar12 + 0x40);
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar12 || (void *)((long)pvVar1 + uVar8 * 8) <= (void *)(lVar7 + 0x40)) {
      _memmove((void *)(lVar7 + 0x40),pvVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar12 + 0x40);
    if (uVar8 == 0) goto LAB_10068d210;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        lVar11 = uVar10 * 0x10;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + lVar11);
        uVar5 = puVar3[1];
        lVar2 = uVar10 * 0x38;
        puVar4 = (undefined8 *)(*(long *)(lVar12 + 0x38) + lVar2);
        uStack_78 = puVar4[3];
        local_80 = puVar4[2];
        uVar14 = puVar4[5];
        local_70 = puVar4[4];
        uStack_88 = puVar4[1];
        local_90 = *puVar4;
        uStack_68 = (undefined7)uVar14;
        uStack_61._1_3_ = (undefined3)((uint)*(undefined4 *)((long)puVar4 + 0x2f) >> 8);
        uStack_61._0_1_ = (undefined1)((ulong)uVar14 >> 0x38);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar11);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar2);
        *(undefined4 *)((long)puVar3 + 0x2f) = uStack_61;
        puVar3[3] = uStack_78;
        puVar3[2] = local_80;
        puVar3[5] = uVar14;
        puVar3[4] = local_70;
        puVar3[1] = uStack_88;
        *puVar3 = local_90;
        _swift_bridgeObjectRetain();
        FUN_10068e538(&local_90,auStack_c8);
        if (uVar8 != 0) break;
LAB_10068d210:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10068d2e4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10068d2b8;
          uVar8 = *(ulong *)((long)pvVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10068d2b8:
  _swift_release(lVar12);
  *unaff_x20 = lVar7;
  return;
}

