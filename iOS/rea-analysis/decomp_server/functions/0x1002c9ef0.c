// rea decompile_all
// name: FUN_1002c9ef0
// address: 0x1002c9ef0
// body: available
// range: 0x1002c9ef0-0x1002ca017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002ca004) */

void FUN_1002c9ef0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar7 = *(long *)(lVar2 + -8);
  puVar5 = (undefined8 *)((long)&uStack_60 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar5 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar7 + 0x68))
            (puVar5,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar2);
  puVar3 = puVar5;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar7 + 8))(puVar5,lVar2);
  if (((ulong)puVar3 & 1) != 0) {
    plVar4 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
    uVar6 = *(undefined8 *)(plVar4[2] + 0x10);
    _os_unfair_lock_lock(uVar6);
    lVar2 = *(long *)(*plVar4 + 0x60);
    _swift_beginAccess((long)plVar4 + lVar2,auStack_58,0x21,0);
    FUN_1002cfa4c((long)plVar4 + lVar2,param_1);
    _swift_endAccess(auStack_58);
    _os_unfair_lock_unlock(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002ca004);
  (*pcVar1)();
}

