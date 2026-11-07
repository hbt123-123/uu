// rea decompile_all
// name: FUN_1002eaac0
// address: 0x1002eaac0
// body: available
// range: 0x1002eaac0-0x1002eacbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002eaac0(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  bool bVar11;
  undefined8 local_80 [3];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar10 = *(long *)(lVar1 + -8);
  puVar8 = (undefined8 *)((long)local_80 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(lVar10 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar1);
  puVar2 = puVar8;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar10 + 8))(puVar8,lVar1);
  if (((ulong)puVar2 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1002eacc0);
    (*pcVar7)();
  }
  lVar1 = *(long *)(unaff_x20 + 0xd0);
  uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar5);
  puVar4 = auStack_68;
  _swift_beginAccess(lVar1 + 0x18,puVar4,0x21,0);
  uVar3 = param_1;
  FUN_1002d8c04();
  if ((uVar3 & 1) != 0) {
    lVar1 = *(long *)(lVar1 + 0x38);
    if (*(long *)(lVar1 + 0x10) == 0) {
LAB_1002eac00:
      pcVar7 = (code *)0x0;
      puVar9 = (undefined *)0x0;
      bVar11 = true;
    }
    else {
      _swift_bridgeObjectRetain(lVar1);
      uVar3 = param_1;
      FUN_100280258();
      if (((ulong)puVar4 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar1);
        goto LAB_1002eac00;
      }
      puVar2 = (undefined8 *)(*(long *)(lVar1 + 0x38) + uVar3 * 0x10);
      local_80[1] = puVar2[1];
      local_80[0] = *puVar2;
      _swift_retain(local_80[1]);
      _swift_bridgeObjectRelease(lVar1);
      puVar9 = &DAT_1009aeeb0;
      _swift_allocObject(&DAT_1009aeeb0,0x20,7);
      bVar11 = false;
      *(undefined8 *)(puVar9 + 0x18) = local_80[1];
      *(undefined8 *)(puVar9 + 0x10) = local_80[0];
      pcVar7 = FUN_1000f4ed4;
    }
    FUN_1002d9350(param_1);
    FUN_10007ed2c();
    if (!bVar11) {
      puVar6 = &DAT_1009aee88;
      _swift_allocObject(&DAT_1009aee88,0x20,7);
      bVar11 = false;
      *(code **)(puVar6 + 0x10) = pcVar7;
      *(undefined **)(puVar6 + 0x18) = puVar9;
      pcVar7 = thunk_FUN_100102840;
      goto LAB_1002eac68;
    }
  }
  pcVar7 = (code *)0x0;
  puVar6 = (undefined *)0x0;
  bVar11 = true;
LAB_1002eac68:
  _swift_endAccess(auStack_68);
  _os_unfair_lock_unlock(uVar5);
  if (!bVar11) {
    _swift_retain(puVar6);
    (*pcVar7)();
    FUN_10007ed2c(pcVar7,puVar6);
    FUN_10007ed2c(pcVar7,puVar6);
  }
  return;
}

