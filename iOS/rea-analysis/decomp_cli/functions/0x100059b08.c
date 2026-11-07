// rea decompile_all
// name: FUN_100059b08
// address: 0x100059b08
// body: available
// range: 0x100059b08-0x10005a35b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100059b08(undefined8 *param_1,ulong *param_2,ulong *param_3,undefined *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 local_130;
  ulong local_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined *local_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  
  puVar12 = PTR___swiftEmptyArrayStorage_1000f0740;
  uStack_98 = param_2[0x11];
  local_a0 = param_2[0x10];
  uStack_88 = param_2[0x13];
  uStack_90 = param_2[0x12];
  local_80 = param_2[0x14];
  uStack_d8 = param_2[9];
  local_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_b8 = param_2[0xd];
  local_c0 = param_2[0xc];
  uStack_a8 = param_2[0xf];
  uStack_b0 = param_2[0xe];
  uStack_118 = param_2[1];
  local_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uStack_f8 = param_2[5];
  puVar18 = (undefined *)param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  if ((local_120 & 0x100) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    puVar1 = PTR___swiftEmptyArrayStorage_1000f0740;
    if (puVar18 != (undefined *)0x0) {
      puVar1 = puVar18;
    }
    lVar16 = *(long *)(puVar1 + 0x10);
    local_100 = puVar18;
    if (lVar16 == 1) {
      uVar9 = 0xe000000000000000;
      puVar12 = &DAT_100103f60;
      FUN_10000eb08(&DAT_100103f60,&DAT_1000d39f0);
      _swift_initStaticObject();
      uVar6 = local_120 & 0xff;
      _swift_bridgeObjectRetain(puVar18);
      FUN_10005ab34(uVar6,puVar12);
      if (((uVar6 & 1) == 0) || ((uStack_108 & 0x100) == 0)) {
        uVar10 = 0;
      }
      else {
        bVar5 = (uStack_108 & 0xfd0000) != 0;
        uVar10 = 0x2a;
        if (bVar5) {
          uVar10 = 0;
        }
        uVar9 = 0xe100000000000000;
        if (bVar5) {
          uVar9 = 0xe000000000000000;
        }
      }
      __sSS6appendyySSF(uVar10,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      if (*(long *)(puVar1 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10005a35c);
        (*pcVar4)();
      }
      cVar3 = puVar1[0x20];
      uVar9 = *(undefined8 *)(puVar1 + 0x28);
      uVar10 = *(undefined8 *)(puVar1 + 0x30);
      _swift_bridgeObjectRetain(uVar10);
      _swift_bridgeObjectRelease(puVar1);
      if (cVar3 == '\0') {
        uVar13 = 0x2d2d;
        uVar14 = 0xe200000000000000;
      }
      else {
        uVar13 = 0x2d;
        uVar14 = 0xe100000000000000;
      }
      __sSS6appendyySSF(uVar9,uVar10);
      _swift_bridgeObjectRelease(uVar10);
      uVar9 = 0x5c;
      uVar15 = 0xe100000000000000;
      FUN_100053b50(0x5c,0xe100000000000000,0x5c5c,0xe200000000000000,uVar13,uVar14);
      uVar10 = 0x3a;
      uVar13 = 0xe100000000000000;
      FUN_100053b50(0x3a,0xe100000000000000,0x3a5c,0xe200000000000000,uVar9,uVar15);
      _swift_bridgeObjectRelease(uVar15);
      uVar9 = 0x5b;
      uVar15 = 0xe100000000000000;
      FUN_100053b50(0x5b,0xe100000000000000,0x5b5c,0xe200000000000000,uVar10,uVar13);
      _swift_bridgeObjectRelease(uVar13);
      puVar8 = (ulong *)0x5d;
      puVar12 = (undefined *)0xe100000000000000;
      param_5 = (undefined8 *)0xe200000000000000;
      FUN_100053b50(0x5d,0xe100000000000000,0x5d5c,0xe200000000000000,uVar9,uVar15);
      _swift_bridgeObjectRelease(uVar15);
      uVar9 = 1;
      param_4 = puVar12;
      FUN_100052ee8(1,puVar8);
      _swift_bridgeObjectRelease(uVar14);
      _swift_bridgeObjectRelease(puVar12);
      puVar11 = puVar8;
      __sSS6appendyySSF(uVar9,puVar8);
      _swift_bridgeObjectRelease(puVar8);
      FUN_10005a35c();
      puVar8 = puVar11;
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar11);
      uVar6 = 0;
      uVar17 = 0xe000000000000000;
    }
    else if (lVar16 == 0) {
      puVar8 = param_3;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(puVar1);
      uVar6 = *param_3;
      uVar17 = param_3[1];
      uVar2 = uVar6 & 0xffffffffffff;
      if ((uVar17 & 0x2000000000000000) != 0) {
        uVar2 = uVar17 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        return;
      }
      if ((uStack_108 & 0x100) != 0) {
        *param_3 = 0x2a;
        param_3[1] = 0xe100000000000000;
        _swift_bridgeObjectRelease(uVar17);
        uVar6 = *param_3;
        uVar17 = param_3[1];
      }
      _swift_bridgeObjectRetain(uVar17);
    }
    else {
      _swift_bridgeObjectRetain();
      FUN_1000798d0(0,lVar16,0);
      puVar7 = (undefined8 *)(puVar1 + 0x30);
      do {
        uVar9 = puVar7[-1];
        uVar10 = *puVar7;
        if (*(char *)(puVar7 + -2) == '\0') {
          local_130 = 0x2d2d;
          uVar13 = 0xe200000000000000;
        }
        else {
          local_130 = 0x2d;
          uVar13 = 0xe100000000000000;
        }
        _swift_bridgeObjectRetain(uVar10);
        __sSS6appendyySSF(uVar9,uVar10);
        uVar9 = 0x5c;
        uVar14 = 0xe100000000000000;
        FUN_100053b50(0x5c,0xe100000000000000,0x5c5c,0xe200000000000000,local_130,uVar13);
        _swift_bridgeObjectRelease(uVar13);
        uVar13 = 0x3a;
        uVar15 = 0xe100000000000000;
        FUN_100053b50(0x3a,0xe100000000000000,0x3a5c,0xe200000000000000,uVar9,uVar14);
        _swift_bridgeObjectRelease(uVar14);
        uVar9 = 0x5b;
        uVar14 = 0xe100000000000000;
        FUN_100053b50(0x5b,0xe100000000000000,0x5b5c,0xe200000000000000,uVar13,uVar15);
        _swift_bridgeObjectRelease(uVar15);
        uVar13 = 0x5d;
        uVar15 = 0xe100000000000000;
        FUN_100053b50(0x5d,0xe100000000000000,0x5d5c,0xe200000000000000,uVar9,uVar14);
        _swift_bridgeObjectRelease(uVar14);
        uVar9 = 1;
        FUN_100052ee8(1,uVar13,uVar15);
        _swift_bridgeObjectRelease(uVar10);
        _swift_bridgeObjectRelease(uVar15);
        uVar6 = *(ulong *)(puVar12 + 0x10);
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar6) {
          FUN_1000798d0(1 < *(ulong *)(puVar12 + 0x18),uVar6 + 1,1);
        }
        *(ulong *)(puVar12 + 0x10) = uVar6 + 1;
        *(undefined8 *)(puVar12 + uVar6 * 0x10 + 0x20) = uVar9;
        *(undefined8 *)(puVar12 + uVar6 * 0x10 + 0x28) = uVar13;
        puVar7 = puVar7 + 3;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      _swift_bridgeObjectRelease(puVar1);
      puVar18 = &DAT_100103f60;
      FUN_10000eb08(&DAT_100103f60,&DAT_1000d39f0);
      _swift_initStaticObject();
      uVar6 = local_120 & 0xff;
      FUN_10005ab34(uVar6,puVar18);
      if ((((uVar6 & 1) == 0) || ((uStack_108 & 0x100) == 0)) || ((uStack_108 & 0xfd0000) != 0)) {
        puVar18 = &DAT_100103ed8;
        FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
        puVar7 = &DAT_100103ee0;
        FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
        uVar9 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar18,puVar7);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar9);
        __sSS6appendyySSF(0x29,0xe100000000000000);
        uVar9 = 0x28;
      }
      else {
        uVar9 = 0x2a;
      }
      __sSS6appendyySSF(uVar9,0xe100000000000000);
      _swift_bridgeObjectRelease(0xe100000000000000);
      __sSS6appendyySSF(0x7b27,0xe200000000000000);
      param_4 = &DAT_100103ed8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      param_5 = &DAT_100103ee0;
      FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
      uVar9 = 0x2c;
      uVar10 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000);
      _swift_release(puVar12);
      __sSS6appendyySSF(uVar9,uVar10);
      _swift_bridgeObjectRelease(uVar10);
      puVar11 = (ulong *)0xe200000000000000;
      __sSS6appendyySSF(0x277d,0xe200000000000000);
      FUN_10005a35c();
      puVar8 = puVar11;
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar11);
      uVar6 = 0;
      uVar17 = 0xe000000000000000;
    }
    if ((byte)local_120 < 2) {
      puVar11 = &local_120;
      FUN_10005a4a4(puVar11);
      __sSS6appendyySSF(uVar6,uVar17);
      _swift_bridgeObjectRelease(uVar17);
      __sSS6appendyySSF(0x3a,0xe100000000000000);
      if (uStack_d8 == 0) {
        uVar10 = 0;
        uVar9 = 0xe000000000000000;
      }
      else {
        uVar9 = 0x5c;
        uVar13 = 0xe100000000000000;
        FUN_100053b50(0x5c,0xe100000000000000,0x5c5c,0xe200000000000000,local_e0);
        uVar10 = 0x3a;
        uVar14 = 0xe100000000000000;
        FUN_100053b50(0x3a,0xe100000000000000,0x3a5c,0xe200000000000000,uVar9,uVar13);
        _swift_bridgeObjectRelease(uVar13);
        uVar13 = 0x5b;
        uVar15 = 0xe100000000000000;
        FUN_100053b50(0x5b,0xe100000000000000,0x5b5c,0xe200000000000000,uVar10,uVar14);
        _swift_bridgeObjectRelease(uVar14);
        uVar9 = 0x5d;
        uVar14 = 0xe100000000000000;
        FUN_100053b50(0x5d,0xe100000000000000,0x5d5c,0xe200000000000000,uVar13,uVar15);
        _swift_bridgeObjectRelease(uVar15);
        uVar10 = 1;
        FUN_100052ee8(1,uVar9,uVar14);
        _swift_bridgeObjectRelease(uVar14);
      }
      __sSS6appendyySSF(uVar10,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      __sSS6appendyySSF(0x3a,0xe100000000000000);
      __sSS6appendyySSF(puVar11,puVar8);
      _swift_bridgeObjectRelease(puVar8);
      __sSS6appendyySSF(0x27,0xe100000000000000);
      *param_1 = 0x27;
      param_1[1] = 0xe100000000000000;
      param_1[2] = param_4;
      param_1[3] = param_5;
    }
    else {
      __sSS6appendyySSF(uVar6,uVar17);
      _swift_bridgeObjectRelease(uVar17);
      __sSS6appendyySSF(0x27,0xe100000000000000);
      *param_1 = 0x27;
      param_1[1] = 0xe100000000000000;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  return;
}

