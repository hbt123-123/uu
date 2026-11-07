// rea decompile_all
// name: FUN_1002fd404
// address: 0x1002fd404
// body: available
// range: 0x1002fd404-0x1002fd667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002fd404(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  FUN_10030da10();
  puVar6 = auStack_b0 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a85408;
  FUN_100004bb4(&DAT_100a85408,&DAT_100819858);
  lVar5 = (long)puVar6 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_1,lVar5,&DAT_100a85408,&DAT_100819858);
  lVar4 = lVar5;
  _swift_getEnumCaseMultiPayload(lVar5,puVar3);
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar5,&DAT_100a85408,&DAT_100819858);
  }
  else {
    lVar4 = 0;
    local_90 = param_3;
    __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
    local_88 = *(long *)(lVar4 + -8);
    lVar7 = lVar5 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
    local_a0 = lVar5;
    local_80 = lVar4;
    (**(code **)(local_88 + 0x20))(lVar7,lVar5);
    lVar5 = *(long *)(param_2 + _TtC9Alamofire16WebSocketRequest::socketMutableState);
    local_a8 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10);
    local_98 = param_2;
    _os_unfair_lock_lock();
    _swift_beginAccess(lVar5 + 0x18,auStack_78,0,0);
    lVar4 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10);
    if (lVar4 != 0) {
      pcVar8 = *(code **)(local_88 + 0x10);
      puVar9 = (undefined8 *)(*(long *)(lVar5 + 0x20) + 0x30);
      do {
        pcVar1 = (code *)puVar9[-1];
        uVar10 = *puVar9;
        (*pcVar8)(puVar6,lVar7,local_80);
        _swift_storeEnumTagMultiPayload(puVar6,lVar2,1);
        _swift_retain(uVar10);
        (*pcVar1)(puVar6);
        _swift_release(uVar10);
        FUN_1000d27dc(puVar6,FUN_10030da10);
        lVar4 = lVar4 + -1;
        puVar9 = puVar9 + 3;
      } while (lVar4 != 0);
    }
    _os_unfair_lock_unlock(local_a8);
    puVar3 = &DAT_1009afbf0;
    _swift_allocObject(&DAT_1009afbf0,0x20,7);
    *(long *)(puVar3 + 0x10) = local_98;
    *(undefined8 *)(puVar3 + 0x18) = local_90;
    _swift_retain();
    __sSo25NSURLSessionWebSocketTaskC10FoundationE7receive17completionHandleryys6ResultOyAbCE7MessageOs5Error_pGc_tF
              (thunk_FUN_10030d7dc,puVar3);
    _swift_release(puVar3);
    (**(code **)(local_88 + 8))(lVar7,local_80);
  }
  return;
}

