// rea decompile_all
// name: FUN_1002e7020
// address: 0x1002e7020
// body: available
// range: 0x1002e7020-0x1002e741f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002e7020(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  class_t *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_60 [2];
  
  pcVar7 = (class_t *)*param_1;
  if (pcVar7 == &objc::class_t::_TtC9Alamofire13UploadRequest) {
    lVar3 = 0;
    __s8Dispatch0A9PredicateOMa();
    lVar9 = *(long *)(lVar3 + -8);
    puVar4 = (undefined8 *)((long)local_60 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
    *puVar4 = param_2[6];
    (**(code **)(lVar9 + 0x68))
              (puVar4,*(undefined4 *)
                       PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
               ,lVar3);
    puVar5 = puVar4;
    __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
    (**(code **)(lVar9 + 8))(puVar4,lVar3);
    lVar3 = _TtC9Alamofire11DataRequest::convertible;
    if (((ulong)puVar5 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e7384);
      (*pcVar1)();
    }
    _swift_retain(param_1);
    _swift_retain(param_2);
    FUN_1002f1148(param_1,(long)param_1 + lVar3,param_2,param_1,param_2);
    _swift_release(param_1);
LAB_1002e71cc:
    _swift_release(param_2);
  }
  else {
    uVar2 = 0;
    FUN_10028a504(0);
    puVar5 = param_1;
    _swift_dynamicCastClass(param_1,uVar2);
    if (puVar5 == (undefined8 *)0x0) {
      if (pcVar7 == &objc::class_t::_TtC9Alamofire15DownloadRequest) {
        FUN_1002e7828(param_1);
        return;
      }
      if (pcVar7 != &objc::class_t::_TtC9Alamofire17DataStreamRequest) {
        uVar6 = 0;
        __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(10,0xf,0);
        if (((uVar6 & 1) == 0) ||
           ((class_t *)*param_1 != &objc::class_t::_TtC9Alamofire16WebSocketRequest)) {
          local_60[0] = 0;
          local_60[1] = 0xe000000000000000;
          __ss11_StringGutsV4growyySiF(0x35);
          __sSS6appendyySSF(&DAT_d000000000000033,0x80000001008aa1c0);
          uVar2 = 0;
          __ss9_typeName_9qualifiedSSypXp_SbtF(*param_1,0);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar2);
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                    ("Fatal error",0xb,2,local_60[0],local_60[1],"Alamofire/Session.swift",0x17,2,
                     0x4a4,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e7420);
          (*pcVar1)();
        }
        lVar3 = 0;
        __s8Dispatch0A9PredicateOMa();
        lVar9 = *(long *)(lVar3 + -8);
        puVar4 = (undefined8 *)
                 ((long)local_60 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
        *puVar4 = param_2[6];
        (**(code **)(lVar9 + 0x68))
                  (puVar4,*(undefined4 *)
                           PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
                   ,lVar3);
        _swift_retain(param_1);
        puVar5 = puVar4;
        __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
        (**(code **)(lVar9 + 8))(puVar4,lVar3);
        if (((ulong)puVar5 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e7388);
          (*pcVar1)();
        }
        FUN_1002e7ae8(param_1,(long)param_1 + _TtC9Alamofire16WebSocketRequest::convertible,param_2)
        ;
        param_2 = param_1;
        goto LAB_1002e71cc;
      }
      lVar3 = 0;
      __s8Dispatch0A9PredicateOMa();
      lVar9 = *(long *)(lVar3 + -8);
      puVar4 = (undefined8 *)
               ((long)local_60 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
      *puVar4 = param_2[6];
      (**(code **)(lVar9 + 0x68))
                (puVar4,*(undefined4 *)
                         PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
                 ,lVar3);
      puVar5 = puVar4;
      __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
      (**(code **)(lVar9 + 8))(puVar4,lVar3);
      if (((ulong)puVar5 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e738c);
        (*pcVar1)();
      }
      lVar3 = (long)param_1 + _TtC9Alamofire17DataStreamRequest::convertible;
    }
    else {
      lVar3 = 0;
      __s8Dispatch0A9PredicateOMa();
      lVar9 = *(long *)(lVar3 + -8);
      puVar8 = (undefined8 *)
               ((long)local_60 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
      *puVar8 = param_2[6];
      (**(code **)(lVar9 + 0x68))
                (puVar8,*(undefined4 *)
                         PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
                 ,lVar3);
      puVar4 = puVar8;
      __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
      (**(code **)(lVar9 + 8))(puVar8,lVar3);
      if (((ulong)puVar4 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e7380);
        (*pcVar1)();
      }
      lVar3 = (long)puVar5 + _TtC9Alamofire11DataRequest::convertible;
      param_1 = puVar5;
    }
    FUN_1002e7ae8(param_1,lVar3,param_2);
  }
  return;
}

