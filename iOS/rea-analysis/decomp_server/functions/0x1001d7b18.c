// rea decompile_all
// name: FUN_1001d7b18
// address: 0x1001d7b18
// body: available
// range: 0x1001d7b18-0x1001d7e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001d7b18(long param_1,undefined8 param_2,long param_3,code *param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_c0 [16];
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalManager::renamingSessionIds,
                       auStack_90,0x21,0);
    FUN_1001df660(param_2,FUN_10006e074);
    _swift_endAccess(auStack_90);
    _swift_beginAccess(param_3 + 0x10,auStack_90,0,0);
    param_3 = param_3 + 0x10;
    _swift_weakLoadStrong();
    uVar3 = (undefined4)param_2;
    if (param_3 == 0) {
      FUN_100401b14();
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_a0 = CONCAT44(local_a0._4_4_,uVar3);
      FUN_1003fb4bc(FUN_1001e1414,local_b0,0xd000000000000095,0x8000000100889250,0xd000000000000029,
                    0x800000010089ea40,0x100,0);
      (*param_4)(2,0xd000000000000011,0x800000010088a4f0,0);
    }
    else {
      if ((param_6 & 1) == 0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_a0 = CONCAT44(local_a0._4_4_,uVar3);
        FUN_1003fb4ec(FUN_1001e141c,local_b0,0xd000000000000095,0x8000000100889250,
                      0xd000000000000029,0x800000010089ea40,0x105,0);
        (*param_4)(5,0xd000000000000015,0x800000010089eb70,0);
      }
      else {
        puVar1 = (undefined8 *)(param_3 + _TtC14UURemoteServer15TerminalSession::name);
        uVar2 = puVar1[1];
        *puVar1 = param_7;
        puVar1[1] = param_8;
        _swift_bridgeObjectRetain(param_8);
        _swift_bridgeObjectRelease(uVar2);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_b0[0] = uVar3;
        local_a8 = param_7;
        local_a0 = param_8;
        FUN_1003fb48c(FUN_1001e1424,auStack_c0,0xd000000000000095,0x8000000100889250,
                      0xd000000000000029,0x800000010089ea40,0x10a,0);
        (*param_4)(0,0x6b6f,0xe200000000000000,1);
      }
      _swift_release(param_3);
    }
  }
  return;
}

