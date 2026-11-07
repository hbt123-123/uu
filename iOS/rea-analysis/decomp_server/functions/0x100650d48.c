// rea decompile_all
// name: FUN_100650d48
// address: 0x100650d48
// body: available
// range: 0x100650d48-0x100651337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100650d48(ulong param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,
                   ulong param_6,uint param_7,long param_8)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined8 local_168;
  ulong uStack_160;
  uint local_134;
  ulong local_130;
  ulong local_120;
  ulong uStack_118;
  undefined1 local_110;
  long local_108;
  ulong local_100;
  ulong uStack_f8;
  byte local_f0;
  long local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined *local_c8;
  byte local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined *local_a0;
  byte local_98;
  ulong local_90;
  ulong uStack_88;
  undefined1 local_80;
  long local_78;
  byte local_70;
  
  uVar9 = param_1;
  FUN_10065f798();
  local_134 = (uint)param_3;
  if (0x3f < (long)uVar9) {
    lVar20 = 1;
    FUN_10064b1b4(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,param_1,param_2,param_3,param_4);
    if (lVar20 != -1) goto LAB_100650dec;
    goto LAB_100650e58;
  }
  if ((param_3 & 0xff) == 0) {
    if (param_2 == 0 && param_1 == 0) goto LAB_100650dec;
    uVar9 = param_1;
    if (param_2 == 0 && param_1 == 0) goto LAB_100651328;
  }
  else {
    if ((local_134 & 0xff) == 1) {
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100651318);
        (*pcVar8)();
      }
      if (param_2 == param_1) goto LAB_100650dec;
LAB_100650e24:
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10065130c);
        (*pcVar8)();
      }
      if ((long)(param_2 - param_1) < 1) {
LAB_100651328:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10065132c);
        (*pcVar8)();
      }
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100651310);
        (*pcVar8)();
      }
      if (*(ulong *)(param_4 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100651314);
        (*pcVar8)();
      }
      lVar20 = param_4 + param_1 * 8;
    }
    else {
      if (*(long *)(param_4 + 0x10) == 0) goto LAB_100650dec;
      lVar20 = param_4;
      if ((local_134 & 0xff) != 2) goto LAB_100650e24;
    }
    uVar9 = *(ulong *)(lVar20 + 0x20);
  }
  if ((long)uVar9 < 2) {
LAB_100650dec:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100650df0);
    (*pcVar8)();
  }
LAB_100650e58:
  _swift_bridgeObjectRetain_n(param_8,2);
  local_168 = 0;
  uStack_160 = 0;
  lVar20 = param_4;
  uVar6 = 0;
  uVar9 = 1;
  lVar21 = param_4;
  uVar22 = param_1;
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar26 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_130 = param_2;
  bVar1 = 0;
  bVar2 = 0;
  uVar3 = 0;
  uVar18 = 0;
  do {
    puVar24 = puVar7;
    uVar23 = param_6;
    uVar19 = uVar9;
    uVar17 = uVar6;
    lVar16 = param_8;
    uVar15 = param_5;
    _swift_bridgeObjectRetain(lVar20);
    if ((param_7 & 0xff) == 0) {
      _swift_bridgeObjectRelease(lVar16);
      if (uVar15 == 0 && uVar23 == 0) {
LAB_100651140:
        _swift_bridgeObjectRelease(puVar24);
        _swift_bridgeObjectRelease(lVar16);
        uVar9 = uVar22;
        FUN_10065f798(uVar22,local_130,local_134,lVar21);
        if (0x3f < (long)uVar9) {
          lVar20 = 1;
          FUN_10064b1b4(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,uVar22,local_130,local_134,
                        lVar21);
          _swift_bridgeObjectRelease(lVar21);
          if (lVar20 != -1) goto LAB_100651274;
          goto LAB_10065125c;
        }
        if ((local_134 & 0xff) == 0) {
          _swift_bridgeObjectRelease(lVar21);
          if (local_130 == 0 && uVar22 == 0) goto LAB_100651274;
          if (local_130 == 0 && uVar22 == 0) goto LAB_100651334;
        }
        else {
          if ((local_134 & 0xff) == 1) {
            if (SBORROW8(local_130,uVar22)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10065131c);
              (*pcVar8)();
            }
            if (local_130 == uVar22) {
LAB_10065120c:
              _swift_bridgeObjectRelease(lVar21);
              goto LAB_100651274;
            }
LAB_10065121c:
            if (SBORROW8(local_130,uVar22)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100651320);
              (*pcVar8)();
            }
            if ((long)(local_130 - uVar22) < 1) {
              _swift_bridgeObjectRelease(lVar21);
LAB_100651334:
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100651338);
              (*pcVar8)();
            }
            if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100651324);
              (*pcVar8)();
            }
            if (*(ulong *)(lVar21 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100651328);
              (*pcVar8)();
            }
            lVar20 = lVar21 + uVar22 * 8;
          }
          else {
            if (*(long *)(lVar21 + 0x10) == 0) goto LAB_10065120c;
            lVar20 = lVar21;
            if ((local_134 & 0xff) != 2) goto LAB_10065121c;
          }
          uVar22 = *(ulong *)(lVar20 + 0x20);
          _swift_bridgeObjectRelease(lVar21);
        }
        if (1 < (long)uVar22) {
LAB_10065125c:
          _swift_bridgeObjectRelease(puVar26);
          return 0;
        }
