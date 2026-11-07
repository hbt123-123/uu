// rea decompile_all
// name: FUN_1005ba838
// address: 0x1005ba838
// body: available
// range: 0x1005ba838-0x1005bad2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005ba838(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *unaff_x20;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_258 [24];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_58;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
    return;
  }
  lVar13 = 0;
  uStack_98 = unaff_x20[5];
  local_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  local_80 = unaff_x20[8];
  uStack_b8 = unaff_x20[1];
  local_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
LAB_1005ba8a4:
  puVar7 = (ulong *)(param_1 + 0x20 + lVar13 * 0x68);
  uStack_e8 = puVar7[9];
  local_f0 = puVar7[8];
  local_d8 = puVar7[0xb];
  local_e0 = puVar7[10];
  local_d0 = puVar7[0xc];
  uVar16 = puVar7[1];
  uVar15 = *puVar7;
  uStack_118 = puVar7[3];
  local_120 = puVar7[2];
  uStack_108 = puVar7[5];
  local_110 = puVar7[4];
  local_f8 = puVar7[7];
  uStack_100 = puVar7[6];
  local_140 = local_80;
  uStack_158 = uStack_98;
  local_160 = local_a0;
  uStack_148 = uStack_88;
  uStack_150 = uStack_90;
  uStack_178 = uStack_b8;
  local_180 = local_c0;
  uStack_168 = uStack_a8;
  uStack_170 = uStack_b0;
  uVar10 = uVar15 & 0xffffffffffff;
  if ((uVar16 & 0x2000000000000000) != 0) {
    uVar10 = uVar16 >> 0x38 & 0xf;
  }
  local_130 = uVar15;
  uStack_128 = uVar16;
  if (uVar10 == 0) {
    FUN_1005b3194(&local_130,&local_1f0);
  }
  else {
    __ss6HasherV8_combineyySuF(1);
    FUN_1005b3194(&local_130,&local_1f0);
    __sSS4hash4intoys6HasherVz_tF(&local_180,uVar15,uVar16);
  }
  uVar16 = uStack_118;
  uVar15 = local_120;
  uVar10 = local_120 & 0xffffffffffff;
  if ((uStack_118 & 0x2000000000000000) != 0) {
    uVar10 = uStack_118 >> 0x38 & 0xf;
  }
  if (uVar10 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(&local_180,uVar15,uVar16);
  }
  if ((char)local_110 == '\x01') {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  uVar16 = uStack_100;
  uVar15 = uStack_108;
  uVar10 = uStack_108 & 0xffffffffffff;
  if ((uStack_100 & 0x2000000000000000) != 0) {
    uVar10 = uStack_100 >> 0x38 & 0xf;
  }
  if (uVar10 != 0) {
    __ss6HasherV8_combineyySuF(4);
    __sSS4hash4intoys6HasherVz_tF(&local_180,uVar15,uVar16);
  }
  if ((char)local_f8 == '\x01') {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  uVar10 = local_f0;
  if (*(long *)(local_f0 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(6);
    local_58 = *(long *)(uVar10 + 0x10);
    if (local_58 != 0) {
      uStack_1c8 = uStack_158;
      local_1d0 = local_160;
      uStack_1b8 = uStack_148;
      uStack_1c0 = uStack_150;
      local_1b0 = local_140;
      uStack_1e8 = uStack_178;
      local_1f0 = local_180;
      uStack_1d8 = uStack_168;
      uStack_1e0 = uStack_170;
      plVar11 = (long *)(uVar10 + 0x50);
      do {
        local_58 = local_58 + -1;
        uVar15 = plVar11[-6];
        uVar16 = plVar11[-5];
        lVar8 = plVar11[-4];
        uVar1 = plVar11[-3];
        lVar9 = plVar11[-2];
        lVar2 = plVar11[-1];
        lVar14 = *plVar11;
        uStack_218 = uStack_1c8;
        local_220 = local_1d0;
        uStack_208 = uStack_1b8;
        uStack_210 = uStack_1c0;
        local_200 = local_1b0;
        uVar10 = uVar15 & 0xffffffffffff;
        if ((uVar16 & 0x2000000000000000) != 0) {
          uVar10 = uVar16 >> 0x38 & 0xf;
        }
        uStack_238 = uStack_1e8;
        local_240 = local_1f0;
        uStack_228 = uStack_1d8;
        uStack_230 = uStack_1e0;
        if (uVar10 == 0) {
          _swift_bridgeObjectRetain(uVar16);
          FUN_100008184(lVar8,uVar1);
          FUN_100481814(lVar9,lVar2,lVar14);
        }
        else {
          __ss6HasherV8_combineyySuF(1);
          _swift_bridgeObjectRetain(uVar16);
          FUN_100008184(lVar8,uVar1);
          FUN_100481814(lVar9,lVar2,lVar14);
          __sSS4hash4intoys6HasherVz_tF(&local_240,uVar15,uVar16);
        }
        if (lVar14 != 0) {
          __ss6HasherV8_combineyySuF(2);
          _swift_beginAccess(lVar14 + 0x10,auStack_258,0,0);
          uVar15 = *(ulong *)(lVar14 + 0x10);
          uVar3 = *(ulong *)(lVar14 + 0x18);
          uVar10 = uVar15 & 0xffffffffffff;
          if ((uVar3 & 0x2000000000000000) != 0) {
            uVar10 = uVar3 >> 0x38 & 0xf;
          }
          if (uVar10 != 0) {
            FUN_100481814(lVar9,lVar2,lVar14);
            _swift_bridgeObjectRetain(uVar3);
            __sSS4hash4intoys6HasherVz_tF(&local_240,uVar15,uVar3);
            FUN_10008f148(lVar9,lVar2,lVar14);
            _swift_bridgeObjectRelease(uVar3);
          }
        }
        uVar4 = (uint)(uVar1 >> 0x20);
        uVar6 = uVar4 >> 0x1e;
        if (uVar4 >> 0x1e < 2) {
          if (uVar6 == 0) {
            if ((uVar1 & 0xff000000000000) != 0) {
LAB_1005bab94:
              __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_240,lVar8,uVar1);
            }
          }
          else if ((long)(int)lVar8 != lVar8 >> 0x20) goto LAB_1005bab94;
        }
        else if ((uVar6 == 2) && (*(long *)(lVar8 + 0x10) != *(long *)(lVar8 + 0x18)))
        goto LAB_1005bab94;
        _swift_bridgeObjectRelease(uVar16);
        FUN_100006cdc(lVar8,uVar1);
        FUN_10008f148(lVar9,lVar2,lVar14);
        if (local_58 == 0) goto LAB_1005babfc;
        plVar11 = plVar11 + 7;
        uStack_1c8 = uStack_218;
        local_1d0 = local_220;
        uStack_1b8 = uStack_208;
        uStack_1c0 = uStack_210;
        local_1b0 = local_200;
        uStack_1e8 = uStack_238;
        local_1f0 = local_240;
        uStack_1d8 = uStack_228;
        uStack_1e0 = uStack_230;
      } while( true );
    }
  }
  goto LAB_1005bac28;
LAB_1005babfc:
  uStack_158 = uStack_218;
  local_160 = local_220;
  uStack_148 = uStack_208;
  uStack_150 = uStack_210;
  local_140 = local_200;
  uStack_178 = uStack_238;
  local_180 = local_240;
  uStack_168 = uStack_228;
  uStack_170 = uStack_230;
LAB_1005bac28:
  uVar10 = uStack_e8;
  if ((char)local_e0 == '\x01') {
    if (uStack_e8 != 0) {
      __ss6HasherV8_combineyySuF(7);
      bVar5 = uVar10 == 2;
      uVar10 = 1;
      if (bVar5) {
        uVar10 = 2;
      }
LAB_1005bac68:
      __ss6HasherV8_combineyySuF(uVar10);
    }
  }
  else if (uStack_e8 != 0) {
    __ss6HasherV8_combineyySuF(7);
    goto LAB_1005bac68;
  }
  uVar4 = (uint)(local_d0 >> 0x20);
  uVar6 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar6 != 0) {
      lVar8 = (long)(int)local_d8;
      lVar9 = (long)local_d8 >> 0x20;
      goto LAB_1005bacac;
    }
    if ((local_d0 & 0xff000000000000) == 0) goto LAB_1005bacbc;
  }
  else {
    if (uVar6 != 2) goto LAB_1005bacbc;
    lVar8 = *(long *)(local_d8 + 0x10);
    lVar9 = *(long *)(local_d8 + 0x18);
LAB_1005bacac:
    if (lVar8 == lVar9) goto LAB_1005bacbc;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_180);
LAB_1005bacbc:
  lVar13 = lVar13 + 1;
  FUN_1005b31d0(&local_130);
  if (lVar13 == lVar12) {
    unaff_x20[5] = uStack_158;
    unaff_x20[4] = local_160;
    unaff_x20[7] = uStack_148;
    unaff_x20[6] = uStack_150;
    unaff_x20[8] = local_140;
    unaff_x20[1] = uStack_178;
    *unaff_x20 = local_180;
    unaff_x20[3] = uStack_168;
    unaff_x20[2] = uStack_170;
    return;
  }
  uStack_98 = uStack_158;
  local_a0 = local_160;
  uStack_88 = uStack_148;
  uStack_90 = uStack_150;
  local_80 = local_140;
  uStack_b8 = uStack_178;
  local_c0 = local_180;
  uStack_a8 = uStack_168;
  uStack_b0 = uStack_170;
  goto LAB_1005ba8a4;
}

