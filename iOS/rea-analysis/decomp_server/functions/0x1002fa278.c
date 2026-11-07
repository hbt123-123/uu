// rea decompile_all
// name: FUN_1002fa278
// address: 0x1002fa278
// body: available
// range: 0x1002fa278-0x1002fa4af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002fa278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long alStack_a0 [5];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  FUN_10030da10();
  lVar1 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)alStack_a0 + lVar1);
  lVar4 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar11 = *(long *)(lVar4 + -8);
  puVar9 = (undefined8 *)((long)puVar7 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar9 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar11 + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar4);
  puVar5 = puVar9;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar11 + 8))(puVar9,lVar4);
  if (((ulong)puVar5 & 1) != 0) {
    lVar11 = *(long *)(unaff_x20 + _TtC9Alamofire16WebSocketRequest::socketMutableState);
    uVar8 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar8);
    _swift_beginAccess(lVar11 + 0x18,auStack_78,0x21,0);
    lVar4 = *(long *)(lVar11 + 0x28);
    if (lVar4 != 0) {
      __s8Dispatch0A8WorkItemC6cancelyyFTj();
    }
    *(undefined8 *)(lVar11 + 0x28) = 0;
    _swift_endAccess(auStack_78);
    _swift_release(lVar4);
    _os_unfair_lock_unlock(uVar8);
    lVar6 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x10);
    _os_unfair_lock_lock(lVar6);
    lVar10 = *(long *)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar10 + 0x10);
    if (lVar4 != 0) {
      uVar8 = *(undefined8 *)(lVar11 + 0x18);
      alStack_a0[1] = *(undefined8 *)(lVar11 + 0x28);
      alStack_a0[4] = lVar6;
      _swift_retain();
      alStack_a0[2] = uVar8;
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(lVar10);
      puVar5 = (undefined8 *)(lVar10 + 0x30);
      alStack_a0[3] = lVar10;
      do {
        pcVar2 = (code *)puVar5[-1];
        uVar8 = *puVar5;
        *puVar7 = param_1;
        *(undefined8 *)((long)alStack_a0 + lVar1 + 8) = param_2;
        *(undefined8 *)((long)alStack_a0 + lVar1 + 0x10) = param_3;
        _swift_storeEnumTagMultiPayload(puVar7,lVar3,2);
        _swift_retain(uVar8);
        FUN_10010bd10(param_2,param_3);
        (*pcVar2)(puVar7);
        _swift_release(uVar8);
        FUN_1000d27dc(puVar7,FUN_10030da10);
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 3;
      } while (lVar4 != 0);
      _swift_release(alStack_a0[1]);
      _swift_bridgeObjectRelease(alStack_a0[3]);
      _swift_bridgeObjectRelease(alStack_a0[2]);
      lVar6 = alStack_a0[4];
    }
    _os_unfair_lock_unlock(lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002fa4b0);
  (*pcVar2)();
}

