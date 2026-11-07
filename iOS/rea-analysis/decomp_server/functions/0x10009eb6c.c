// rea decompile_all
// name: FUN_10009eb6c
// address: 0x10009eb6c
// body: available
// range: 0x10009eb6c-0x10009f2ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009f28c to 0x1007df160 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10009f2a8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10009eb6c(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  ID IVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar8 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar21 = *(undefined8 *)(unaff_x22 + 0x4f0);
  IVar15 = *(ID *)(unaff_x22 + 0x4d8);
  lVar1 = 0x20;
  _swift_task_alloc();
  *(undefined8 *)(lVar1 + 0x10) = uVar21;
  lVar16 = lVar1;
  FUN_1003fb48c(FUN_10009fe7c,lVar1,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                0x800000010087fcb0,0x62,0);
  _swift_task_dealloc(lVar1);
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(lVar16);
  *(undefined8 *)(unaff_x22 + 0x418) = 0;
  IVar15 = _objc_msgSend(IVar15,"attributesOfItemAtPath:error:",lVar1,unaff_x22 + 0x418);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x418);
  if (IVar15 == 0) {
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar21);
    _swift_willThrow(0);
    _swift_errorRelease(uVar21);
    goto LAB_10009ee04;
  }
  uVar2 = 0;
  FUN_100006050();
  puVar3 = &DAT_100a752f0;
  FUN_100005c90(&DAT_100a752f0,FUN_100006050,&TargetProtocolConformanceDescriptor_1008511b8);
  puVar5 = PTR___sypN_100995e88;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar15,uVar2,PTR___sypN_100995e88 + 8,puVar3);
  if (*(long *)(IVar15 + 0x10) == 0) {
LAB_10009ed54:
    *(undefined8 *)(unaff_x22 + 0x368) = 0;
    *(undefined8 *)(unaff_x22 + 0x360) = 0;
    *(undefined8 *)(unaff_x22 + 0x378) = 0;
    *(undefined8 *)(unaff_x22 + 0x370) = 0;
  }
  else {
    lVar16 = *(long *)PTR__NSFileSize_1009952c8;
    _swift_bridgeObjectRetain(IVar15);
    thunk_FUN_1001a2e90(lVar16);
    if ((uVar2 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar15);
      goto LAB_10009ed54;
    }
    FUN_10003e8bc(*(long *)(IVar15 + 0x38) + lVar16 * 0x20,unaff_x22 + 0x360);
    _swift_bridgeObjectRelease(IVar15);
  }
  _swift_bridgeObjectRelease(IVar15);
  if (*(long *)(unaff_x22 + 0x378) == 0) {
    FUN_100040bb4(unaff_x22 + 0x360,&DAT_100a766e0,&DAT_10080bdb0);
  }
  else {
    uVar2 = unaff_x22 + 0x420;
    _swift_dynamicCast(uVar2,unaff_x22 + 0x360,puVar5 + 8,PTR___ss5Int64VN_100995cc0,6);
    if ((uVar2 & 1) != 0) {
      lVar1 = *(long *)(unaff_x22 + 0x420);
      lVar16 = 0x20;
      _swift_task_alloc();
      *(double *)(lVar16 + 0x10) = (double)lVar1 * 9.5367431640625e-07;
      FUN_1003fb48c(FUN_10009ff04,lVar16,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                    0x800000010087fcb0,0x66,0);
      _swift_task_dealloc(lVar16);
    }
  }
