// rea decompile_all
// name: FUN_1001ce1fc
// address: 0x1001ce1fc
// body: available
// range: 0x1001ce1fc-0x1001ce303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1001ce1fc(void)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  uint uVar5;
  long unaff_x20;
  ulong uVar6;
  long *local_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  plVar3 = (long *)(unaff_x20 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  if (plVar3 == (long *)0x0) {
LAB_1001ce25c:
    FUN_1003db8c4();
    (**(code **)(*plVar3 + 0x108))(&local_50);
    _swift_release(plVar3);
    uVar5 = (uint)plVar3;
    if (local_50 == (long *)0x0) {
LAB_1001ce2e8:
      uVar5 = 0;
      goto LAB_1001ce2ec;
    }
    pcVar4 = *(code **)(*local_50 + 0xa0);
    plVar3 = local_50;
  }
  else {
    FUN_1000c7b64();
    uVar6 = plVar3[0xd];
    bVar1 = *(byte *)(plVar3 + 0xe);
    bVar2 = *(byte *)((long)plVar3 + 0x71);
    _swift_release();
    if ((bVar2 & 1) != 0) goto LAB_1001ce25c;
    if ((bVar1 & 1) == 0) {
      if (uVar6 != 2) goto LAB_1001ce25c;
    }
    else if (uVar6 < 2) goto LAB_1001ce25c;
    FUN_1003db8c4();
    (**(code **)(*plVar3 + 0x108))(&local_50);
    _swift_release(plVar3);
    uVar5 = (uint)plVar3;
    if (local_50 == (long *)0x0) goto LAB_1001ce2e8;
    pcVar4 = *(code **)(*local_50 + 0xb8);
    plVar3 = local_50;
  }
  (*pcVar4)();
  _swift_release(plVar3);
LAB_1001ce2ec:
  return uVar5 & 1;
}

