// rea decompile_all
// name: FUN_1001857b4
// address: 0x1001857b4
// body: available
// range: 0x1001857b4-0x100185b1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001857b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *self;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_f0 [16];
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar7 = (long)puVar9 - extraout_x12;
  uVar2 = 0x2f;
  __sSS9hasPrefixySbSSF(0x2f,0xe100000000000000,param_1,param_2);
  if ((uVar2 & 1) == 0) {
    uVar8 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar8);
    *(undefined8 *)(lVar7 + -0x10) = param_1;
    *(undefined8 *)(lVar7 + -8) = param_2;
    FUN_1003fb4ec(FUN_100185b1c,lVar7 + -0x20,0xd0000000000000b5,0x8000000100897680,
                  0xd00000000000001b,0x80000001008978f0,0x8b,0);
  }
  else {
    __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(lVar7,param_1,param_2,1);
    __s10Foundation3URLV016standardizedFileB0ACvg(puVar9);
    pcVar11 = *(code **)(lVar10 + 8);
    lVar10 = lVar7;
    lVar6 = lVar1;
    (*pcVar11)();
    __s10Foundation3URLV4pathSSvg();
    (*pcVar11)(puVar9,lVar1);
    if (DAT_100a73ba8 != -1) {
      _swift_once(&DAT_100a73ba8,FUN_100183d94);
    }
    FUN_100184744(lVar10,lVar6);
    self = (undefined8 *)
           NSDistributedNotificationCenter::defaultCenter
                     ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
    puVar3 = self;
    FUN_1003aa428();
    uVar8 = *puVar3;
    puVar4 = &DAT_100a78b30;
    FUN_100004bb4(&DAT_100a78b30,&DAT_10080d968);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    puVar5 = PTR___sSSN_1009957f8;
    local_c8 = 0x68746170;
    uStack_c0 = 0xe400000000000000;
    __ss11AnyHashableVyABxcSHRzlufC
              (puVar4 + 0x20,&local_c8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
    *(undefined **)(puVar4 + 0x60) = puVar5;
    *(long *)(puVar4 + 0x48) = lVar10;
    *(long *)(puVar4 + 0x50) = lVar6;
    _swift_bridgeObjectRetain(lVar6);
    puVar5 = puVar4;
    FUN_1000cc410(puVar4);
    _swift_setDeallocating(puVar4);
    FUN_100040bb4(puVar4 + 0x20,&DAT_100a775c0,&DAT_10080c1f0);
    puVar4 = puVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar5,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
               PTR___ss11AnyHashableVSHsWP_100995ad8);
    _swift_bridgeObjectRelease(puVar5);
    _objc_msgSend((ID)self,"postNotificationName:object:userInfo:deliverImmediately:",uVar8,0,puVar4
                  ,1);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(lVar7 + -0x10) = lVar10;
    *(long *)(lVar7 + -8) = lVar6;
    FUN_1003fb48c(FUN_100185b24,lVar7 + -0x20,0xd0000000000000b5,0x8000000100897680,
                  0xd00000000000001b,0x80000001008978f0,0x97,0);
    _swift_bridgeObjectRelease(lVar6);
  }
  return;
}

