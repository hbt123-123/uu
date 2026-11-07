// rea decompile_all
// name: FUN_1000645b4
// address: 0x1000645b4
// body: available
// range: 0x1000645b4-0x10006477f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000645b4(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 auStack_118 [88];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  FUN_100004bb4(&DAT_100a763c0,&DAT_10080abe8);
  lVar12 = *unaff_x20;
  lVar6 = lVar12;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar12 + 0x10) != 0) {
    pvVar1 = (void *)(lVar12 + 0x40);
    uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar6 != lVar12 || (void *)((long)pvVar1 + uVar7 * 8) <= (void *)(lVar6 + 0x40)) {
      _memmove((void *)(lVar6 + 0x40),pvVar1,uVar7 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((long)uVar8 < 0x40) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar12 + 0x40);
    if (uVar7 == 0) goto LAB_10006469c;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        uVar9 = LZCOUNT(uVar9) | lVar13 << 6;
        lVar11 = uVar9 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + lVar11);
        uVar4 = puVar2[1];
        lVar10 = uVar9 * 0x58;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x38) + lVar10);
        uStack_98 = puVar3[5];
        local_a0 = puVar3[4];
        uStack_88 = puVar3[7];
        local_90 = puVar3[6];
        uStack_78 = puVar3[9];
        uStack_80 = puVar3[8];
        local_70 = *(undefined1 *)(puVar3 + 10);
        uStack_b8 = puVar3[1];
        local_c0 = *puVar3;
        uStack_a8 = puVar3[3];
        uStack_b0 = puVar3[2];
        puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar10);
        puVar2[1] = uStack_b8;
        *puVar2 = local_c0;
        puVar2[3] = uStack_a8;
        puVar2[2] = uStack_b0;
        *(undefined1 *)(puVar2 + 10) = local_70;
        puVar2[7] = uStack_88;
        puVar2[6] = local_90;
        puVar2[9] = uStack_78;
        puVar2[8] = uStack_80;
        puVar2[5] = uStack_98;
        puVar2[4] = local_a0;
        _swift_bridgeObjectRetain();
        FUN_100082314(&local_c0,auStack_118);
        if (uVar7 != 0) break;
LAB_10006469c:
        do {
          lVar10 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100064780);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_100064750;
          uVar7 = *(ulong *)((long)pvVar1 + lVar10 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar13 = lVar10;
      }
    } while( true );
  }
LAB_100064750:
  _swift_release(lVar12);
  *unaff_x20 = lVar6;
  return;
}

