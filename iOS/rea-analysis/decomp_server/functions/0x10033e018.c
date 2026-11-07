// rea decompile_all
// name: FUN_10033e018
// address: 0x10033e018
// body: available
// range: 0x10033e018-0x10033e12b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033e018(void)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_68 [24];
  
  plVar6 = *(long **)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(plVar6[2] + 0x10);
  _swift_retain(plVar6);
  _os_unfair_lock_lock(uVar7);
  lVar8 = (long)plVar6 + *(long *)(*plVar6 + 0x60);
  _swift_beginAccess(lVar8,auStack_68,0x21,0);
  lVar4 = 0;
  FUN_10033f2a8();
  iVar3 = *(int *)(lVar4 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + iVar3));
  *(undefined **)(lVar8 + iVar3) = PTR___swiftEmptyArrayStorage_100995ea0;
  iVar3 = *(int *)(lVar4 + 0x1c);
  lVar5 = *(long *)(lVar8 + iVar3);
  if (lVar5 != 0) {
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar5);
  }
  *(undefined8 *)(lVar8 + iVar3) = 0;
  plVar1 = (long *)(lVar8 + *(int *)(lVar4 + 0x20));
  lVar8 = *plVar1;
  if (lVar8 != 0) {
    pcVar2 = (code *)plVar1[2];
    lVar4 = plVar1[3];
    lVar5 = plVar1[1];
    (*pcVar2)();
    FUN_10033f2e0(lVar8,lVar5,pcVar2,lVar4);
  }
  plVar1[1] = 0;
  *plVar1 = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  _swift_endAccess(auStack_68);
  _os_unfair_lock_unlock(uVar7);
  _swift_release(plVar6);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}

