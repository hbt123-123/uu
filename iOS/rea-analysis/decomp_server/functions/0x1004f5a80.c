// rea decompile_all
// name: FUN_1004f5a80
// address: 0x1004f5a80
// body: available
// range: 0x1004f5a80-0x1004f6143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_1004f5a80(long param_1,long param_2,undefined8 param_3,byte param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  long unaff_x21;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 auStack_1a8 [24];
  long local_190;
  undefined *local_180 [3];
  undefined *local_168;
  undefined **local_160;
  long local_158;
  long lStack_150;
  long local_148;
  long lStack_140;
  undefined8 local_138;
  byte bStack_130;
  undefined7 uStack_12f;
  undefined *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [40];
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 - param_1 < 1) {
    return;
  }
  FUN_1000b142c(param_5,auStack_f8);
  lVar5 = 0;
  FUN_10050ef70();
  _swift_allocObject();
  uVar6 = 0x80;
  _swift_slowAlloc(0x80,0xffffffffffffffff);
  *(undefined8 *)(lVar5 + 0x10) = uVar6;
  *(undefined8 *)(lVar5 + 0x18) = 0x80;
  local_148 = 0;
  bStack_130 = param_4 & 1;
  local_158 = param_1;
  lStack_150 = param_2;
  lStack_140 = lVar5;
  local_138 = param_3;
  uStack_100 = param_3;
  FUN_1004f9894(auStack_f8,auStack_1a8);
  if (local_190 == 0) {
    local_160 = &PTR_PTR_1009d1610;
    local_168 = &DAT_1009d1638;
    local_180[0] = PTR___swiftEmptyDictionarySingleton_100995ea8;
    FUN_100040bb4(auStack_f8,&DAT_100aaa0e8,&DAT_1008358c0);
    if (local_190 != 0) {
      FUN_100040bb4(auStack_1a8,&DAT_100aaa0e8,&DAT_1008358c0);
    }
  }
  else {
    FUN_100040bb4(auStack_f8,&DAT_100aaa0e8,&DAT_1008358c0);
    FUN_1000a0074(auStack_1a8,local_180);
  }
  ppuVar10 = local_180;
  ppuVar7 = &local_128;
  FUN_1000a0074();
  lStack_c8 = lStack_150;
  local_d0 = local_158;
  lStack_b8 = lStack_140;
  uStack_a8 = CONCAT71(uStack_12f,bStack_130);
  local_b0 = local_138;
  uStack_98 = uStack_120;
  puStack_a0 = local_128;
  uStack_88 = uStack_110;
  local_90 = local_118;
  uStack_78 = uStack_100;
  uStack_80 = local_108;
  lVar5 = local_148;
LAB_1004f5bf8:
  lVar12 = lStack_c8;
  lVar3 = local_d0;
  lVar13 = lStack_c8 - local_d0;
  lVar1 = lVar13;
  local_c0 = lVar5;
  if (local_d0 == 0) {
    lVar1 = 0;
    goto LAB_1004f5c1c;
  }
LAB_1004f5c10:
  if (lVar13 != local_c0) {
LAB_1004f5c20:
    lVar9 = local_c0;
    if (0x20 < *(byte *)(local_d0 + local_c0) ||
        (1L << ((ulong)*(byte *)(local_d0 + local_c0) & 0x3f) & 0x100002600U) == 0) {
      if (local_d0 == 0) {
        if (local_c0 != 0) goto LAB_1004f5c68;
        goto LAB_1004f5ec0;
      }
      if (lVar13 == local_c0) goto joined_r0x0001004f60e8;
LAB_1004f5c68:
      if (local_d0 == 0) goto LAB_1004f5c7c;
      goto LAB_1004f5c70;
    }
    if ((lVar5 < 0) || (lVar1 <= local_c0)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f5fdc);
      (*pcVar4)();
    }
    local_c0 = local_c0 + 1;
    if (local_d0 == 0) goto LAB_1004f5c1c;
    goto LAB_1004f5c10;
  }
  goto joined_r0x0001004f60e8;
