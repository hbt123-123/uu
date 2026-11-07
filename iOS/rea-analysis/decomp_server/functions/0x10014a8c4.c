// rea decompile_all
// name: FUN_10014a8c4
// address: 0x10014a8c4
// body: available
// range: 0x10014a8c4-0x10014aac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10014a8c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  plVar2 = (long *)(unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::managerDelegate);
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _TtC14UURemoteServer16ClipboardHandler::ref;
  if (plVar2 != (long *)0x0) {
    _swift_beginAccess((long)plVar2 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_68,0,0);
    uVar3 = (long)plVar2 + lVar1;
    _swift_unknownObjectWeakLoadStrong();
    if ((uVar3 != 0) && (FUN_10000b338(), (uVar3 & 1) != 0)) {
      FUN_100401b14(0);
      FUN_1003fb45c(FUN_1001bcaf4,0,0xd00000000000009f,0x8000000100892750,0xd00000000000001d,
                    0x80000001008927f0,0x7d,7);
      _swift_unknownObjectRelease();
      FUN_100149e1c();
      (**(code **)(*plVar2 + 0x88))(&local_70);
      _swift_release(plVar2);
      puVar4 = &DAT_10099ece0;
      _swift_allocObject(&DAT_10099ece0,0x18,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      FUN_100151b34(param_1,param_2,local_70,FUN_1001524cc,puVar4);
      _swift_release(puVar4);
      return;
    }
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_1001bcb20,0,0xd00000000000009f,0x8000000100892750,0xd00000000000001d,
                  0x80000001008927f0,0x80,7);
    _swift_unknownObjectRelease(plVar2);
  }
  FUN_100149dec();
  FUN_100151b34(param_1,param_2,plVar2,0,0);
  FUN_100152230();
  FUN_100151730();
  return;
}

