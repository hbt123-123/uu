// rea decompile_all
// name: FUN_1002fd170
// address: 0x1002fd170
// body: available
// range: 0x1002fd170-0x1002fd2f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002fd170(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  char acStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  FUN_1002c76a8();
  pcVar4 = acStack_80 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + _TtC9Alamofire7Request::mutableState);
    uVar5 = *(undefined8 *)(plVar6[2] + 0x10);
    _swift_retain();
    _os_unfair_lock_lock(uVar5);
    lVar2 = *(long *)(*plVar6 + 0x60);
    _swift_beginAccess((long)plVar6 + lVar2,acStack_80,0,0);
    FUN_100082394((long)plVar6 + lVar2,pcVar4,FUN_1002c76a8);
    cVar1 = *pcVar4;
    FUN_1000d27dc(pcVar4,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar5);
    if (cVar1 == '\x01') {
      uVar5 = *(undefined8 *)(param_2 + _TtC9Alamofire7Request::underlyingQueue);
      _swift_release(param_2);
      puVar3 = &DAT_1009b0000;
      _swift_allocObject(&DAT_1009b0000,0x20,7);
      *(long *)(puVar3 + 0x10) = param_2;
      *(undefined8 *)(puVar3 + 0x18) = param_1;
      _swift_retain(param_2);
      FUN_1002fa7c4(uVar5,FUN_10030e9dc,puVar3);
      _swift_release(param_2);
      _swift_release(puVar3);
    }
    else {
      _swift_release_n(param_2,2);
    }
  }
  return;
}

