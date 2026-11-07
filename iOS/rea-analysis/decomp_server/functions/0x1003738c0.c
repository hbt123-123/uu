// rea decompile_all
// name: FUN_1003738c0
// address: 0x1003738c0
// body: available
// range: 0x1003738c0-0x100373ecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003738c0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  ulong param_6,long param_7,uint param_8,ulong param_9,byte param_10)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  uint local_b4;
  long local_b0;
  ulong local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar9 = &DAT_100a888b8;
  puVar14 = &DAT_10081cb00;
  local_b4 = param_8;
  local_b0 = param_7;
  local_a8 = param_9;
  local_a0 = param_1;
  FUN_100004bb4();
  lVar18 = *(long *)(*(long *)(puVar9 + -8) + 0x40);
  __s10Foundation3URLV6schemeSSSgvg();
  if (puVar14 == (undefined *)0x0) {
LAB_100373cd0:
    lVar18 = 0;
    __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x000100373d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar18 + -8) + 0x10))(local_a0);
    return;
  }
  puVar15 = puVar14;
  local_c8 = puVar9;
  local_c0 = (long)&local_d0 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV4hostSSSgvg();
  if (puVar15 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar14);
    goto LAB_100373cd0;
  }
  local_70 = 0;
  local_68 = 0xe000000000000000;
  local_d0 = puVar9;
  __ss11_StringGutsV4growyySiF(0x10);
  _swift_bridgeObjectRelease(local_68);
  local_70 = 0x67616d693d706f66;
  local_68 = 0xee002f7765695665;
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_80 = (undefined *)param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  if (((param_4 & 1) == 0) && (0 < param_3)) {
    local_80 = (undefined *)0x2f772f;
    puStack_78 = (undefined *)0xe300000000000000;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_90 = param_3;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    puVar9 = puStack_78;
    __sSS6appendyySSF(local_80,puStack_78);
    _swift_bridgeObjectRelease(puVar9);
  }
  if (((param_6 & 1) == 0) && (0 < param_5)) {
    local_80 = (undefined *)0x2f682f;
    puStack_78 = (undefined *)0xe300000000000000;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_90 = param_5;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    puVar9 = puStack_78;
    __sSS6appendyySSF(local_80,puStack_78);
    _swift_bridgeObjectRelease(puVar9);
  }
  lVar18 = local_c0;
  uVar17 = (uint)param_10;
  if (param_10 < 5) {
    uVar1 = 0xe400000000000000;
    if (1 < uVar17 - 3) {
      uVar1 = 0xe300000000000000;
    }
    uVar19 = 0xe400000000000000;
    if (1 < uVar17) {
      uVar19 = uVar1;
    }
LAB_100373ad0:
    _swift_bridgeObjectRelease(uVar19);
    if ((uVar19 & 0x700000000000000) != 0) {
      local_80 = (undefined *)0x2f662f;
      puStack_78 = (undefined *)0xe300000000000000;
      uVar6 = 0x706d62;
      if (param_10 != 5) {
        uVar6 = 0x666967;
      }
      uVar11 = 0xe300000000000000;
      uVar4 = 0x66666974;
      if (param_10 != 3) {
        uVar4 = 0x63696568;
      }
      if (param_10 < 5) {
        uVar11 = 0xe400000000000000;
        uVar6 = uVar4;
      }
      uVar4 = 0x70626577;
      if (param_10 != 1) {
        uVar4 = 0x676e70;
      }
      uVar2 = 0xe400000000000000;
      if (param_10 != 1) {
        uVar2 = 0xe300000000000000;
      }
      uVar5 = 0x6765706a;
      if (param_10 != 0) {
        uVar5 = uVar4;
      }
      uVar3 = 0xe400000000000000;
      if (param_10 != 0) {
        uVar3 = uVar2;
      }
      if (param_10 < 3) {
        uVar11 = uVar3;
        uVar6 = uVar5;
      }
      __sSS6appendyySSF(uVar6,uVar11);
      _swift_bridgeObjectRelease(uVar11);
      puVar9 = puStack_78;
      __sSS6appendyySSF(local_80,puStack_78);
      _swift_bridgeObjectRelease(puVar9);
    }
  }
  else {
    if (uVar17 == 5) {
      uVar19 = 0xe300000000000000;
      goto LAB_100373ad0;
    }
    if (uVar17 == 6) {
      uVar19 = 0xe300000000000000;
      goto LAB_100373ad0;
    }
  }
  if (((local_b4 & 1) == 0) && (0xffffffffffffff9b < local_b0 - 0x65U)) {
    local_80 = (undefined *)0x2f712f;
    puStack_78 = (undefined *)0xe300000000000000;
    local_90 = local_b0;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    puVar9 = puStack_78;
    __sSS6appendyySSF(local_80,puStack_78);
    _swift_bridgeObjectRelease(puVar9);
  }
  local_80 = local_c8;
  puStack_78 = puVar14;
  _swift_bridgeObjectRetain(puVar14);
  __sSS6appendyySSF(0x2f2f3a,0xe300000000000000);
  puVar10 = puVar15;
  __sSS6appendyySSF(local_d0);
  __s10Foundation3URLV4pathSSvg();
  puVar16 = puVar10;
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease();
  puVar7 = puStack_78;
  puVar9 = local_80;
  __s10Foundation3URLV5querySSSgvg();
  if (puVar16 != (undefined *)0x0) {
    uVar19 = (ulong)puVar10 & 0xffffffffffff;
    if (((ulong)puVar16 & 0x2000000000000000) != 0) {
      uVar19 = (ulong)puVar16 >> 0x38 & 0xf;
    }
    if (uVar19 != 0) {
      local_80 = puVar9;
      puStack_78 = puVar7;
      _swift_bridgeObjectRetain(puVar7);
      __sSS6appendyySSF(0x3f,0xe100000000000000);
      __sSS6appendyySSF(puVar10,puVar16);
      _swift_bridgeObjectRelease(puVar16);
      uVar11 = 0x26;
      goto LAB_100373d48;
    }
    _swift_bridgeObjectRelease(puVar16);
  }
  local_80 = puVar9;
  puStack_78 = puVar7;
  _swift_bridgeObjectRetain(puVar7);
  uVar11 = 0x3f;
