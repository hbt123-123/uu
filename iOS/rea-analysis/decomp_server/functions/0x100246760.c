// rea decompile_all
// name: FUN_100246760
// address: 0x100246760
// body: available
// range: 0x100246760-0x100246d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100246b44) */

void FUN_100246760(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,ID param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  ID IVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  ID self;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined1 auStack_100 [4];
  uint local_fc;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ID local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  long local_b8;
  long lStack_b0;
  ulong local_a8;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar3 = 0;
  local_fc = param_4;
  local_f0 = param_1;
  uStack_e8 = param_3;
  local_e0 = param_6;
  local_d8 = param_7;
  local_d0 = param_5;
  local_c8 = param_8;
  local_a8 = param_2;
  __s10Foundation10URLRequestVMa();
  local_b8 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  puVar4 = &DAT_100a7e718;
  FUN_100004bb4(&DAT_100a7e718,&DAT_100813648);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_f8 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = (lVar14 - extraout_x12) - extraout_x12_00;
  if (DAT_100a7de28 != -1) {
    _swift_once(&DAT_100a7de28,FUN_100247e2c);
  }
  uVar13 = DAT_100b36398;
  uVar6 = DAT_100b36390;
  local_c0 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_bridgeObjectRetain(DAT_100b36398);
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar11,uVar6,uVar13);
  _swift_bridgeObjectRelease(uVar13);
  lVar5 = lVar11;
  (**(code **)(lVar16 + 0x30))(lVar11,1,lVar3);
  if ((int)lVar5 != 1) {
    pcVar15 = *(code **)(lVar16 + 0x20);
    (*pcVar15)(lVar12,lVar11,lVar3);
    uVar10 = local_a8;
    uVar13 = 0x80000001008a7920;
    uVar6 = uVar13;
    lVar11 = -0x2fffffffffffffec;
    if (local_a8 != 1) {
      uVar6 = 0xe900000000000064;
      lVar11 = 0x6964742f6b64732f;
    }
    uVar1 = 0xec00000064695f73;
    lVar5 = 0x65746e2f6b64732f;
    if (local_a8 != 0) {
      uVar1 = uVar6;
      lVar5 = lVar11;
    }
    __sSS5countSivg(lVar5,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    lVar11 = local_f8;
    if (0 < lVar5) {
      uVar6 = 0xd000000000000014;
      if (uVar10 != 1) {
        uVar13 = 0xe900000000000064;
        uVar6 = 0x6964742f6b64732f;
      }
      uVar1 = 0x65746e2f6b64732f;
      if (uVar10 != 0) {
        uVar1 = uVar6;
      }
      uVar6 = 0xec00000064695f73;
      if (uVar10 != 0) {
        uVar6 = uVar13;
      }
      __s10Foundation3URLV22appendingPathComponentyACSSF(local_f8,uVar1,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      (**(code **)(lVar16 + 8))(lVar12,lVar3);
      (*pcVar15)(lVar12,lVar11,lVar3);
    }
    local_f8 = lVar16;
    (**(code **)(lVar16 + 0x10))(lVar14,lVar12,lVar3);
    puVar2 = local_c0;
    __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
              (local_c0,0x404e000000000000,lVar14,0);
    __s10Foundation10URLRequestV10httpMethodSSSgvs(0x54534f50,0xe400000000000000);
    puVar4 = &DAT_100a7e440;
    FUN_100004bb4(&DAT_100a7e440,&DAT_1008134a8);
    _swift_initStaticObject();
    puVar7 = puVar4;
    FUN_100234524();
    FUN_100040bb4(puVar4 + 0x20,&DAT_100a7e448,&DAT_100813ee0);
    lVar11 = DAT_100b363a8;
    uVar6 = DAT_100b363a0;
    if (DAT_100b363a8 != 0) {
      _swift_bridgeObjectRetain(DAT_100b363a8);
      puVar4 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native(puVar7);
      local_98 = puVar7;
      FUN_10024595c(uVar6,lVar11,0x542d687475412d58,0xec0000006e656b6f,puVar4);
      puVar7 = local_98;
    }
    uVar10 = local_a8;
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(puVar7);
    uVar6 = local_f0;
    FUN_10023c104(local_f0,uVar10,uStack_e8);
    IVar9 = local_e0;
    if (uVar10 >> 0x3c < 0xf) {
      if ((local_fc & 1) == 0) {
        __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs();
        IVar9 = local_e0;
      }
      else {
        puVar7 = (undefined *)0xffffffff;
        uVar13 = 0x1f;
        FUN_10021ed78(0xffffffff,0x1f);
        FUN_100008184();
        puVar4 = puVar7;
        __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(puVar7,uVar13);
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
          FUN_100234524();
        }
        puVar8 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        local_98 = puVar4;
        FUN_10024595c(0x70697a67,0xe400000000000000,0xd000000000000012,0x80000001008a7940,puVar8);
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(local_98);
        FUN_100006cdc(puVar7,uVar13);
        FUN_100006cc8(uVar6,uVar10);
        IVar9 = local_e0;
      }
    }
    self = IVar9;
    local_e0 = IVar9;
    if ((IVar9 == 0) && (self = DAT_100b36300, DAT_100a7ddf0 != -1)) {
      _swift_once(&DAT_100a7ddf0,FUN_1002239c4);
      self = DAT_100b36300;
    }
    __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF(IVar9);
    puVar4 = &DAT_1009a7cb8;
    _swift_allocObject(&DAT_1009a7cb8,0x28,7);
    uVar6 = local_c8;
    *(undefined8 *)(puVar4 + 0x10) = local_d0;
    *(undefined8 *)(puVar4 + 0x18) = local_d8;
    *(undefined8 *)(puVar4 + 0x20) = local_c8;
    local_78 = FUN_10023baa4;
    local_98 = PTR___NSConcreteStackBlock_100995490;
    local_90 = 0x42000000;
    local_88 = FUN_1000bef80;
    puStack_80 = &DAT_1009a7cd0;
    local_70 = puVar4;
    aBlock = __Block_copy(&local_98);
    puVar4 = local_70;
    _swift_retain(uVar6);
    _swift_release(puVar4);
    IVar9 = _objc_msgSend(self,"dataTaskWithRequest:completionHandler:",IVar9,aBlock);
    __Block_release(aBlock);
    _objc_msgSend(IVar9,"resume");
    (**(code **)(local_b8 + 8))(puVar2,lStack_b0);
    (**(code **)(local_f8 + 8))(lVar12,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x100246d8c);
  (*pcVar15)();
}