LAB_1004f5c70:
  if (lVar13 == local_c0) goto LAB_1004f5f78;
  while( true ) {
    bVar2 = *(byte *)(local_d0 + local_c0);
    if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if (local_d0 == 0) {
        if (local_c0 == 0) goto LAB_1004f5f78;
      }
      else if (lVar13 == local_c0) goto LAB_1004f5f78;
      if ((bVar2 != 0x22) || (FUN_100535e6c(), ppuVar7 == (undefined **)0x0)) {
        FUN_1004f98e4();
        _swift_allocError(&DAT_1009d03a0,ppuVar10,0,0);
        puVar14 = (undefined *)0x5;
        goto LAB_1004f5f9c;
      }
      lVar12 = lVar3 - lVar12;
      lVar5 = local_c0;
      goto joined_r0x0001004f5ce8;
    }
    if ((lVar9 < 0) || (lVar1 <= local_c0)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f5fe4);
      (*pcVar4)();
    }
    local_c0 = local_c0 + 1;
    if (local_d0 != 0) break;
LAB_1004f5c7c:
    if (local_c0 == 0) goto LAB_1004f5f78;
  }
  goto LAB_1004f5c70;
joined_r0x0001004f5ce8:
  lVar11 = lVar5;
  lVar5 = lVar11 + 1;
  lVar9 = lVar5;
  if (lVar3 != 0) {
    lVar9 = lVar12 + lVar5;
  }
  if (lVar9 == 1) goto LAB_1004f5f70;
  bVar2 = *(byte *)(lVar3 + lVar5 + -1);
  if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) goto LAB_1004f5d40;
  if ((local_c0 < 0) || (lVar1 <= lVar11)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f6010);
    local_c0 = lVar11;
    (*pcVar4)();
  }
  goto joined_r0x0001004f5ce8;
LAB_1004f5d40:
  lVar9 = lVar5;
  if (lVar3 != 0) {
    lVar9 = lVar12 + lVar5;
  }
  if (lVar9 == 1) {
LAB_1004f5f70:
    local_c0 = lVar11;
    _swift_bridgeObjectRelease();
    ppuVar10 = ppuVar7;
LAB_1004f5f78:
    FUN_1004f98e4();
    _swift_allocError(&DAT_1009d03a0,ppuVar10,0,0);
    puVar14 = (undefined *)0xd;
    goto LAB_1004f5f9c;
  }
  if (bVar2 == 0x3a) {
    if ((lVar11 < 0) || (lVar1 <= lVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f612c);
      local_c0 = lVar11;
      (*pcVar4)();
    }
    local_c0 = lVar5;
    if ((ppuVar10 == (undefined **)0x65756c6176) && (ppuVar7 == (undefined **)0xe500000000000000)) {
      _swift_bridgeObjectRelease(0xe500000000000000);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease();
      if (((ulong)ppuVar10 & 1) == 0) {
        if ((param_4 & 1) == 0) goto LAB_1004f5f48;
        if ((lVar3 == 0) || (lVar9 = lVar13, lVar12 + lVar5 != 0)) {
          do {
            lVar11 = lVar5;
            lVar9 = lVar11;
            if (0x20 < *(byte *)(lVar3 + lVar11) ||
                (1L << ((ulong)*(byte *)(lVar3 + lVar11) & 0x3f) & 0x100002600U) == 0) break;
            if (lVar1 == lVar11) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f6128);
              (*pcVar4)();
            }
            local_c0 = lVar11 + 1;
            lVar5 = local_c0;
          } while ((lVar3 == 0) || (lVar9 = lVar13, lVar12 + 2 + lVar11 != 1));
        }
        FUN_100536528();
        lVar3 = local_c0;
        lVar1 = local_d0;
        if (unaff_x21 != 0) goto LAB_1004f5fac;
        if (local_d0 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f6140);
          (*pcVar4)();
        }
        ppuVar10 = (undefined **)(local_c0 - lVar9);
        if (SBORROW8(local_c0,lVar9)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f6130);
          (*pcVar4)();
        }
        ppuVar7 = (undefined **)(local_d0 + lVar9);
        FUN_10054c680();
        if (ppuVar10 == (undefined **)0x0) goto LAB_1004f60f0;
        ppuVar8 = ppuVar10;
        _swift_bridgeObjectRelease();
        lVar13 = lStack_c8 - lVar1;
        lVar5 = lVar3;
        while( true ) {
          if (lVar5 == lVar13) goto LAB_1004f5f78;
          bVar2 = *(byte *)(lVar1 + lVar5);
          ppuVar7 = ppuVar10;
          if (0x2c < bVar2) goto LAB_1004f6018;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
          if ((lVar3 < 0) || (lVar13 <= lVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f6124);
            (*pcVar4)();
          }
          lVar5 = lVar5 + 1;
          local_c0 = lVar5;
        }
        if ((ulong)bVar2 == 0x2c) {
          if ((lVar5 < 0) || (lVar13 <= lVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f6138);
            (*pcVar4)();
          }
          lVar5 = lVar5 + 1;
          ppuVar7 = ppuVar8;
          goto LAB_1004f5bf8;
        }
        goto LAB_1004f6018;
      }
    }
    if ((lVar3 != 0) && (lVar9 = lVar13, lVar12 + lVar5 == 0)) goto LAB_1004f60a0;
    goto LAB_1004f6060;
  }
  local_c0 = lVar11;
  _swift_bridgeObjectRelease();
