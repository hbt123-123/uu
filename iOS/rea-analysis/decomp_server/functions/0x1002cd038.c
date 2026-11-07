// rea decompile_all
// name: FUN_1002cd038
// address: 0x1002cd038
// body: available
// range: 0x1002cd038-0x1002cd17b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cd038(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  plVar4 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar3 = *(undefined8 *)(plVar4[2] + 0x10);
  _os_unfair_lock_lock(uVar3);
  lVar7 = (long)plVar4 + *(long *)(*plVar4 + 0x60);
  _swift_beginAccess(lVar7,auStack_68,1,0);
  lVar2 = 0;
  FUN_1002c76a8();
  lVar5 = *(long *)(lVar7 + *(int *)(lVar2 + 100));
  *(undefined **)(lVar7 + *(int *)(lVar2 + 100)) = PTR___swiftEmptyArrayStorage_100995ea0;
  _os_unfair_lock_unlock(uVar3);
  uVar6 = *(ulong *)(lVar5 + 0x10);
  if (uVar6 != 0) {
    uVar8 = 0;
    puVar9 = (undefined8 *)(lVar5 + 0x28);
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002cd17c);
        (*pcVar1)();
      }
      uVar8 = uVar8 + 1;
      pcVar1 = (code *)puVar9[-1];
      uVar3 = *puVar9;
      _swift_retain(uVar3);
      (*pcVar1)();
      _swift_release(uVar3);
      puVar9 = puVar9 + 2;
    } while (uVar6 != uVar8);
  }
  _swift_bridgeObjectRelease(lVar5);
  lVar7 = unaff_x20 + _TtC9Alamofire7Request::delegate;
  _swift_beginAccess(lVar7,auStack_80,0,0);
  lVar2 = lVar7;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 8);
    _swift_getObjectType();
    (**(code **)(lVar7 + 0x20))();
    _swift_unknownObjectRelease(lVar2);
  }
  return;
}