LAB_100651274:
        if ((bVar1 & 1) == 0) {
          return uStack_160;
        }
        local_f0 = (byte)param_3;
        local_100 = param_1;
        uStack_f8 = param_2;
        local_e8 = param_4;
        _swift_bridgeObjectRetain();
        FUN_10065eb84(uStack_160,local_168,uVar3,puVar26,0);
        _swift_bridgeObjectRelease(puVar26);
        if ((uStack_160 & 1) == 0) {
          return local_100;
        }
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100651308);
        (*pcVar8)();
      }
    }
    else if ((param_7 & 0xff) == 1) {
      _swift_bridgeObjectRelease(lVar16);
    }
    else {
      lVar20 = *(long *)(lVar16 + 0x10);
      _swift_bridgeObjectRelease(lVar16);
      if (lVar20 == 0) goto LAB_100651140;
    }
    uStack_f8 = local_130;
    local_110 = (undefined1)param_7;
    local_120 = uVar15;
    uStack_118 = uVar23;
    local_108 = lVar16;
    local_100 = uVar22;
    local_f0 = (byte)local_134;
    local_e8 = lVar21;
    _swift_bridgeObjectRetain(lVar21);
    _swift_bridgeObjectRetain(lVar16);
    FUN_10064dab4(&local_100,&local_120);
    _swift_bridgeObjectRelease(local_108);
    lVar20 = local_e8;
    uVar12 = uStack_f8;
    uVar10 = local_100;
    uVar25 = (ulong)local_f0;
    local_b8 = uStack_160;
    uStack_b0 = local_168;
    local_98 = bVar1 & 1;
    uVar9 = local_100;
    uVar11 = uStack_f8;
    uVar13 = uVar25;
    lVar14 = local_e8;
    local_a8 = uVar3;
    local_a0 = puVar26;
    FUN_1006527dc();
    local_70 = bVar2;
    if ((uVar13 & 0xff) == 0) {
      if ((uVar9 != 0) || (local_70 = uVar11 != 0 & bVar2, uVar11 != 0)) goto LAB_100651008;
    }
    else if ((((uint)uVar13 & 0xff) == 1) || (*(long *)(lVar14 + 0x10) != 0)) {
LAB_100651008:
      local_70 = local_70 ^ 1;
    }
    else {
      local_70 = 0;
    }
    local_80 = (undefined1)uVar13;
    local_70 = local_70 & 1;
    local_90 = uVar9;
    uStack_88 = uVar11;
    local_78 = lVar14;
    FUN_1006430ec(&local_e0,&local_b8,&local_90);
    bVar5 = local_c0;
    puVar7 = local_c8;
    uVar4 = local_d0;
    uVar6 = uStack_d8;
    uVar9 = local_e0;
    _swift_bridgeObjectRelease(puVar26);
    _swift_bridgeObjectRelease(lVar14);
    lVar14 = lVar20;
    FUN_1006527dc(uVar10,uVar12,uVar25,lVar20,uVar15,uVar23,param_7,lVar16);
    _swift_bridgeObjectRelease(lVar20);
    uStack_f8 = local_130;
    local_100 = uVar22;
    local_f0 = (byte)local_134;
    local_e8 = lVar21;
    FUN_10065eb84(uVar10,uVar12,uVar25,lVar14,0);
    _swift_bridgeObjectRelease(lVar14);
    if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100651304);
      (*pcVar8)();
    }
    lVar20 = local_e8;
    param_5 = local_100;
    param_8 = local_e8;
    lVar21 = lVar16;
    uVar22 = uVar15;
    param_6 = uStack_f8;
    puVar26 = puVar24;
    local_168 = uVar17;
    uStack_160 = uVar19;
    local_134 = param_7;
    local_130 = uVar23;
    param_7 = (uint)local_f0;
    bVar1 = bVar2;
    bVar2 = bVar5;
    uVar3 = uVar18;
    uVar18 = uVar4;
  } while( true );
}