LAB_100373d48:
  __sSS6appendyySSF(uVar11,0xe100000000000000);
  uVar11 = local_68;
  __sSS6appendyySSF(local_70,local_68);
  if ((local_a8 >> 0x20 & 1) == 0) {
    fVar21 = (float)(int)((float)local_a8 * 100.0);
    if (100.0 <= fVar21) {
      fVar21 = 100.0;
    }
    else if (0x7f7fffff < (uint)ABS(fVar21)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100373ec4);
      (*pcVar8)();
    }
    if (fVar21 <= -9.223373e+18) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100373ec8);
      (*pcVar8)();
    }
    if (9.223372e+18 <= fVar21) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100373ecc);
      (*pcVar8)();
    }
    local_98 = (long)fVar21;
    local_90 = 0x702f632f;
    uStack_88 = 0xe400000000000000;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    uVar2 = uStack_88;
    __sSS6appendyySSF(local_90,uStack_88);
    _swift_bridgeObjectRelease(uVar2);
  }
  puVar9 = puStack_78;
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar18,local_80,puStack_78);
  lVar12 = 0;
  __s10Foundation3URLVMa();
  lVar20 = *(long *)(lVar12 + -8);
  lVar13 = lVar18;
  (**(code **)(lVar20 + 0x30))(lVar18,1,lVar12);
  if ((int)lVar13 != 1) {
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(puVar7);
    _swift_bridgeObjectRelease(puVar15);
    _swift_bridgeObjectRelease(puVar14);
    _swift_bridgeObjectRelease(uVar11);
    (**(code **)(lVar20 + 0x20))(local_a0,lVar18,lVar12);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100373ed0);
  (*pcVar8)();
}

