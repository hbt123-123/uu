// rea decompile_all
// name: FUN_1001c339c
// address: 0x1001c339c
// body: available
// range: 0x1001c339c-0x1001c3557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1001c339c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [16];
  ulong local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = param_1;
  FUN_1001c36e0();
  if ((uVar1 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_70 = param_1;
    uStack_68 = param_2;
    FUN_1003fb4bc(FUN_1001c4688,auStack_80,0xd0000000000000a0,0x800000010089cf20,0xd00000000000001b,
                  0x800000010089d100,0xa1,0);
    lVar3 = 0;
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
    lVar2 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if ((lVar2 == 0) ||
       (lVar3 = 0,
       *(long *)(lVar2 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession) == 0)) {
      FUN_100401b14(0);
      FUN_1003fb4bc(FUN_1001c3810,0,0xd0000000000000a0,0x800000010089cf20,0xd00000000000001b,
                    0x800000010089d100,0xa6,0);
      lVar3 = 0;
      FUN_1000fc0ec(0);
      _swift_allocObject();
      _swift_unknownObjectWeakInit(lVar3 + 0x10,0);
      _swift_beginAccess(lVar3 + 0x10,auStack_60,1,0);
      _swift_unknownObjectWeakAssign(lVar3 + 0x10,0);
    }
    else {
      FUN_1000c8148(0);
    }
  }
  return lVar3;
}

