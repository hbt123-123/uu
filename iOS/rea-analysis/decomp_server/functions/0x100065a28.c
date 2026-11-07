// rea decompile_all
// name: FUN_100065a28
// address: 0x100065a28
// body: available
// range: 0x100065a28-0x100065c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100065a28(void)

{
  void *pvVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_190 [160];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100004bb4(&DAT_100a763a8,&DAT_10080abd0);
  lVar13 = *unaff_x20;
  lVar7 = lVar13;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar13 + 0x10) != 0) {
    pvVar1 = (void *)(lVar13 + 0x40);
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar13 || (void *)((long)pvVar1 + uVar8 * 8) <= (void *)(lVar7 + 0x40)) {
      _memmove((void *)(lVar7 + 0x40),pvVar1,uVar8 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar13 + 0x40);
    if (uVar8 == 0) goto LAB_100065b04;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
        lVar12 = uVar10 * 0x10;
        puVar2 = (undefined1 *)(*(long *)(lVar13 + 0x30) + lVar12);
        uVar5 = *(undefined4 *)(puVar2 + 0xc);
        lVar11 = uVar10 * 0xa0;
        puVar3 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar11);
        uVar15 = *(undefined8 *)(puVar2 + 4);
        uStack_c8 = puVar3[5];
        local_d0 = puVar3[4];
        uStack_b8 = puVar3[7];
        local_c0 = puVar3[6];
        uStack_a8 = puVar3[9];
        local_b0 = puVar3[8];
        uStack_98 = puVar3[0xb];
        uStack_a0 = puVar3[10];
        uStack_68 = puVar3[0x11];
        local_70 = puVar3[0x10];
        uStack_58 = puVar3[0x13];
        uStack_60 = puVar3[0x12];
        uStack_88 = puVar3[0xd];
        local_90 = puVar3[0xc];
        uStack_78 = puVar3[0xf];
        uStack_80 = puVar3[0xe];
        uStack_e8 = puVar3[1];
        local_f0 = *puVar3;
        uStack_d8 = puVar3[3];
        uStack_e0 = puVar3[2];
        puVar4 = (undefined1 *)(*(long *)(lVar7 + 0x30) + lVar12);
        *puVar4 = *puVar2;
        *(undefined8 *)(puVar4 + 4) = uVar15;
        *(undefined4 *)(puVar4 + 0xc) = uVar5;
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar11);
        puVar3[1] = uStack_e8;
        *puVar3 = local_f0;
        puVar3[3] = uStack_d8;
        puVar3[2] = uStack_e0;
        puVar3[9] = uStack_a8;
        puVar3[8] = local_b0;
        puVar3[0xb] = uStack_98;
        puVar3[10] = uStack_a0;
        puVar3[5] = uStack_c8;
        puVar3[4] = local_d0;
        puVar3[7] = uStack_b8;
        puVar3[6] = local_c0;
        puVar3[0x11] = uStack_68;
        puVar3[0x10] = local_70;
        puVar3[0x13] = uStack_58;
        puVar3[0x12] = uStack_60;
        puVar3[0xd] = uStack_88;
        puVar3[0xc] = local_90;
        puVar3[0xf] = uStack_78;
        puVar3[0xe] = uStack_80;
        FUN_1000822d8(&local_f0,auStack_190);
        if (uVar8 != 0) break;
LAB_100065b04:
        do {
          lVar11 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100065c08);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar11) goto LAB_100065bdc;
          uVar8 = *(ulong *)((long)pvVar1 + lVar11 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar14 = lVar11;
      }
    } while( true );
  }
LAB_100065bdc:
  _swift_release(lVar13);
  *unaff_x20 = lVar7;
  return;
}