LAB_10009ee04:
  lVar16 = *(long *)(unaff_x22 + 0x4a8);
  lVar1 = *(long *)(unaff_x22 + 0x4a0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x488);
  FUN_1003fb48c(FUN_100093c84,0,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                0x800000010087fcb0,0x6a,0);
  uVar4 = lVar16 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x520) = uVar4;
  puVar5 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  uVar6 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  __s10Foundation3URLV6stringACSgSSh_tcfC(uVar6,uVar22,uVar19);
  uVar2 = uVar6;
  (**(code **)(lVar1 + 0x30))(uVar6,1,uVar21);
  if ((int)uVar2 == 1) {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x4f0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x4e8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x4e0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x4d8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x4d0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x4c8);
    pcVar13 = *(code **)(unaff_x22 + 0x4c0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x4b0);
    lVar16 = *(long *)(unaff_x22 + 0x4a0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x498);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x490);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x488);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x450);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x438);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x480));
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar23);
    FUN_100040bb4(uVar6,&DAT_100a766c8,&DAT_10080b1d0);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar4);
    puVar7 = (undefined1 *)0x20;
    _swift_task_alloc();
    *(undefined8 *)(puVar7 + 0x10) = uVar24;
    *(undefined8 *)(puVar7 + 0x18) = uVar18;
    FUN_1003fb4ec(FUN_10009fe84,puVar7,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                  0x800000010087fcb0,0x6c,0);
    _swift_bridgeObjectRelease(uVar18);
    _swift_task_dealloc();
    FUN_10009fe8c();
    _swift_allocError(&DAT_100999f90,puVar7,0,0);
    *puVar7 = 0;
    _swift_willThrow();
    (*pcVar13)(uVar20,uVar11);
    _swift_task_dealloc(uVar20);
    pcVar17 = *(code **)(lVar16 + 8);
    (*pcVar17)(uVar12,uVar9);
    _swift_task_dealloc(uVar12);
    FUN_10009385c(uVar14,uVar19,uVar21);
    _swift_bridgeObjectRelease(uVar21);
    (*pcVar17)(uVar22,uVar9);
    (*pcVar13)(uVar10,uVar11);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x450));
    if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010009f0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    lVar16 = *(long *)(unaff_x22 + 0x4a0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x498);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x490));
    (**(code **)(lVar16 + 0x20))(uVar4,uVar6,uVar21);
    _swift_task_dealloc(uVar6);
    if (DAT_100a73b28 != -1) {
      _swift_once(&DAT_100a73b28,FUN_1000a0144);
    }
    lVar16 = DAT_100b36090;
    uVar19 = *(undefined8 *)(unaff_x22 + 0x490);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x480);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x478);
    _objc_msgSend(*(ID *)(DAT_100b36090 + 0x10),"lock");
    IVar15 = *(ID *)(lVar16 + 0x18);
    *(ID *)(unaff_x22 + 0x528) = IVar15;
    _objc_msgSend(*(ID *)(lVar16 + 0x10),"unlock");
    pcVar13 = FUN_100093d40;
    FUN_1003fb48c(FUN_100093d40,0,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                  0x800000010087fcb0,0x71,0xb);
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    *(code **)(unaff_x22 + 0x530) = pcVar13;
    pcVar17 = pcVar13;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    *(code **)(unaff_x22 + 0x538) = pcVar17;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar21,uVar22);
    *(undefined8 *)(unaff_x22 + 0x540) = uVar21;
    _swift_bridgeObjectRelease(uVar22);
    _swift_bridgeObjectRelease(uVar19);
    *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x380;
    *(long *)(unaff_x22 + 0x50) = unaff_x22;
    *(code **)(unaff_x22 + 0x58) = FUN_10009f3f8;
    lVar16 = unaff_x22 + 0x50;
    _swift_continuation_init(lVar16,1);
    puVar5 = &DAT_100a766d8;
    FUN_100004bb4(&DAT_100a766d8,&DAT_10080b1d8);
    *(undefined **)(unaff_x22 + 0x278) = puVar5;
    *(long *)(unaff_x22 + 0x260) = lVar16;
    *(undefined **)(unaff_x22 + 0x240) = PTR___NSConcreteStackBlock_100995490;
    *(undefined8 *)(unaff_x22 + 0x248) = 0x42000000;
    *(code **)(unaff_x22 + 0x250) = FUN_100093d6c;
    *(undefined **)(unaff_x22 + 600) = &DAT_100999ee8;
    _objc_msgSend(IVar15,"upload:to:token:headers:completionHandler:",pcVar13,pcVar17,uVar21,0,
                  unaff_x22 + 0x240);
    if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar8) {
      _swift_continuation_await(unaff_x22 + 0x50);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