LAB_1004f6018:
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,ppuVar7,0,0);
  *ppuVar7 = (undefined *)0x0;
  ppuVar7[1] = (undefined *)0x0;
  goto LAB_1004f5fa0;
LAB_1004f5c1c:
  if (local_c0 == 0) {
LAB_1004f5ec0:
    lVar13 = 0;
    lVar3 = 0;
    goto joined_r0x0001004f60e8;
  }
  goto LAB_1004f5c20;
LAB_1004f5f48:
  FUN_1004f9958();
  _swift_allocError(&DAT_1009cda78,ppuVar7,0,0);
  *(undefined1 *)ppuVar7 = 1;
  goto LAB_1004f5fa0;
  while( true ) {
    if (lVar1 == lVar11) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f6134);
      (*pcVar4)();
    }
    local_c0 = lVar11 + 1;
    lVar5 = local_c0;
    if ((lVar3 != 0) && (lVar9 = lVar13, lVar12 + 2 + lVar11 == 1)) break;
LAB_1004f6060:
    lVar11 = lVar5;
    lVar9 = lVar11;
    if (0x20 < *(byte *)(lVar3 + lVar11) ||
        (1L << ((ulong)*(byte *)(lVar3 + lVar11) & 0x3f) & 0x100002600U) == 0) break;
  }
LAB_1004f60a0:
  FUN_100536528();
  lVar13 = local_c0;
  lVar3 = local_d0;
  if (unaff_x21 != 0) goto LAB_1004f5fac;
  if (local_d0 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f6144);
    (*pcVar4)();
  }
  lVar5 = local_c0 - lVar9;
  if (SBORROW8(local_c0,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f613c);
    (*pcVar4)();
  }
  ppuVar7 = (undefined **)(local_d0 + lVar9);
  FUN_10054c680();
  if (lVar5 != 0) {
    ppuVar10 = (undefined **)param_6[1];
    *param_6 = ppuVar7;
    param_6[1] = lVar5;
    _swift_bridgeObjectRelease();
joined_r0x0001004f60e8:
    ppuVar7 = ppuVar10;
    if ((param_4 & 1) == 0) {
      lVar9 = lStack_c8 - lVar3;
      lVar5 = lVar13;
      lVar1 = lVar9;
      lVar12 = 0;
      if (lVar3 != 0) goto LAB_1004f5ef0;
      while (lVar1 = lVar12, lVar5 != 0) {
        while( true ) {
          if (0x20 < *(byte *)(lVar3 + lVar5) ||
              (1L << ((ulong)*(byte *)(lVar3 + lVar5) & 0x3f) & 0x100002600U) == 0) {
            if (lVar3 != 0) {
              if (lVar9 != lVar5) goto LAB_1004f5f48;
              goto LAB_1004f5fac;
            }
            if (lVar5 == 0) goto LAB_1004f5fac;
            goto LAB_1004f5f48;
          }
          if ((lVar13 < 0) || (lVar1 <= lVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f5fe0);
            (*pcVar4)();
          }
          lVar5 = lVar5 + 1;
          lVar12 = lVar1;
          local_c0 = lVar5;
          if (lVar3 == 0) break;
LAB_1004f5ef0:
          if (lVar9 == lVar5) goto LAB_1004f5fac;
        }
      }
    }
    goto LAB_1004f5fac;
  }
LAB_1004f60f0:
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,ppuVar7,0,0);
  puVar14 = (undefined *)0x6;
  ppuVar10 = ppuVar7;
LAB_1004f5f9c:
  ppuVar10[1] = puVar14;
  *ppuVar10 = (undefined *)0x0;
LAB_1004f5fa0:
  _swift_willThrow();
LAB_1004f5fac:
  FUN_1004f9924(&local_d0);
  return;
}

