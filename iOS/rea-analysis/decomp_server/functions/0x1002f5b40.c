// rea decompile_all
// name: FUN_1002f5b40
// address: 0x1002f5b40
// body: available
// range: 0x1002f5b40-0x1002f6207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f6204 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002f5b40(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  long unaff_x20;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  ID IVar17;
  long lVar18;
  ID self;
  undefined8 ****ppppuVar19;
  undefined8 **appuStack_110 [2];
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined8 *local_e8;
  undefined8 **appuStack_d8 [3];
  undefined8 local_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 ***local_98;
  undefined8 uStack_90;
  long local_80;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar15 = &DAT_100a838c8;
  FUN_100004bb4(&DAT_100a838c8,&DAT_100819010);
  puVar14 = (undefined8 *)
            ((long)appuStack_110 -
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  appuStack_110[1] = (undefined8 **)puVar15;
  __s10Foundation3URLVMa();
  lVar11 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  local_f8 = *(long *)(lVar4 + -8);
  uVar12 = *(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  ppppuVar19 = (undefined8 ****)((long)puVar14 - uVar12);
  lVar18 = (long)ppppuVar19 - uVar12;
  local_f0 = (undefined *)(lVar18 - uVar12);
  local_100 = lVar4;
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_b0,0,0);
  FUN_10007f314(unaff_x20 + lVar11,&local_98,&DAT_100a82c40,&DAT_100817200);
  local_e8 = param_2;
  if (local_80 == 0) {
    FUN_100040bb4(&local_98,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_1000b142c(&local_98,appuStack_d8);
    FUN_100040bb4(&local_98,&DAT_100a82c40,&DAT_100817200);
    lVar4 = lStack_b8;
    uVar10 = local_c0;
    FUN_10003f030(appuStack_d8,local_c0);
    (**(code **)(lVar4 + 0x78))(param_1,param_2,param_3,uVar10,lVar4);
    FUN_10003f094(appuStack_d8);
  }
  lVar4 = unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider;
  lVar5 = lVar4;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) goto LAB_1002f61cc;
  lVar16 = *(long *)(lVar4 + 8);
  lVar4 = lVar5;
  _swift_getObjectType();
  puVar6 = local_e8;
  (**(code **)(lVar16 + 0x20))(local_e8,lVar4,lVar16);
  _swift_unknownObjectRelease(lVar5);
  if (puVar6 == (undefined8 *)0x0) goto LAB_1002f61cc;
  if ((class_t *)*puVar6 != &objc::class_t::_TtC9Alamofire15DownloadRequest) {
    _swift_release(puVar6);
    goto LAB_1002f61cc;
  }
  puVar7 = puVar6;
  _swift_retain();
  FUN_1002c85ec();
  _swift_release(puVar6);
  if (puVar7 == (undefined8 *)0x0) {
    local_98 = (undefined8 ****)0x7269666f6d616c41;
    uStack_90 = 0xea00000000005f65;
    __s10Foundation3URLV17lastPathComponentSSvg();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(lVar4);
    uVar10 = uStack_90;
    pppuVar3 = local_98;
    __s10Foundation3URLV25deletingLastPathComponentACyF(lVar18);
    __s10Foundation3URLV22appendingPathComponentyACSSF(local_f0,pppuVar3,uVar10);
    _swift_bridgeObjectRelease(uVar10);
    (**(code **)(local_f8 + 8))(lVar18,local_100);
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = local_f0;
    (**(code **)((long)puVar6 + _TtC9Alamofire15DownloadRequest::destination))
              (local_f0,param_3,puVar7);
  }
  FUN_10007f314(unaff_x20 + lVar11,&local_98,&DAT_100a82c40,&DAT_100817200);
  if (local_80 == 0) {
    puVar9 = &DAT_100a82c40;
    ppppuVar8 = &local_98;
    FUN_100040bb4(ppppuVar8,&DAT_100a82c40,&DAT_100817200);
    if (((uint)puVar15 >> 1 & 1) != 0) goto LAB_1002f5e98;
LAB_1002f5f24:
    if (((ulong)puVar15 & 1) != 0) {
      __s10Foundation3URLV25deletingLastPathComponentACyF(ppppuVar19);
      IVar17 = *(ID *)(unaff_x20 + _TtC9Alamofire15SessionDelegate::fileManager);
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      local_98 = (undefined8 ****)0x0;
      IVar17 = _objc_msgSend(IVar17,
                             "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                             ppppuVar8,1,0,&local_98);
      if ((int)IVar17 == 0) {
        ppppuVar8 = (undefined8 ****)local_98;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _swift_willThrow(0);
        (**(code **)(local_f8 + 8))(ppppuVar19,local_100);
        puVar15 = local_f0;
        goto LAB_1002f610c;
      }
      (**(code **)(local_f8 + 8))(ppppuVar19,local_100);
      ppppuVar8 = ppppuVar19;
    }
    IVar17 = *(ID *)(unaff_x20 + _TtC9Alamofire15SessionDelegate::fileManager);
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puVar15 = local_f0;
    ppppuVar19 = ppppuVar8;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    local_98 = (undefined8 ****)0x0;
    IVar17 = _objc_msgSend(IVar17,"moveItemAtURL:toURL:error:",ppppuVar8,ppppuVar19,&local_98);
    lVar4 = local_f8;
    lVar11 = local_100;
    if ((int)IVar17 == 0) {
      ppppuVar8 = (undefined8 ****)local_98;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _swift_willThrow(0);
      goto LAB_1002f610c;
    }
    (**(code **)(local_f8 + 0x10))(puVar14,puVar15,local_100);
    _swift_storeEnumTagMultiPayload(puVar14,appuStack_110[1],0);
    FUN_1002a7888(local_e8,puVar14);
    _swift_release(puVar6);
    FUN_100040bb4(puVar14,&DAT_100a838c8,&DAT_100819010);
    pcVar13 = *(code **)(lVar4 + 8);
  }
  else {
    FUN_1000b142c(&local_98,appuStack_d8);
    FUN_100040bb4(&local_98,&DAT_100a82c40,&DAT_100817200);
    FUN_10003f030(appuStack_d8,local_c0);
    puVar9 = local_f0;
    (**(code **)(lStack_b8 + 0x150))(puVar6,local_f0,local_c0,lStack_b8);
    ppppuVar8 = (undefined8 ****)appuStack_d8;
    FUN_10003f094(ppppuVar8);
    if (((uint)puVar15 >> 1 & 1) == 0) goto LAB_1002f5f24;
LAB_1002f5e98:
    self = *(ID *)(unaff_x20 + _TtC9Alamofire15SessionDelegate::fileManager);
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar9);
    IVar17 = _objc_msgSend(self,"fileExistsAtPath:",ppppuVar8);
    ppppuVar8 = (undefined8 ****)0x0;
    if ((int)IVar17 == 0) goto LAB_1002f5f24;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    local_98 = (undefined8 ****)0x0;
    IVar17 = _objc_msgSend(self,"removeItemAtURL:error:",ppppuVar8,&local_98);
    ppppuVar8 = (undefined8 ****)local_98;
    if ((int)IVar17 != 0) goto LAB_1002f5f24;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    puVar15 = local_f0;
LAB_1002f610c:
    puVar7 = local_e8;
    puVar9 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar1 = *(int *)(puVar9 + 0x30);
    iVar2 = *(int *)(puVar9 + 0x40);
    *puVar14 = ppppuVar8;
    lVar4 = local_f8;
    lVar11 = local_100;
    pcVar13 = *(code **)(local_f8 + 0x10);
    (*pcVar13)((long)puVar14 + (long)iVar1,param_3,local_100);
    (*pcVar13)((long)puVar14 + (long)iVar2,puVar15,lVar11);
    uVar10 = 0;
    FUN_100277ad0(0);
    _swift_storeEnumTagMultiPayload(puVar14,uVar10,2);
    _swift_storeEnumTagMultiPayload(puVar14,appuStack_110[1],1);
    _swift_errorRetain(ppppuVar8);
    FUN_1002a7888(puVar7,puVar14);
    _swift_errorRelease(ppppuVar8);
    _swift_release(puVar6);
    FUN_100040bb4(puVar14,&DAT_100a838c8,&DAT_100819010);
    pcVar13 = *(code **)(lVar4 + 8);
  }
  (*pcVar13)(puVar15,lVar11);
LAB_1002f61cc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

