// rea decompile_all
// name: FUN_1001c36e0
// address: 0x1001c36e0
// body: available
// range: 0x1001c36e0-0x1001c380f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1001c36e0(void)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  uint uVar6;
  long unaff_x20;
  ulong uVar7;
  long *local_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  plVar4 = (long *)0x0;
  if ((lVar3 == 0) ||
     (plVar4 = (long *)0x0,
     *(long *)(lVar3 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession) == 0)) {
LAB_1001c3768:
    FUN_1003db8c4();
    (**(code **)(*plVar4 + 0x108))(&local_50);
    _swift_release(plVar4);
    uVar6 = (uint)plVar4;
    if (local_50 == (long *)0x0) {
LAB_1001c37f4:
      uVar6 = 0;
      goto LAB_1001c37f8;
    }
    pcVar5 = *(code **)(*local_50 + 0xa0);
    plVar4 = local_50;
  }
  else {
    FUN_1000c7b64();
    uVar7 = plVar4[0xd];
    bVar1 = *(byte *)(plVar4 + 0xe);
    bVar2 = *(byte *)((long)plVar4 + 0x71);
    _swift_release();
    if ((bVar2 & 1) != 0) goto LAB_1001c3768;
    if ((bVar1 & 1) == 0) {
      if (uVar7 != 2) goto LAB_1001c3768;
    }
    else if (uVar7 < 2) goto LAB_1001c3768;
    FUN_1003db8c4();
    (**(code **)(*plVar4 + 0x108))(&local_50);
    _swift_release(plVar4);
    uVar6 = (uint)plVar4;
    if (local_50 == (long *)0x0) goto LAB_1001c37f4;
    pcVar5 = *(code **)(*local_50 + 0xb8);
    plVar4 = local_50;
  }
  (*pcVar5)();
  _swift_release(plVar4);
LAB_1001c37f8:
  return uVar6 & 1;
}

