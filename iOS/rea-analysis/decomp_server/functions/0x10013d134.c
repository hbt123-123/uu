// rea decompile_all
// name: FUN_10013d134
// address: 0x10013d134
// body: available
// range: 0x10013d134-0x10013d613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10013d610 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10013d134(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined4 extraout_w12;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_100 [16];
  undefined8 auStack_f0 [4];
  undefined4 auStack_d0 [4];
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *local_b0;
  uint local_84;
  undefined1 local_80;
  undefined7 uStack_7f;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar3 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  param_2 = (undefined8 *)*param_2;
  if (param_2[0x11] != 0) {
    puVar1 = (undefined8 *)
             (param_2[0x11] + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
    uVar13 = *puVar1;
    uVar2 = puVar1[1];
    uVar10 = *(undefined8 *)
              (param_3 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
    local_84 = *(uint *)((long)param_2 + 0x14);
    _swift_bridgeObjectRetain(uVar2);
    _swift_retain(uVar10);
    FUN_1003e37e8(&local_80,&local_84);
    _swift_release(uVar10);
    if (CONCAT71(uStack_7f,local_80) != 0) {
      local_b0 = param_1;
      _swift_release();
      local_84 = local_84 & 0xffffff00;
      IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
      uVar10 = uVar2;
      local_b8 = uVar13;
      __s10Foundation3URLV22appendingPathComponentyACSSF(lVar11,uVar13,uVar2);
      __s10Foundation3URLV4pathSSvg();
      (**(code **)(lVar12 + 8))(lVar11,lVar4);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar13,uVar10);
      _swift_bridgeObjectRelease(uVar10);
      IVar5 = NSFileManager::fileExistsAtPath_isDirectory_
                        (IVar5,"fileExistsAtPath:isDirectory:",uVar13,&local_84);
      if (((int)IVar5 == 0) || ((char)local_84 != '\x01')) {
        (*(code *)PTR____chkstk_darwin_100995498)
                  (*(undefined8 *)
                    (param_3 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper),0);
        uVar13 = local_b8;
        *(undefined8 *)(lVar11 + -0x30) = extraout_x8_01;
        *(undefined8 *)(lVar11 + -0x28) = uVar13;
        *(undefined8 *)(lVar11 + -0x20) = uVar2;
        *(undefined8 *)(lVar11 + -0x18) = param_4;
        *(undefined4 *)(lVar11 + -0x10) = extraout_w12;
        puVar3 = &DAT_100a762e0;
        FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
        puVar6 = puVar3;
        _swift_allocObject();
        pcVar7 = FUN_10014599c;
        FUN_100615648(FUN_10014599c,lVar11 + -0x40,puVar6);
        lVar4 = 0;
        __s8Dispatch0A13WorkItemFlagsVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar9,1,1,lVar4);
        puVar6 = &DAT_10099e990;
        _swift_allocObject(&DAT_10099e990,0x30,7);
        *(long *)(puVar6 + 0x10) = param_3;
        *(undefined8 **)(puVar6 + 0x18) = param_2;
        *(undefined8 *)(puVar6 + 0x20) = uVar13;
        *(undefined8 *)(puVar6 + 0x28) = uVar2;
        _swift_retain();
        FUN_10060edd8();
        _swift_beginAccess();
        uVar13 = *param_2;
        puVar8 = &DAT_100a7a048;
        FUN_10003f840(&DAT_100a7a048,&DAT_100a762e0,&DAT_10080aae0,
                      &TargetProtocolConformanceDescriptor_1008488a0);
        FUN_100617950(uVar13,puVar9,FUN_100145630,puVar6,puVar3,PTR___sSbN_1009958c8,puVar8);
        _swift_release(pcVar7);
        _swift_release(puVar6);
        FUN_100040bb4(puVar9,&DAT_100a77040,&DAT_10080e910);
        *local_b0 = uVar13;
      }
      else {
        _swift_bridgeObjectRelease(uVar2);
        FUN_100401b14(0);
        FUN_1003fb4ec(FUN_10013d640,0,0xd0000000000000ad,0x8000000100890750,&DAT_d000000000000028,
                      0x8000000100891250,0xd8,0);
        FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
        local_80 = 0;
        puVar9 = &local_80;
        FUN_100615420();
        *local_b0 = puVar9;
      }
      goto LAB_10013d5d4;
    }
    _swift_bridgeObjectRelease(uVar2);
  }
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_10013d614,0,0xd0000000000000ad,0x8000000100890750,&DAT_d000000000000028,
                0x8000000100891250,0xd3,0);
  FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
  local_80 = 0;
  puVar9 = &local_80;
  FUN_100615420();
  *param_1 = puVar9;
LAB_10013d5d4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

