// rea decompile_all
// name: FUN_1002710f0
// address: 0x1002710f0
// body: available
// range: 0x1002710f0-0x10027163b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010027144c) */

void FUN_1002710f0(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *unaff_x20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  ulong *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 local_128 [11];
  ulong local_d0;
  undefined1 auStack_b0 [80];
  
  puVar5 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  lVar22 = (long)local_128 +
           (-8 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar6 + -8);
  uVar12 = lVar22 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar7 + -8);
  lVar14 = uVar12 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  FUN_100275594();
  puVar15 = (undefined8 *)
            (lVar14 - (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar26 = *unaff_x20;
  lVar1 = *(long *)(lVar26 + 0x18);
  if (*(long *)(lVar26 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar5 = &DAT_100a812f8;
  FUN_100004bb4(&DAT_100a812f8,&DAT_1008153c0);
  lVar9 = lVar26;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar26,lVar1,param_2,puVar5);
  if (*(long *)(lVar26 + 0x10) == 0) {
LAB_100271608:
    _swift_release(lVar26);
LAB_100271610:
    *unaff_x20 = lVar9;
    return;
  }
  puVar24 = (ulong *)(lVar26 + 0x40);
  uVar18 = 1L << ((ulong)*(byte *)(lVar26 + 0x20) & 0x3f);
  local_d0 = 0xffffffffffffffff;
  if ((long)uVar18 < 0x40) {
    local_d0 = ~(-1L << (uVar18 & 0x3f));
  }
  local_d0 = local_d0 & *puVar24;
  lVar1 = lVar9 + 0x40;
  lVar25 = 0;
  do {
    if (local_d0 == 0) {
      do {
        lVar23 = lVar25 + 1;
        if (SCARRY8(lVar25,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100271638);
          (*pcVar3)();
        }
        if ((long)(uVar18 + 0x3f >> 6) <= lVar23) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar26);
            goto LAB_100271610;
          }
          uVar12 = 1L << ((ulong)*(byte *)(lVar26 + 0x20) & 0x3f);
          if ((long)uVar12 < 0x40) {
            *puVar24 = -1L << (uVar12 & 0x3f);
          }
          else {
            _bzero(puVar24,uVar12 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar26 + 0x10) = 0;
          goto LAB_100271608;
        }
        local_d0 = puVar24[lVar23];
        lVar25 = lVar25 + 1;
      } while (local_d0 == 0);
      uVar16 = (local_d0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_d0 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
      local_d0 = local_d0 - 1 & local_d0;
    }
    else {
      uVar16 = (local_d0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_d0 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
      local_d0 = local_d0 - 1 & local_d0;
      lVar23 = lVar25;
    }
    uVar16 = LZCOUNT(uVar16) | lVar23 << 6;
    lVar25 = *(long *)(*(long *)(lVar26 + 0x30) + uVar16 * 8);
    uVar27 = *(undefined8 *)(*(long *)(lVar26 + 0x38) + uVar16 * 8);
    if ((param_2 & 1) == 0) {
      _swift_retain(lVar25);
      _swift_bridgeObjectRetain(uVar27);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_b0,*(undefined8 *)(lVar9 + 0x28));
    FUN_1002663d4(lVar25 + _TtC4Moya8Endpoint::task,puVar15);
    puVar10 = puVar15;
    _swift_getEnumCaseMultiPayload(puVar15,lVar8);
    iVar4 = (int)puVar10;
    if (iVar4 == 8) {
      uVar21 = *puVar15;
      _swift_bridgeObjectRelease(puVar15[1]);
LAB_100271418:
      FUN_1002632d8(auStack_b0,uVar21);
      _swift_bridgeObjectRelease(uVar21);
    }
    else {
      if (iVar4 == 7) {
        uVar21 = *puVar15;
        goto LAB_100271418;
      }
      if (iVar4 == 6) {
        (**(code **)(lVar13 + 0x20))(lVar14,puVar15,lVar7);
        puVar5 = &DAT_100a81028;
        FUN_100005c90(&DAT_100a81028,PTR___s10Foundation3URLVMa_100996188,
                      PTR___s10Foundation3URLVSHAAMc_1009961a0);
        __sSH4hash4intoys6HasherVz_tFTj(auStack_b0,lVar7,puVar5);
        (**(code **)(lVar13 + 8))(lVar14,lVar7);
      }
      else {
        FUN_100266418(puVar15);
      }
    }
    FUN_10026162c(lVar22);
    (**(code **)(lVar11 + 0x38))(lVar22,0,1,lVar6);
    (**(code **)(lVar11 + 0x20))(uVar12,lVar22,lVar6);
    puVar5 = &DAT_100a81020;
    FUN_100005c90(&DAT_100a81020,PTR___s10Foundation10URLRequestVMa_1009960c0,
                  PTR___s10Foundation10URLRequestVSHAAMc_1009960d0);
    __sSH4hash4intoys6HasherVz_tFTj(auStack_b0,lVar6,puVar5);
    uVar19 = uVar12;
    (**(code **)(lVar11 + 8))(uVar12,lVar6);
    __ss6HasherV9_finalizeSiyF();
    uVar20 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar19 = uVar19 & (uVar20 ^ 0xffffffffffffffff);
    uVar17 = uVar19 >> 6;
    uVar16 = -1L << (uVar19 & 0x3f) & (*(ulong *)(lVar1 + uVar17 * 8) ^ 0xffffffffffffffff);
    if (uVar16 == 0) {
      bVar2 = false;
      uVar16 = 0x3f - uVar20 >> 6;
      do {
        uVar19 = uVar17 + 1;
        if ((uVar19 == uVar16) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10027163c);
          (*pcVar3)();
        }
        uVar17 = 0;
        if (uVar19 != uVar16) {
          uVar17 = uVar19;
        }
        bVar2 = (bool)(uVar19 == uVar16 | bVar2);
        uVar19 = *(ulong *)(lVar1 + uVar17 * 8);
      } while (uVar19 == 0xffffffffffffffff);
      uVar19 = ~uVar19;
      uVar16 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + uVar17 * 0x40;
    }
    else {
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | uVar19 & 0x7fffffffffffffc0;
    }
    uVar17 = uVar16 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar17) = 1L << (uVar16 & 0x3f) | *(ulong *)(lVar1 + uVar17);
    *(long *)(*(long *)(lVar9 + 0x30) + uVar16 * 8) = lVar25;
    *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar16 * 8) = uVar27;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar25 = lVar23;
  } while( true );
}

