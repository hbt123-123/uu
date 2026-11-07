// rea decompile_all
// name: FUN_1002eacc0
// address: 0x1002eacc0
// body: available
// range: 0x1002eacc0-0x1002eae53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002eacc0(ulong param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar9 = *(long *)(lVar2 + -8);
  puVar8 = (undefined8 *)(auStack_68 + (-8 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0)))
  ;
  *puVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(lVar9 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar2);
  puVar3 = puVar8;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar9 + 8))(puVar8,lVar2);
  if (((ulong)puVar3 & 1) != 0) {
    lVar2 = *(long *)(unaff_x20 + 0xd0);
    uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar7);
    _swift_beginAccess(lVar2 + 0x18,auStack_68,0x21,0);
    uVar4 = param_1;
    FUN_1002d8db4();
    if ((uVar4 & 1) == 0) {
      puVar5 = &DAT_1009aee60;
      _swift_allocObject(&DAT_1009aee60,0x20,7);
      *(code **)(puVar5 + 0x10) = param_2;
      *(undefined8 *)(puVar5 + 0x18) = param_3;
      _swift_retain(param_3);
      uVar6 = *(undefined8 *)(lVar2 + 0x38);
      _swift_isUniquelyReferenced_nonNull_native(uVar6);
      local_70 = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(lVar2 + 0x38) = 0x8000000000000000;
      FUN_1002ed1dc(FUN_100102840,puVar5,param_1,uVar6);
      *(undefined8 *)(lVar2 + 0x38) = local_70;
      _swift_endAccess(auStack_68);
      _os_unfair_lock_unlock(uVar7);
    }
    else {
      _swift_endAccess(auStack_68);
      _os_unfair_lock_unlock(uVar7);
      (*param_2)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002eae54);
  (*pcVar1)();
}

