// rea decompile_all
// name: FUN_10054b524
// address: 0x10054b524
// body: available
// range: 0x10054b524-0x10054b83b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054b524(long param_1,ulong param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  undefined1 uVar5;
  bool bVar6;
  long lVar7;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *unaff_x20;
  ulong *puVar20;
  long lVar21;
  byte *pbVar22;
  ulong local_c0;
  undefined1 auStack_a8 [72];
  byte *pbVar23;
  
  lVar21 = *unaff_x20;
  lVar1 = *(long *)(lVar21 + 0x18);
  if (*(long *)(lVar21 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar9 = &DAT_100aab9b8;
  FUN_100004bb4(&DAT_100aab9b8,&DAT_100838310);
  lVar10 = lVar21;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar21,lVar1,param_2,puVar9);
  if (*(long *)(lVar21 + 0x10) == 0) {
LAB_10054b804:
    _swift_release(lVar21);
LAB_10054b80c:
    *unaff_x20 = lVar10;
    return;
  }
  puVar20 = (ulong *)(lVar21 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
  local_c0 = 0xffffffffffffffff;
  if ((long)uVar15 < 0x40) {
    local_c0 = ~(-1L << (uVar15 & 0x3f));
  }
  local_c0 = local_c0 & *puVar20;
  lVar1 = lVar10 + 0x40;
  lVar12 = 0;
  do {
    if (local_c0 == 0) {
      do {
        lVar19 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10054b838);
          (*pcVar8)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar21);
            goto LAB_10054b80c;
          }
          uVar15 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
          if ((long)uVar15 < 0x40) {
            *puVar20 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(puVar20,uVar15 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar21 + 0x10) = 0;
          goto LAB_10054b804;
        }
        local_c0 = puVar20[lVar19];
        lVar12 = lVar12 + 1;
      } while (local_c0 == 0);
      uVar11 = (local_c0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c0 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      local_c0 = local_c0 - 1 & local_c0;
    }
    else {
      uVar11 = (local_c0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c0 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      local_c0 = local_c0 - 1 & local_c0;
      lVar19 = lVar12;
    }
    uVar11 = LZCOUNT(uVar11) | lVar19 << 6;
    plVar16 = (long *)(*(long *)(lVar21 + 0x30) + uVar11 * 0x28);
    pbVar2 = (byte *)*plVar16;
    pbVar3 = (byte *)plVar16[1];
    lVar12 = plVar16[2];
    lVar4 = plVar16[3];
    lVar7 = plVar16[4];
    uVar5 = *(undefined1 *)((long)plVar16 + 0x21);
    uVar13 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + uVar11 * 8);
    if ((param_2 & 1) == 0) {
      FUN_10050f830(lVar12,lVar4,(char)lVar7,uVar5);
    }
    uVar11 = *(ulong *)(lVar10 + 0x28);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8);
    pbVar23 = pbVar2;
    if (pbVar2 != (byte *)0x0 && pbVar2 != pbVar3) {
      do {
        pbVar22 = pbVar23 + 1;
        uVar11 = (ulong)*pbVar23;
        __ss6HasherV8_combineyys5UInt8VF();
        pbVar23 = pbVar22;
      } while (pbVar22 != pbVar3);
    }
    __ss6HasherV9_finalizeSiyF();
    uVar17 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar11 = uVar11 & (uVar17 ^ 0xffffffffffffffff);
    uVar14 = uVar11 >> 6;
    uVar18 = -1L << (uVar11 & 0x3f) & (*(ulong *)(lVar1 + uVar14 * 8) ^ 0xffffffffffffffff);
    if (uVar18 == 0) {
      bVar6 = false;
      uVar11 = 0x3f - uVar17 >> 6;
      do {
        uVar18 = uVar14 + 1;
        if ((uVar18 == uVar11) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10054b83c);
          (*pcVar8)();
        }
        uVar14 = 0;
        if (uVar18 != uVar11) {
          uVar14 = uVar18;
        }
        bVar6 = (bool)(uVar18 == uVar11 | bVar6);
        uVar18 = *(ulong *)(lVar1 + uVar14 * 8);
      } while (uVar18 == 0xffffffffffffffff);
      uVar18 = ~uVar18;
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + uVar14 * 0x40;
    }
    else {
      uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar18 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar18) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar18);
    plVar16 = (long *)(*(long *)(lVar10 + 0x30) + uVar11 * 0x28);
    *plVar16 = (long)pbVar2;
    plVar16[1] = (long)pbVar3;
    plVar16[2] = lVar12;
    plVar16[3] = lVar4;
    *(char *)(plVar16 + 4) = (char)lVar7;
    *(undefined1 *)((long)plVar16 + 0x21) = uVar5;
    *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar11 * 8) = uVar13;
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    lVar12 = lVar19;
  } while( true );
}

