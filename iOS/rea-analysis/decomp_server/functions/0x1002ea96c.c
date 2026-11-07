// rea decompile_all
// name: FUN_1002ea96c
// address: 0x1002ea96c
// body: available
// range: 0x1002ea96c-0x1002eaabf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1002ea96c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar6 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar10 = *(long *)(lVar6 + -8);
  puVar9 = (undefined8 *)((long)&uStack_70 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  *puVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(lVar10 + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar6);
  puVar7 = puVar9;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar10 + 8))(puVar9,lVar6);
  if (((ulong)puVar7 & 1) != 0) {
    lVar6 = *(long *)(unaff_x20 + 0xd0);
    uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar8);
    _swift_beginAccess(lVar6 + 0x18,auStack_68,0,0);
    uVar1 = *(undefined8 *)(lVar6 + 0x18);
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    uVar4 = *(undefined8 *)(lVar6 + 0x30);
    uVar11 = *(undefined8 *)(lVar6 + 0x38);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar11);
    FUN_1002dfba0(param_1,uVar1);
    _swift_bridgeObjectRelease(uVar11);
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar1);
    _os_unfair_lock_unlock(uVar8);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1002eaac0);
  (*pcVar5)();
}

