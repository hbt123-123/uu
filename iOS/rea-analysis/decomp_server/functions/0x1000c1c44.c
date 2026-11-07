// rea decompile_all
// name: FUN_1000c1c44
// address: 0x1000c1c44
// body: available
// range: 0x1000c1c44-0x1000c1f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c1c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ID IVar5;
  undefined *puVar6;
  void *aBlock;
  ID IVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  puVar1 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_80 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  uVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar8,param_1,param_2);
  lVar3 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_100040bb4(lVar8,&DAT_100a766c8,&DAT_10080b1d0);
  }
  else {
    uVar4 = uVar9;
    (**(code **)(lVar10 + 0x20))(uVar9,lVar8,lVar2);
    __s10Foundation3URLV6schemeSSSgvg();
    if (lVar8 != 0) {
      if (uVar4 == 0x7370747468 && lVar8 == -0x1b00000000000000) {
        _swift_bridgeObjectRelease(lVar8);
LAB_1000c1dfc:
        if (DAT_100a73b58 != -1) {
          _swift_once(&DAT_100a73b58,FUN_1000c77dc);
        }
        lVar3 = DAT_100b360a0;
        _objc_msgSend(*(ID *)(DAT_100b360a0 + 0x10),"lock");
        IVar7 = *(ID *)(lVar3 + 0x18);
        IVar5 = _objc_msgSend(*(ID *)(lVar3 + 0x10),"unlock");
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
        puVar1 = &DAT_10099b050;
        _swift_allocObject(&DAT_10099b050,0x18,7);
        _swift_weakInit(puVar1 + 0x10,param_4);
        puVar6 = &DAT_10099b280;
        _swift_allocObject(&DAT_10099b280,0x20,7);
        *(undefined **)(puVar6 + 0x10) = puVar1;
        *(undefined8 *)(puVar6 + 0x18) = param_3;
        local_60 = FUN_1000c20d0;
        local_80 = PTR___NSConcreteStackBlock_100995490;
        local_78 = 0x42000000;
        local_70 = FUN_1000bef80;
        puStack_68 = &DAT_10099b298;
        local_58 = puVar6;
        aBlock = __Block_copy(&local_80);
        puVar1 = local_58;
        _swift_bridgeObjectRetain(param_3);
        _swift_release(puVar1);
        IVar7 = _objc_msgSend(IVar7,"dataTaskWithURL:completionHandler:",IVar5,aBlock);
        __Block_release(aBlock);
        _objc_msgSend(IVar7,"resume");
        (**(code **)(lVar10 + 8))(uVar9,lVar2);
        return;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(lVar8);
      if ((uVar4 & 1) != 0) goto LAB_1000c1dfc;
    }
    (**(code **)(lVar10 + 8))(uVar9,lVar2);
  }
  FUN_100401b14(0);
  FUN_1003fb4bc(FUN_1000be768,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000014,
                0x8000000100883a40,0x2f2,0);
  return;
}

