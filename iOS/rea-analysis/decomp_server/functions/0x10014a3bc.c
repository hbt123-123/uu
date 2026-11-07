// rea decompile_all
// name: FUN_10014a3bc
// address: 0x10014a3bc
// body: available
// range: 0x10014a3bc-0x10014a5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014a3bc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_80 [16];
  long local_70;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1 + _TtC14UURemoteServer22ClipboardBaseOperation::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _TtC14UURemoteServer16ClipboardHandler::ref;
  local_70 = param_1;
  if (lVar2 != 0) {
    _swift_beginAccess(lVar2 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_58,0,0);
    uVar3 = lVar2 + lVar1;
    _swift_unknownObjectWeakLoadStrong();
    if ((uVar3 != 0) && (FUN_10000b338(), (uVar3 & 1) != 0)) {
      FUN_100401b14(0);
      FUN_1003fb45c(FUN_1001bcaf4,0,0xd00000000000009f,0x8000000100892750,0xd00000000000001d,
                    0x80000001008927f0,0x7d,7);
      _swift_unknownObjectRelease(lVar2);
      (*(code *)PTR____chkstk_darwin_100995498)();
      puVar4 = &DAT_100a7a2e8;
      FUN_100004bb4(&DAT_100a7a2e8,&DAT_10080ec60);
      _swift_allocObject();
      pcVar5 = FUN_100152568;
      goto LAB_10014a590;
    }
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_1001bcb20,0,0xd00000000000009f,0x8000000100892750,0xd00000000000001d,
                  0x80000001008927f0,0x80,7);
    _swift_unknownObjectRelease(lVar2);
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar4 = &DAT_100a7a2e8;
  FUN_100004bb4(&DAT_100a7a2e8,&DAT_10080ec60);
  _swift_allocObject();
  pcVar5 = FUN_100152530;
LAB_10014a590:
  FUN_100615648(pcVar5,auStack_80,puVar4);
  return;
}

