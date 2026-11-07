// rea decompile_all
// name: FUN_1000690d0
// address: 0x1000690d0
// body: available
// range: 0x1000690d0-0x1000693b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000690d0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_90 [12];
  uint local_84;
  
  lVar6 = 0;
  __s10Foundation4DateVMa();
  lVar17 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar14 = *unaff_x20;
  lVar18 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar18 = param_1;
  }
  puVar7 = &DAT_100a762a0;
  FUN_100004bb4(&DAT_100a762a0,&DAT_10080aa90);
  lVar8 = lVar14;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar14,lVar18,param_2,puVar7);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_100069380:
    _swift_release(lVar14);
LAB_100069388:
    *unaff_x20 = lVar8;
    return;
  }
  lVar18 = 0;
  puVar16 = (ulong *)(lVar14 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar8 + 0x40;
  local_84 = (uint)param_2;
  lVar2 = 0x20;
  if ((param_2 & 1) == 0) {
    lVar2 = 0x10;
  }
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar18 + 1;
        if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000693b0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((local_84 & 1) == 0) {
            _swift_release(lVar14);
            goto LAB_100069388;
          }
          uVar15 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
          if ((long)uVar15 < 0x40) {
            *puVar16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(puVar16,uVar15 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar14 + 0x10) = 0;
          goto LAB_100069380;
        }
        uVar15 = puVar16[lVar19];
        lVar18 = lVar18 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar18;
    }
    uVar10 = LZCOUNT(uVar10) | lVar19 << 6;
    uVar3 = *(undefined4 *)(*(long *)(lVar14 + 0x30) + uVar10 * 4);
    lVar18 = *(long *)(lVar17 + 0x48);
    (**(code **)(lVar17 + lVar2))
              (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(long *)(lVar14 + 0x38) + lVar18 * uVar10,lVar6);
    uVar9 = *(ulong *)(lVar8 + 0x28);
    __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar9,uVar3,4);
    uVar13 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar13 ^ 0xffffffffffffffff);
    uVar11 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar4 = false;
      uVar10 = 0x3f - uVar13 >> 6;
      do {
        uVar9 = uVar11 + 1;
        if ((uVar9 == uVar10) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000693b4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar9 != uVar10) {
          uVar11 = uVar9;
        }
        bVar4 = (bool)(uVar9 == uVar10 | bVar4);
        uVar9 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar10 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + uVar11 * 0x40;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    *(undefined4 *)(*(long *)(lVar8 + 0x30) + uVar10 * 4) = uVar3;
    (**(code **)(lVar17 + 0x20))
              (*(long *)(lVar8 + 0x38) + lVar18 * uVar10,
               auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar6);
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar18 = lVar19;
  } while( true );
}

