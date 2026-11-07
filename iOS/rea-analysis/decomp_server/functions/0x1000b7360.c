// rea decompile_all
// name: FUN_1000b7360
// address: 0x1000b7360
// body: available
// range: 0x1000b7360-0x1000b756f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000b7360(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined8 local_48;
  
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    _UnregisterEventHotKey();
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000bfe30,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000017,
                  0x8000000100883730,0x3aa,0);
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_78,0,0);
  FUN_1000b489c(unaff_x20 + 0x20,&local_a0);
  if (local_88 == 0) {
    FUN_100040bb4(&local_a0,&DAT_100a766e0,&DAT_10080bdb0);
  }
  else {
    FUN_10007f3d4(&local_a0,auStack_60);
    puVar1 = auStack_60;
    FUN_10003f030(puVar1,local_48);
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,"removeMonitor:",puVar1);
    _swift_unknownObjectRelease(puVar1);
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
    _swift_beginAccess(unaff_x20 + 0x20,auStack_b8,0x21,0);
    FUN_1000c1344(&local_a0,unaff_x20 + 0x20);
    _swift_endAccess(auStack_b8);
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000bfe5c,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000017,
                  0x8000000100883730,0x3af,0);
    FUN_10003f094(auStack_60);
  }
  _swift_beginAccess(unaff_x20 + 0x48,auStack_60,1,0);
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    _RemoveEventHandler();
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000bfe88,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000017,
                  0x8000000100883730,0x3b4,0);
  }
  return;
}

