// rea decompile_all
// name: FUN_100093fa8
// address: 0x100093fa8
// body: available
// range: 0x100093fa8-0x100094403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100093fa8(long param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  char *pcVar13;
  long unaff_x21;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x4c4548535f504153;
  lVar10 = -0x16ffffffffffffb4;
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg();
  pcVar4 = _getenv((char *)(lVar3 + 0x20));
  _swift_release(lVar3);
  if (pcVar4 != (char *)0x0) {
    __sSS7cStringSSSPys4Int8VG_tcfC();
    pcVar13 = (char *)0x68737a;
    if (pcVar4 != (char *)0x68737a || lVar10 != -0x1d00000000000000) {
      uVar5 = 0;
      param_4 = lVar10;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x68737a,0xe300000000000000,pcVar4,lVar10,0);
      pcVar13 = pcVar4;
      if (((uVar5 & 1) == 0) &&
         ((pcVar4 != (char *)0x68736162 ||
          (pcVar13 = (char *)0x68736162, lVar10 != -0x1c00000000000000)))) {
        uVar5 = 0;
        param_4 = lVar10;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x68736162,0xe400000000000000,pcVar4,lVar10,0);
        pcVar13 = pcVar4;
        if (((uVar5 & 1) == 0) && (pcVar4 != (char *)0x68736966 || lVar10 != -0x1c00000000000000)) {
          uVar5 = 0;
          param_4 = lVar10;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x68736966,0xe400000000000000,pcVar4,lVar10,0);
          if ((uVar5 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar10);
            lVar10 = 0;
            pcVar13 = (char *)0x0;
          }
        }
      }
    }
    if (DAT_1001039d8 != -1) {
      _swift_once(&DAT_1001039d8,FUN_100053418);
    }
    lVar3 = DAT_100106ee0;
    _os_unfair_lock_lock(DAT_100106ee0 + 0x20);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
    *(char **)(lVar3 + 0x10) = pcVar13;
    *(long *)(lVar3 + 0x18) = lVar10;
    _swift_bridgeObjectRetain(lVar10);
    if (unaff_x21 != 0) {
      _os_unfair_lock_unlock(lVar3 + 0x20);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100094404);
      (*pcVar2)();
    }
    _os_unfair_lock_unlock(lVar3 + 0x20);
    _swift_bridgeObjectRelease(lVar10);
  }
  if (DAT_1001039e0 != -1) {
    _swift_once(&DAT_1001039e0,FUN_100053474);
  }
  lVar3 = DAT_100106ee8;
  _os_unfair_lock_lock(DAT_100106ee8 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
  uVar11 = 0x80000001000c8f00;
  lVar10 = -0x2fffffffffffffef;
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg();
  pcVar4 = _getenv((char *)(lVar10 + 0x20));
  _swift_release(lVar10);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = (char *)0x0;
    uVar11 = 0;
  }
  else {
    __sSS7cStringSSSPys4Int8VG_tcfC();
  }
  *(char **)(lVar3 + 0x10) = pcVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar11;
  puVar6 = (undefined8 *)(lVar3 + 0x20);
  _os_unfair_lock_unlock();
  pcVar2 = *(code **)(param_1 + 0x90);
  uVar11 = *(undefined8 *)(param_1 + 0x98);
  cVar1 = *(char *)(param_1 + 0xa0);
  if (cVar1 == '\x05') {
    (*pcVar2)();
    puVar6 = param_2;
LAB_100094224:
    if (DAT_1001039d8 != -1) {
      _swift_once(&DAT_1001039d8,FUN_100053418);
    }
    lVar3 = DAT_100106ee0;
    _os_unfair_lock_lock(DAT_100106ee0 + 0x20);
    uVar11 = *(undefined8 *)(lVar3 + 0x10);
    puVar8 = *(undefined8 **)(lVar3 + 0x18);
    _swift_bridgeObjectRetain(puVar8);
    _os_unfair_lock_unlock(lVar3 + 0x20);
    if (puVar8 == (undefined8 *)0x0) {
      puVar7 = &DAT_100103ed8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar8 = &DAT_100103ee0;
      FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
      puVar9 = (undefined8 *)0xa;
      uVar11 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar7,puVar8);
      local_a0 = puVar6;
    }
    else {
      puVar9 = puVar6;
      FUN_100053538(puVar6,uVar11,puVar8);
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = puVar8;
    }
    _swift_bridgeObjectRelease();
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,puVar6,0,0);
    *puVar6 = puVar9;
    puVar6[1] = uVar11;
    puVar6[3] = uStack_98;
    puVar6[2] = local_a0;
    puVar6[5] = uStack_88;
    puVar6[4] = uStack_90;
    puVar6[7] = uStack_78;
    puVar6[6] = local_80;
    puVar6[9] = uStack_68;
    puVar6[8] = uStack_70;
    uVar12 = 2;
  }
  else {
    if (cVar1 == '\x04') {
      puVar6 = (undefined8 *)0xa;
      __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(10,0xf,0);
      if (((ulong)puVar6 & 1) != 0) {
        FUN_1000927a8(param_2,pcVar2,uVar11);
        puVar6 = param_2;
        if (unaff_x21 != 0) {
          return;
        }
        goto LAB_100094224;
      }
    }
    else if (cVar1 == '\x03') {
      FUN_100091f60();
      if (unaff_x21 != 0) {
        return;
      }
      puVar6 = param_2;
      (*pcVar2)();
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100094224;
    }
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,puVar6,0,0);
    *puVar6 = 3;
    puVar6[2] = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[6] = 0;
    puVar6[5] = 0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[9] = 0;
    uVar12 = 0x11;
  }
  *(undefined1 *)(puVar6 + 10) = uVar12;
  _swift_willThrow();
  return;
}

