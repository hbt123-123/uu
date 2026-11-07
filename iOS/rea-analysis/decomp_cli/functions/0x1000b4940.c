// rea decompile_all
// name: FUN_1000b4940
// address: 0x1000b4940
// body: available
// range: 0x1000b4940-0x1000b4cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000b4940(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 auStack_210 [208];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar13 = 0;
  lVar14 = 0;
  lVar9 = 0;
  lVar11 = 0;
  uVar10 = 0;
  puVar15 = (undefined8 *)(PTR___swiftEmptyArrayStorage_1000f0740 + 0x20);
  puVar12 = PTR___swiftEmptyArrayStorage_1000f0740;
  do {
    if (uVar10 == *(ulong *)(param_1 + 0x10)) {
LAB_1000b4c48:
      FUN_100077fd4(lVar9,lVar14,uVar13);
      if (1 < *(ulong *)(puVar12 + 0x18)) {
        uVar13 = *(ulong *)(puVar12 + 0x18) >> 1;
        if (SBORROW8(uVar13,lVar11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000b4cac);
          (*pcVar4)();
        }
        *(ulong *)(puVar12 + 0x10) = uVar13 - lVar11;
      }
      return puVar12;
    }
    if (*(ulong *)(param_1 + 0x10) <= uVar10) {
LAB_1000b4c98:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000b4c9c);
      (*pcVar4)();
    }
    plVar2 = (long *)(param_1 + 0x20 + uVar10 * 0x10);
    lVar8 = *plVar2;
    lVar3 = plVar2[1];
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar3);
    FUN_100077fd4(lVar9,lVar14,uVar13);
    plVar2 = (long *)(param_1 + 0x38 + uVar10 * 0x10);
    lVar9 = lVar8;
    lVar14 = lVar3;
    while ((uVar10 = uVar10 + 1, lVar9 == 0 || (uVar7 = *(ulong *)(lVar9 + 0x10), uVar7 == 0))) {
      if (uVar10 == *(ulong *)(param_1 + 0x10)) {
        uVar13 = 0;
        goto LAB_1000b4c48;
      }
      if (*(ulong *)(param_1 + 0x10) <= uVar10) goto LAB_1000b4c98;
      lVar8 = plVar2[-1];
      lVar3 = *plVar2;
      _swift_bridgeObjectRetain(lVar8);
      _swift_bridgeObjectRetain(lVar3);
      FUN_100077fd4(lVar9,lVar14,0);
      plVar2 = plVar2 + 2;
      lVar9 = lVar8;
      lVar14 = lVar3;
    }
    uVar13 = 0;
    do {
      if (uVar7 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000b4ca0);
        (*pcVar4)();
      }
      lVar8 = lVar9 + uVar13 * 0xd0;
      uStack_138 = *(undefined8 *)(lVar8 + 0x28);
      local_140 = *(undefined8 *)(lVar8 + 0x20);
      uStack_128 = *(undefined8 *)(lVar8 + 0x38);
      local_130 = *(undefined8 *)(lVar8 + 0x30);
      uStack_118 = *(undefined8 *)(lVar8 + 0x48);
      local_120 = *(undefined8 *)(lVar8 + 0x40);
      uStack_108 = *(undefined8 *)(lVar8 + 0x58);
      local_110 = *(undefined8 *)(lVar8 + 0x50);
      uStack_f8 = *(undefined8 *)(lVar8 + 0x68);
      local_100 = *(undefined8 *)(lVar8 + 0x60);
      uStack_e8 = *(undefined8 *)(lVar8 + 0x78);
      local_f0 = *(undefined8 *)(lVar8 + 0x70);
      uStack_d8 = *(undefined8 *)(lVar8 + 0x88);
      local_e0 = *(undefined8 *)(lVar8 + 0x80);
      uStack_c8 = *(undefined8 *)(lVar8 + 0x98);
      local_d0 = *(undefined8 *)(lVar8 + 0x90);
      uStack_b8 = *(undefined8 *)(lVar8 + 0xa8);
      local_c0 = *(undefined8 *)(lVar8 + 0xa0);
      uStack_a8 = *(undefined8 *)(lVar8 + 0xb8);
      local_b0 = *(undefined8 *)(lVar8 + 0xb0);
      uStack_98 = *(undefined8 *)(lVar8 + 200);
      local_a0 = *(undefined8 *)(lVar8 + 0xc0);
      uStack_88 = *(undefined8 *)(lVar8 + 0xd8);
      local_90 = *(undefined8 *)(lVar8 + 0xd0);
      uStack_78 = *(undefined8 *)(lVar8 + 0xe8);
      local_80 = *(undefined8 *)(lVar8 + 0xe0);
      if (lVar11 == 0) {
        if ((long)((*(ulong *)(puVar12 + 0x18) >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000b4ca8);
          (*pcVar4)();
        }
        uVar7 = *(ulong *)(puVar12 + 0x18) & 0xfffffffffffffffe;
        if ((long)uVar7 < 2) {
          uVar7 = 1;
        }
        puVar5 = &DAT_100104040;
        FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
        _swift_allocObject();
        puVar6 = puVar5;
        _malloc_size();
        *(ulong *)(puVar5 + 0x10) = uVar7;
        *(long *)(puVar5 + 0x18) = ((long)(puVar6 + -0x20) / 0xd0) * 2;
        puVar1 = puVar5 + 0x20;
        uVar7 = *(ulong *)(puVar12 + 0x18) >> 1;
        puVar15 = (undefined8 *)(puVar1 + uVar7 * 0xd0);
        lVar11 = ((long)(puVar6 + -0x20) / 0xd0 & 0x7fffffffffffffffU) - uVar7;
        if (*(long *)(puVar12 + 0x10) == 0) {
          FUN_10006ff98(&local_140,auStack_210);
        }
        else {
          if (((puVar5 < puVar12) || (puVar12 + 0x20 + uVar7 * 0xd0 <= puVar1)) ||
             (puVar5 != puVar12)) {
            FUN_10006ff98(&local_140,auStack_210);
            _memmove(puVar1,puVar12 + 0x20,uVar7 * 0xd0);
          }
          else {
            FUN_10006ff98(&local_140,auStack_210);
          }
          *(undefined8 *)(puVar12 + 0x10) = 0;
        }
        _swift_release(puVar12);
        puVar12 = puVar5;
      }
      else {
        FUN_10006ff98(&local_140,auStack_210);
      }
      if (SBORROW8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000b4ca4);
        (*pcVar4)();
      }
      lVar11 = lVar11 + -1;
      uVar13 = uVar13 + 1;
      puVar15[5] = uStack_118;
      puVar15[4] = local_120;
      puVar15[7] = uStack_108;
      puVar15[6] = local_110;
      puVar15[1] = uStack_138;
      *puVar15 = local_140;
      puVar15[3] = uStack_128;
      puVar15[2] = local_130;
      puVar15[0xd] = uStack_d8;
      puVar15[0xc] = local_e0;
      puVar15[0xf] = uStack_c8;
      puVar15[0xe] = local_d0;
      puVar15[9] = uStack_f8;
      puVar15[8] = local_100;
      puVar15[0xb] = uStack_e8;
      puVar15[10] = local_f0;
      puVar15[0x19] = uStack_78;
      puVar15[0x18] = local_80;
      puVar15[0x15] = uStack_98;
      puVar15[0x14] = local_a0;
      puVar15[0x17] = uStack_88;
      puVar15[0x16] = local_90;
      puVar15[0x11] = uStack_b8;
      puVar15[0x10] = local_c0;
      puVar15[0x13] = uStack_a8;
      puVar15[0x12] = local_b0;
      puVar15 = puVar15 + 0x1a;
    } while ((lVar9 != 0) && (uVar7 = *(ulong *)(lVar9 + 0x10), uVar13 != uVar7));
  } while( true );
}

