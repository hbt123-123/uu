// rea decompile_all
// name: FUN_10006bb7c
// address: 0x10006bb7c
// body: available
// range: 0x10006bb7c-0x10006be53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10006bb7c(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 uVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_a8 [72];
  
  lVar19 = *unaff_x20;
  lVar1 = *(long *)(lVar19 + 0x18);
  if (*(long *)(lVar19 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  FUN_100004bb4(&DAT_100a763f8,&DAT_10080ac20);
  lVar9 = lVar19;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar19,lVar1,param_2);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_10006be20:
    _swift_release(lVar19);
LAB_10006be28:
    *unaff_x20 = lVar9;
    return;
  }
  puVar18 = (ulong *)(lVar19 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((long)uVar14 < 0x40) {
    uVar16 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar16 = uVar16 & *puVar18;
  lVar1 = lVar9 + 0x40;
  lVar12 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar17 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10006be50);
          (*pcVar8)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar19);
            goto LAB_10006be28;
          }
          uVar16 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
          if ((long)uVar16 < 0x40) {
            *puVar18 = -1L << (uVar16 & 0x3f);
          }
          else {
            _bzero(puVar18,uVar16 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar19 + 0x10) = 0;
          goto LAB_10006be20;
        }
        uVar16 = puVar18[lVar17];
        lVar12 = lVar12 + 1;
      } while (uVar16 == 0);
      uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar17 = lVar12;
    }
    uVar11 = LZCOUNT(uVar11) | lVar17 << 6;
    puVar2 = (undefined1 *)(*(long *)(lVar19 + 0x30) + uVar11 * 0x10);
    uVar6 = *puVar2;
    uVar3 = *(undefined4 *)(puVar2 + 4);
    uVar4 = *(undefined4 *)(puVar2 + 8);
    uVar5 = *(uint *)(puVar2 + 0xc);
    uVar20 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + uVar11 * 8);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
    __ss6HasherV8_combineyySuF(uVar6);
    __ss6HasherV8_combineyys6UInt32VF(uVar3);
    __ss6HasherV8_combineyys6UInt32VF(uVar4);
    uVar10 = (ulong)uVar5;
    __ss6HasherV8_combineyys6UInt32VF();
    __ss6HasherV9_finalizeSiyF();
    uVar15 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar15 ^ 0xffffffffffffffff);
    uVar13 = uVar10 >> 6;
    uVar11 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar7 = false;
      uVar11 = 0x3f - uVar15 >> 6;
      do {
        uVar10 = uVar13 + 1;
        if ((uVar10 == uVar11) && (bVar7)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10006be54);
          (*pcVar8)();
        }
        uVar13 = 0;
        if (uVar10 != uVar11) {
          uVar13 = uVar10;
        }
        bVar7 = (bool)(uVar10 == uVar11 | bVar7);
        uVar10 = *(ulong *)(lVar1 + uVar13 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar11 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + uVar13 * 0x40;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar2 = (undefined1 *)(*(long *)(lVar9 + 0x30) + uVar11 * 0x10);
    *puVar2 = uVar6;
    *(undefined4 *)(puVar2 + 4) = uVar3;
    *(undefined4 *)(puVar2 + 8) = uVar4;
    *(uint *)(puVar2 + 0xc) = uVar5;
    *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar11 * 8) = uVar20;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar12 = lVar17;
  } while( true );
}

