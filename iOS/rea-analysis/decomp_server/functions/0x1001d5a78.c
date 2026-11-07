// rea decompile_all
// name: FUN_1001d5a78
// address: 0x1001d5a78
// body: available
// range: 0x1001d5a78-0x1001d5c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d5a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [16];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_78 [24];
  
  lVar2 = _TtC14UURemoteServer15TerminalManager::sessions;
  puVar1 = auStack_78;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,puVar1,0x20,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  uVar3 = (undefined4)param_1;
  if ((*(long *)(lVar2 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar1 & 1) == 0)) {
    _swift_endAccess(auStack_78);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_90 = CONCAT44(local_90._4_4_,uVar3);
    FUN_1003fb48c(FUN_1001e47ac,local_a0,0xd000000000000095,0x8000000100889250,0xd00000000000001a,
                  0x800000010089f810,0x303,0);
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    _swift_endAccess(auStack_78);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0[0] = uVar3;
    local_98 = param_2;
    local_90 = param_3;
    _swift_retain(uVar4);
    FUN_1003fb48c(FUN_1001e47b4,auStack_b0,0xd000000000000095,0x8000000100889250,0xd00000000000001a,
                  0x800000010089f810,0x306,0);
    FUN_1001e8b38(param_2,param_3);
    _swift_release(uVar4);
  }
  return;
}

