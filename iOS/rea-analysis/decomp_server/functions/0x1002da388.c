// rea decompile_all
// name: FUN_1002da388
// address: 0x1002da388
// body: available
// range: 0x1002da388-0x1002da8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002da388(undefined8 *param_1,ID *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ID self;
  undefined *puVar14;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  
  self = *param_2;
  lVar2 = 0;
  FUN_1002d9bd8(0,param_4,param_5,param_6);
  puVar7 = (undefined8 *)(param_3 + *(int *)(lVar2 + 0x30));
  puVar5 = (undefined *)*puVar7;
  uVar8 = puVar7[1];
  IVar3 = _objc_msgSend(self,"allHeaderFields");
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar3,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
             PTR___ss11AnyHashableVSHsWP_100995ad8);
  IVar4 = IVar3;
  FUN_1002bf120();
  _swift_bridgeObjectRelease(IVar3);
  puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (IVar4 != 0) {
    local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
    _swift_bridgeObjectRetain(IVar4);
    FUN_1002bb634();
    _swift_bridgeObjectRelease_n(IVar4,2);
    puVar13 = local_70;
  }
  puVar9 = &DAT_100a833d8;
  FUN_100004bb4(&DAT_100a833d8,&DAT_1008178b0);
  _swift_initStaticObject();
  FUN_1002dc268(puVar5,uVar8,puVar13,puVar9,100000);
  _swift_bridgeObjectRelease(puVar13);
  puVar13 = PTR___sSSN_1009957f8;
  _swift_arrayDestroy(puVar9 + 0x20,3,PTR___sSSN_1009957f8);
  local_70 = (undefined *)0x0;
  local_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x28);
  _swift_bridgeObjectRelease(local_68);
  local_70 = (undefined *)0xd00000000000001f;
  local_68 = 0x80000001008aa040;
  local_80 = (undefined *)_objc_msgSend(self,"statusCode");
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x202020200a,0xe500000000000000);
  IVar3 = _objc_msgSend(self,"allHeaderFields");
  puVar9 = PTR___ss11AnyHashableVN_100995ad0;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar3,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
             PTR___ss11AnyHashableVSHsWP_100995ad8);
  IVar4 = IVar3;
  FUN_1002bf120();
  _swift_bridgeObjectRelease(IVar3);
  puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (IVar4 != 0) {
    local_80 = PTR___swiftEmptyArrayStorage_100995ea0;
    _swift_bridgeObjectRetain(IVar4);
    FUN_1002bb634();
    puVar9 = (undefined *)0x2;
    _swift_bridgeObjectRelease_n(IVar4);
    puVar14 = local_80;
  }
  if (*(long *)(puVar14 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar14);
    puVar14 = (undefined *)0xef656e6f4e203a5d;
    puVar9 = (undefined *)0x737265646165485b;
  }
  else {
    local_80 = puVar14;
    _swift_bridgeObjectRetain(puVar14);
    FUN_1002bbe8c(&local_80);
    puVar1 = local_80;
    puVar6 = local_80;
    FUN_1002bcd08();
    _swift_bridgeObjectRelease(puVar1);
    uVar10 = 0xe100000000000000;
    __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,4);
    local_90 = 10;
    uStack_88 = 0xe100000000000000;
    local_a0 = 10;
    uStack_98 = 0xe100000000000000;
    local_80 = puVar6;
    local_78 = puVar9;
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease();
    uVar12 = uStack_98;
    FUN_1002c6438();
    puVar7 = &local_90;
    puVar11 = &local_a0;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar7,puVar11,0,0,0,1,puVar13,puVar13,puVar13,uVar10,uVar10,uVar10);
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(uVar12);
    local_80 = (undefined *)0x0;
    local_78 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x11);
    _swift_bridgeObjectRelease(local_78);
    local_80 = (undefined *)0x737265646165485b;
    local_78 = (undefined *)0xef202020200a3a5d;
    __sSS6appendyySSF(puVar7,puVar11);
    _swift_bridgeObjectRelease(puVar14);
    _swift_bridgeObjectRelease(puVar11);
    puVar9 = local_80;
    puVar14 = local_78;
  }
  uVar10 = 0xe100000000000000;
  __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,4);
  local_90 = 10;
  uStack_88 = 0xe100000000000000;
  local_a0 = 10;
  uStack_98 = 0xe100000000000000;
  local_80 = puVar9;
  local_78 = puVar14;
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease();
  uVar12 = uStack_98;
  FUN_1002c6438();
  puVar7 = &local_90;
  puVar11 = &local_a0;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar7,puVar11,0,0,0,1,puVar13,puVar13,puVar13,uVar10,uVar10,uVar10);
  _swift_bridgeObjectRelease(puVar14);
  _swift_bridgeObjectRelease(uVar12);
  __sSS6appendyySSF(puVar7,puVar11);
  _swift_bridgeObjectRelease(puVar11);
  __sSS6appendyySSF(0x202020200a,0xe500000000000000);
  uVar12 = 0xe100000000000000;
  __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,4);
  local_90 = 10;
  uStack_88 = 0xe100000000000000;
  local_a0 = 10;
  uStack_98 = 0xe100000000000000;
  local_80 = puVar5;
  local_78 = (undefined *)uVar8;
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar12);
  uVar12 = uStack_98;
  puVar7 = &local_90;
  puVar11 = &local_a0;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar7,puVar11,0,0,0,1,puVar13,puVar13,puVar13,uVar10,uVar10,uVar10);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar12);
  __sSS6appendyySSF(puVar7,puVar11);
  _swift_bridgeObjectRelease(puVar11);
  *param_1 = local_70;
  param_1[1] = local_68;
  return;
}

