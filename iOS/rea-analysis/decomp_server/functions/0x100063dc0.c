// rea decompile_all
// name: FUN_100063dc0
// address: 0x100063dc0
// body: available
// range: 0x100063dc0-0x100063f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100063dc0(void)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
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
  
  FUN_100004bb4(&DAT_100a76458,&DAT_10080acb0);
  lVar9 = *unaff_x20;
  lVar5 = lVar9;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    pvVar1 = (void *)(lVar9 + 0x40);
    uVar6 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar9 || (void *)((long)pvVar1 + uVar6 * 8) <= (void *)(lVar5 + 0x40)) {
      _memmove((void *)(lVar5 + 0x40),pvVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((long)uVar7 < 0x40) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_100063ea8;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 0x58);
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
        *(undefined1 *)(*(long *)(lVar5 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
        puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar8 * 0x58);
        puVar3[1] = uStack_b8;
        *puVar3 = local_c0;
        puVar3[3] = uStack_a8;
        puVar3[2] = uStack_b0;
        *(undefined1 *)(puVar3 + 10) = local_70;
        puVar3[7] = uStack_88;
        puVar3[6] = local_90;
        puVar3[9] = uStack_78;
        puVar3[8] = uStack_80;
        puVar3[5] = uStack_98;
        puVar3[4] = local_a0;
        FUN_100082c4c(&local_c0,auStack_118);
        if (uVar6 != 0) break;
LAB_100063ea8:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100063f7c);
            (*pcVar4)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_100063f4c;
          uVar6 = *(ulong *)((long)pvVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_100063f4c:
  _swift_release(lVar9);
  *unaff_x20 = lVar5;
  return;
}

