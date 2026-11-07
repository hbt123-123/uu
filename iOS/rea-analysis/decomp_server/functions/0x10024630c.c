// rea decompile_all
// name: FUN_10024630c
// address: 0x10024630c
// body: available
// range: 0x10024630c-0x10024675f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100246538) */

void FUN_10024630c(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,
                  undefined8 param_5,ID param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  ID IVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  ID self;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_f0 [8];
  uint local_e8;
  uint local_e4;
  undefined8 local_e0;
  undefined1 *local_d8;
  long local_d0;
  ID local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  long lStack_a0;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  local_e8 = param_4;
  local_c8 = param_6;
  local_c0 = param_7;
  local_b8 = param_5;
  local_b0 = param_8;
  __s10Foundation10URLRequestVMa();
  local_a8 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  lVar2 = 0;
  local_d8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar13 - extraout_x12_00;
  uVar9 = 0x80000001008a7320;
  puVar1 = (undefined1 *)0x0;
  if ((param_3 & 1) == 0) {
    uVar9 = 0xe000000000000000;
  }
  else {
    puVar1 = &DAT_d000000000000013;
  }
  local_e4 = param_3;
  local_e0 = param_1;
  FUN_100238790(lVar10,param_1,param_2,param_3 & 1);
  puVar3 = puVar1;
  __sSS5countSivg(puVar1,uVar9);
  _swift_bridgeObjectRelease(uVar9);
  if (0 < (long)puVar3) {
    __s10Foundation3URLV22appendingPathComponentyACSSF(lVar13,puVar1,uVar9);
    _swift_bridgeObjectRelease(uVar9);
    (**(code **)(lVar11 + 8))(lVar10,lVar2);
    (**(code **)(lVar11 + 0x20))(lVar10,lVar13,lVar2);
  }
  local_d0 = lVar10;
  (**(code **)(lVar11 + 0x10))(lVar12,lVar10,lVar2);
  puVar1 = local_d8;
  __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
            (local_d8,0x404e000000000000,lVar12,0);
  __s10Foundation10URLRequestV10httpMethodSSSgvs(0x54534f50,0xe400000000000000);
  uVar9 = local_e0;
  FUN_100238aa4(local_e0,param_2,param_3 & 1);
  __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs();
  IVar7 = local_c8;
  if ((local_e4 & 1) == 0) {
    FUN_100008184(uVar9,param_2);
    if ((local_e8 & 1) == 0) {
      __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(uVar9,param_2);
      IVar7 = local_c8;
    }
    else {
      puVar4 = (undefined *)0xffffffff;
      uVar8 = 0x1f;
      FUN_10021ed78(0xffffffff,0x1f,uVar9,param_2);
      FUN_100008184();
      puVar5 = puVar4;
      __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(puVar4,uVar8);
      __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_100234524();
      }
      puVar6 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      local_90 = puVar5;
      FUN_10024595c(0x70697a67,0xe400000000000000,0xd000000000000012,0x80000001008a7940,puVar6);
      __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(local_90);
      FUN_100006cdc(puVar4,uVar8);
      FUN_10023bb00(uVar9,param_2,0);
      IVar7 = local_c8;
    }
  }
  self = IVar7;
  local_c8 = IVar7;
  if ((IVar7 == 0) && (self = DAT_100b36300, DAT_100a7ddf0 != -1)) {
    _swift_once(&DAT_100a7ddf0,FUN_1002239c4);
    self = DAT_100b36300;
  }
  __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF(IVar7);
  puVar5 = &DAT_1009a7d30;
  _swift_allocObject(&DAT_1009a7d30,0x28,7);
  uVar9 = local_b0;
  *(undefined8 *)(puVar5 + 0x10) = local_b8;
  *(undefined8 *)(puVar5 + 0x18) = local_c0;
  *(undefined8 *)(puVar5 + 0x20) = local_b0;
  local_70 = thunk_FUN_10023baa4;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000bef80;
  puStack_78 = &DAT_1009a7d48;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  puVar5 = local_68;
  _swift_retain(uVar9);
  _swift_release(puVar5);
  IVar7 = _objc_msgSend(self,"dataTaskWithRequest:completionHandler:",IVar7,aBlock);
  __Block_release(aBlock);
  _objc_msgSend(IVar7,"resume");
  (**(code **)(local_a8 + 8))(puVar1,lStack_a0);
  (**(code **)(lVar11 + 8))(local_d0,lVar2);
  return;
}

