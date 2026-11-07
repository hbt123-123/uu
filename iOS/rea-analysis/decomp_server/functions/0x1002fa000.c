// rea decompile_all
// name: FUN_1002fa000
// address: 0x1002fa000
// body: available
// range: 0x1002fa000-0x1002fa277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002fa264) */

void FUN_1002fa000(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long alStack_e0 [5];
  long local_b8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar3 = 0;
  FUN_10030da10();
  lVar1 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)alStack_e0 + lVar1);
  lVar4 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar6 = *(long *)(lVar4 + -8);
  puVar9 = (undefined8 *)((long)puVar8 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar9 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar6 + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar4);
  puVar5 = puVar9;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar6 + 8))(puVar9,lVar4);
  if (((ulong)puVar5 & 1) != 0) {
    lVar10 = *(long *)(unaff_x20 + _TtC9Alamofire16WebSocketRequest::socketMutableState);
    lVar6 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x10);
    _os_unfair_lock_lock(lVar6);
    _swift_beginAccess(lVar10 + 0x18,auStack_88,0,0);
    lVar11 = *(long *)(lVar10 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x10);
    if (lVar4 != 0) {
      uVar7 = *(undefined8 *)(lVar10 + 0x18);
      alStack_e0[1] = *(undefined8 *)(lVar10 + 0x28);
      alStack_e0[4] = lVar6;
      local_b8 = lVar10;
      _swift_retain();
      alStack_e0[2] = uVar7;
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(lVar11);
      puVar5 = (undefined8 *)(lVar11 + 0x30);
      alStack_e0[3] = lVar11;
      do {
        pcVar2 = (code *)puVar5[-1];
        uVar7 = *puVar5;
        *puVar8 = param_1;
        *(undefined8 *)((long)alStack_e0 + lVar1 + 8) = param_2;
        _swift_storeEnumTagMultiPayload(puVar8,lVar3,0);
        _swift_retain(uVar7);
        _swift_bridgeObjectRetain(param_2);
        (*pcVar2)(puVar8);
        _swift_release(uVar7);
        FUN_1000d27dc(puVar8,FUN_10030da10);
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 3;
      } while (lVar4 != 0);
      _swift_release(alStack_e0[1]);
      _swift_bridgeObjectRelease(alStack_e0[3]);
      _swift_bridgeObjectRelease(alStack_e0[2]);
      lVar6 = alStack_e0[4];
      lVar10 = local_b8;
    }
    _os_unfair_lock_unlock(lVar6);
    if ((*(byte *)(unaff_x20 + _TtC9Alamofire16WebSocketRequest::configuration + 0x20) & 1) == 0) {
      uVar12 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire16WebSocketRequest::configuration + 0x18);
      uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x10);
      _os_unfair_lock_lock(uVar7);
      _swift_beginAccess(lVar10 + 0x18,auStack_a0,0x21,0);
      FUN_1002fcdd8(uVar12,lVar10 + 0x18,unaff_x20);
      _swift_endAccess(auStack_a0);
      _os_unfair_lock_unlock(uVar7);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002fa264);
  (*pcVar2)();
}

